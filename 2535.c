#include <stdio.h>

typedef struct
{
	char cnt;
	char std;
	int scr;
}RANK;

RANK* merge_sort(RANK arr[], int size)
{
	if(size == 1)	return arr;
	RANK tmp[size];
	int mid=size>>1, end=size-mid;
	int i, j, k;

	RANK* left=merge_sort(arr, mid);
	RANK* right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(left[j].scr > right[k].scr)?	left[j++]:right[k++];
		else					tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	RANK rank[100]={0};
	int n, i;

	scanf("%d", &n);

	for(i=0; i < n; ++i) scanf("%d %d %d", &rank[i].cnt, &rank[i].std, &rank[i].scr);

	merge_sort(rank, n);

	printf("%d %d\n", rank[0].cnt, rank[0].std);
	printf("%d %d\n", rank[1].cnt, rank[1].std);
	if(rank[0].cnt == rank[1].cnt)
		for(i=2; rank[0].cnt == rank[i].cnt; ++i);
	else	i=2;
	printf("%d %d", rank[i].cnt, rank[i].std);
}
