#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define M 12000000
#define L 1000000
#define OFFSET(n, offset) ((offset == 0)?	(n).ord:(n).num)

typedef struct coord
{
	int ord;
	int num;
}COORD;

COORD* merge_sort(COORD arr[], int size, int offset)
{
	if(size == 1)	return arr;
	COORD tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	COORD *left=merge_sort(arr, mid, offset);
	COORD *right=merge_sort(&arr[mid], end, offset);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(OFFSET(left[j], offset) < OFFSET(right[k], offset))?	left[j++]:right[k++];
		else					tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	COORD x[L]={0};
	char *buf=(char *)malloc(M);
	char *p=buf;
	int d, i, n, flag=1;

	for(i=0; i < L; ++i)	x[i].ord=i;
	scanf("%d ", &n);
	setbuf(stdin, NULL);

	ssize_t l=read(0, buf, M);
	--l;

	i=0;
	while(p < buf+l)
	{
		if(*p == '-')	flag=-1;
		else if(*p != ' ')
		{
			x[i].num=(x[i].num<<3)+(x[i].num<<1);
			x[i].num+=*p-'0';
		}
		else
		{
			x[i].num*=flag;
			flag=1;
			++i;
		}
		++p;

	}
	x[i].num*=flag;

	merge_sort(x, n, 1);
	for(int t=x[0].num, d=0, i=0; i < n; ++i)
	{
		if(x[i].num != t)	++d;
		t=x[i].num;
		x[i].num=d;
	}

	merge_sort(x, n, 0);
	for(i=0; i < n; ++i)
		printf("%d ", x[i].num);

}
