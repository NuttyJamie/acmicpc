#include <stdio.h>

typedef struct
{
	int h;
	int m;
	int s;
	int total;
}TIMES;

void merge(TIMES arr[], TIMES left[], int mid, TIMES right[], int end)
{
	int t=mid+end;	
	TIMES tmp[t];
	int i, j, k;

	for(i=j=k=0; i < t; ++i)
	{
		if(j < mid && k < end)
			tmp[i]=(left[j].total < right[k].total)?	left[j++]:right[k++];
		else tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < t; ++i) arr[i]=tmp[i];
}

TIMES* merge_sort(TIMES times[], int size)
{
	if(size == 1) return times;
	int mid=size/2, end=size-mid;

	TIMES* left=merge_sort(times, mid);
	TIMES* right=merge_sort(&times[mid], end);

	merge(times, left, mid, right, end);

	return times;
}

int main()
{
	TIMES t[5000];
	int n, i;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		scanf("%d %d %d", &t[i].h, &t[i].m, &t[i].s);
		t[i].total=t[i].h*3600+t[i].m*60+t[i].s;
	}

	merge_sort(t, n);
	
	for(i=0; i < n; ++i)
		printf("%d %d %d\n", t[i].h, t[i].m, t[i].s);
}
