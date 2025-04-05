#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 1100008

int* merge_sort(int arr[], int size)
{
	if(size == 1)	return arr;
	int tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	int *left=merge_sort(arr, mid);
	int *right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	
			tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else	tmp[i]=(j < mid)?			left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}
	
int main()
{
	char *buf=(char *)calloc(N, sizeof(char));
	char *p=buf;
	int *num=(int *)calloc(N, sizeof(int));
	int i=0, n=0, count=0;

	ssize_t l=read(0, buf, N);
	buf[l-1]='\n';

	while(*p != '\n')
	{
		n=(n<<3)+(n<<1);
		n+=*p-'0';
		++p;
	}
	++p;

	while(*p != '\n')
	{
		if(*p == ' ')	++i, ++p;
		num[i]=(num[i]<<3)+(num[i]<<1);
		num[i]+=*p-'0';
		++p;
	}

	merge_sort(num, n);
	--n;
	for(i=0; i < n; ++i)
		if(num[i] != num[i+1])	++count;

	printf("%d", count+1);
}
