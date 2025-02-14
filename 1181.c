#include <stdio.h>
#include <unistd.h>

typedef struct str
{
	char s[51];
	char length;
}STR;

STR* merge_sort(STR str[], int size)
{
	if(size == 1) return str;
	int i, j, k, mid=size>>1, half=size-mid;
	STR tmp[size];

	STR *left=merge_sort(str, mid);
	STR *right=merge_sort(&str[mid], half);
	for(i=0, j=0, k=0; i < size; ++i)
	{
		if(j < mid && !left[j].length)
		{
			++j;
			tmp[i].length=0;
			continue;
		}

		if(k < half && !right[k].length)
		{
			++k;
			tmp[i].length=0;
			continue;
		}

		if(j < mid && k < half)
		{
			if(left[j].length < right[k].length) tmp[i]=left[j++];
			else if(left[j].length > right[k].length) tmp[i]=right[k++];
			else
			{
				char flag=0;
				for(int p=0; p < left[j].length; ++p)
				{
					flag=left[j].s[p]-right[k].s[p];
					if(flag) break;
				}
				if(!flag)
				{
					tmp[i]=left[j++];
					right[k].length=0;
				}
				else if(flag < 0)	tmp[i]=left[j++];
				else 				tmp[i]=right[k++];
			}
		}
		else if(j < mid)	tmp[i]=left[j++];
		else 				tmp[i]=right[k++];
	}
	for(i=0; i < size; ++i) str[i]=tmp[i];
	return str;
}

int main()
{
	STR str[20000]={[0 ... 19999]={.length=0}};
	char buf[1020000];
	char *p=buf;
	int i, j, n;

	setbuf(stdin, NULL);
	scanf("%d", &n);
	int size=read(0, buf, sizeof(buf));
	buf[size-1]='\n';
	i=j=0;
	while(p < buf+size)
	{
		if(*p != '\n')
		{
			++str[j].length;
			str[j].s[i++]=*p;
		}
		else
		{
			str[j++].s[i]='\0';
			str[j].length=0;
			i=0;
		}
		++p;
	}
	merge_sort(str, n);
	for(int i=0; i < n; ++i)
		if(str[i].length)
			puts(str[i].s);
}
