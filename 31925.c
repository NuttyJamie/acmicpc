#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define SIZE 370006

typedef struct
{
	char name[11];
	int rank;
}LIST;

int compare_rank(const void* left, const void* right)
{
	const LIST *l=(const LIST*)left;
	const LIST *r=(const LIST*)right;
	if(l->rank < r->rank) 	return -1;
	else 					return 1;
}

LIST* merge_sort(LIST arr[], int size)
{
	if(size == 1)	return arr;
	LIST tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	LIST *left=merge_sort(arr, mid);
	LIST *right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)
		{
			int result=strncmp(left[j].name, right[k].name, 10);
			tmp[i]=(result < 0)?	left[j++]:right[k++];
		}
		else	tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	LIST *list=(LIST *)calloc(10000, sizeof(LIST));
	char *raw=(char *)calloc(SIZE, sizeof(char));
	char *p=raw, *q=raw;
	int i=0, j=0, n=0, s=0, a=0;

	ssize_t l=read(0, raw, SIZE);
	raw[l-1]='\n';

	while(*p != '\n')
	{
		n=(n<<3)+(n<<1);
		n+=*p-'0';
		++p;
	}

	++p;
	while(n--)
	{
		s=0, a=0, j=0;
		q=p;

		while(*q++ != ' ');
		if(*q == 'h')
		{
			while(*p++ != '\n');
			continue;
		}
		else
		{
			while(*q++ != ' ');
			if(*q == 'w')
			{
				while(*p++ != '\n');
				continue;
			}
			else
			{
				while(*q++ != ' ');
				int flag=1;
				if(*q == '-')	++q, flag=-1;
				while(*q != ' ')
				{
					s=(s<<3)+(s<<1);
					s+=*q-'0';
					++q;
				}
				++q;
				s*=flag;
				if(s > 0 && s < 4)
				{
					while(*p++ != '\n');
					continue;
				}
				else
				{
					while(*p != ' ') list[i].name[j++]=*p++;
					list[i].name[j]='\0';
					while(*q != '\n')
					{
						a=(a<<3)+(a<<1);
						a+=*q-'0';
						++q;
					}
					list[i++].rank=a;
					while(*p++ != '\n');
				}
			}
		}
	}
	free(raw);

	qsort(list, i, sizeof(LIST), compare_rank);
	i=(i < 11)?	i:10;
	merge_sort(list, i);

	if(i)	printf("%d\n", i);
	for(n=0; n < i; ++n)
		printf("%s\n", list[n].name);
}
