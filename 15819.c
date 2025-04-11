#include <stdio.h>
#include <string.h>

void merge_sort(char arr[][21], int size)
{
	if(size == 1)	return;
	int i, j, k, mid=size>>1, end=size-mid;
	char left[mid][21], right[end][21];


	for(i=0; i < mid; ++i)	strcpy(left[i], arr[i]);
	for(i=0; i < end; ++i)	strcpy(right[i], arr[mid+i]);

	merge_sort(left, mid);
	merge_sort(right, end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)
			strcpy(arr[i], (strcmp(left[j], right[k]) < 0)?	left[j++]:right[k++]);
		else
			strcpy(arr[i], (j < mid)?	left[j++]:right[k++]);
	}

	return;
}

int main()
{
	char handle[100][21]={0};
	int i, n, l;

	scanf("%d %d", &n, &i);

	for(l=0; l < n; ++l)
		scanf("%s", handle[l]);

	merge_sort(handle, n);

	printf("%s", handle[i-1]);
}
