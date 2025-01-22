#include <stdio.h>

int* merge_sort(int arr[], int size)
{
	if(size == 1)	return arr;
	int temp[size];
	int i=0, j=0, k=0, mid=size>>1, end=size-mid;

	int *left=merge_sort(arr, mid);
	int *right=merge_sort(&arr[mid], end);

	while(i < size)
	{
		if(j < mid && k < end)
			temp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else if(j < mid) temp[i]=left[j++];
		else temp[i]=right[k++];
		++i;
	}
	for(i=0; i < size; ++i)	arr[i]=temp[i];
	return arr;
}

int main()
{
	int b[1000]={0};
	int n, sum=0;

	scanf("%d ", &n);

	for(int i=0; i < n; ++i) scanf("%d", &b[i]);

	merge_sort(b, n);

	sum+=b[n-1]-b[0];
	while(n-- > 1) sum+=b[n]-b[n-1];
	printf("%d", sum);
}
