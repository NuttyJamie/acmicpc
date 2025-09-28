#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 4000001

void merge(int arr[], int size, int left[], int right[])
{
	int tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)
			tmp[i]=(left[j] < right[k])?
				left[j++]:right[k++];
		else
			tmp[i]=(j < mid)?
				left[j++]:right[k++];
	}

	for(i=0; i < size; ++i) arr[i]=tmp[i];
}

int* merge_sort(int arr[], int size)
{
	if(size == 1) return arr;
	int mid=size>>1, end=size-mid;

	int *left=merge_sort(arr, mid);
	int *right=merge_sort(&arr[mid], end);

	merge(arr, size, left, right);

	return arr;
}

int main()
{
	int arr[500000]={0};
	int t, i, n=0;
	char *buf=(char *)calloc(N, 1);
	char *c=buf;

	ssize_t l=read(0, buf, N);

	while(*c != '\n')
	{
		n*=10;
		n+=(*c-'0');
		++c;
	}
	++c;

	for(i=0; c < buf+l; ++i, ++c)
	{
		for(t=0; *c != ' ' && *c != '\n'; ++c)
		{
			t*=10;
			t+=(*c-'0');
		}

		arr[i]=t;
	}

	merge_sort(arr, n);

	for(i=n-1; (0 <= i) && (n-i <= arr[i]); --i);

	printf("%d", n-i-1);
}
