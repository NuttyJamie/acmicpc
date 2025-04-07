#include <stdio.h>

int* merge_sort(int arr[], int size)
{
	if(size == 1) return arr;
	int tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	int *left=merge_sort(arr, mid);
	int *right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else					tmp[i]=(j < mid)?				left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	int arr[50];
	int *p=arr, *q=arr;
	int i, n, min=5, count=0;

	scanf("%d", &n);

	for(i=0; i < n; ++i)	scanf("%d", &arr[i]);

	merge_sort(arr, n);

	for(count=0; p < arr+n; ++p, count=0)
	{
		for(q=p+1; q < arr+n && *q < *p+5; ++q)	++count;
		count=4-count;
		min=(count < min)?	count:min;
	}
	printf("%d", min);
}
