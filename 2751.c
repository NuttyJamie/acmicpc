#include <stdio.h>

int* merge_sort(int arr[], int size)
{
	if(size == 1)	return arr;
	int mid=size>>1, end=size-mid;
	int temp[size];
	int *left=merge_sort(arr, mid);
	int *right=merge_sort(&arr[mid], end);

	for(int i=0, j=0, k=0; i < size; ++i)
	{
		if(j < mid && k < end) temp[i]=(left[j] <= right[k])?	left[j++]:right[k++];
		else if(j < mid)	temp[i]=left[j++];
		else				temp[i]=right[k++];
	}
	for(int i=0; i < size; ++i)	arr[i]=temp[i];
	return arr;
}

int main()
{
	int n, i=0;
	int t[1000000];

	scanf("%d", &n);

	while(i < n)	scanf("%d", &t[i++]);

	merge_sort(t, n);

	i=0;
	while(i < n) 	printf("%d\n", t[i++]);
}
