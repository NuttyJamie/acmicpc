#include <stdio.h>

typedef struct
{
	char c;
	int ord;
}IDC;

IDC* mg(IDC arr[], int size)
{
	if(size == 1) return arr;
	IDC tmp[size];
	int mid=size>>1, end=size-mid;
	int i, j, k;

	IDC* l=mg(arr, mid);
	IDC* r=mg(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(l[j].ord < r[k].ord)?	l[j++]:r[k++];
		else if(j < mid)		tmp[i]=l[j++];
		else 					tmp[i]=r[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	IDC arr[100]={0};
	char s[101]={0};
	int d, i, n;

	scanf("%d ", &n);

	for(i=0; i < n; ++i)
	{
		scanf("%s %d %d", s, &arr[i].ord, &d);
		--d;
		arr[i].c=(s[d] > 'Z')?	s[d]-32:s[d];
	}

	mg(arr, n);

	for(i=0; i < n; ++i)	putchar(arr[i].c);
}
