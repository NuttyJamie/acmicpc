#include <stdio.h>
#include <unistd.h>

typedef struct
{
	char ch;
	int count;
}STAT;

STAT* merge_sort(STAT arr[], int size)
{
	if(size == 1)	return arr;
	STAT tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	STAT* left=merge_sort(arr, mid);
	STAT* right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(left[j].count >= right[k].count)? left[j++]:right[k++];
		else					tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	char buf[2550];
	char* p=buf;
	STAT set[26]={0};
	int i;

	ssize_t l=read(0, buf, sizeof(buf));
	while(i < 26)	set[i].ch='a'+i, ++i;
	while(p < buf+l)
	{
		if(*p > 95)	++set[*p-'a'].count;
		++p;
	}

	merge_sort(set, 26);
	putchar(set[0].ch);
	for(i=1; i < 26; ++i)
	{
		if(set[i].count != set[0].count)	break;
		else putchar(set[i].ch);
	}
}
