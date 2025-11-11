#include <stdio.h>

void merge(int arr[], int left[], int lsize, int right[], int rsize)
{
	int tmp[lsize+rsize];
	int i, j, k, total=lsize+rsize;

	for(i=j=k=0; i < total; ++i)
	{
		if(j < lsize && k < rsize)
			tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else 
			tmp[i]=(j < lsize)?				left[j++]:right[k++];
	}

	for(i=0; i < total; ++i) arr[i]=tmp[i];
}

int* merge_sort(int arr[], int size)
{
	if(size == 1)	return arr;
	int l_half=size>>1, r_half=size-l_half;
	
	int *left=merge_sort(arr, l_half);
	int *right=merge_sort(&arr[l_half], r_half);

	merge(arr, left, l_half, right, r_half);

	return arr;
}

int main()
{
	int s[100000];
	int n, i, min;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%d", &s[i]);

	merge_sort(s, n);

	min=s[0]+s[n-1];
	for(int half=n>>1, i=1; i < half; ++i)
	{
		if(s[i]+s[n-i-1] < min)
			min=s[i]+s[n-i-1];
	}

	printf("%d", min);
}
