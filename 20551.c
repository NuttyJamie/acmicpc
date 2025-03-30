#include <stdio.h>
#include <io.h>
#include <stdlib.h>
#define SIZE 4800014

typedef struct
{
	int num;
	int ord;
}ARR;

ARR* merge_sort(ARR* arr, int size)
{
	if(size == 1)	return arr;
	ARR tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	ARR *left=merge_sort(arr, mid);
	ARR *right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(left[j].num < right[k].num)?	left[j++]:right[k++];
		else					tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int* int_merge_sort(int* arr, int size)
{
	if(size == 1)	return arr;
	int tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	int *left=int_merge_sort(arr, mid);
	int *right=int_merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else					tmp[i]=(j < mid)?	left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	ARR *d=(ARR *)calloc(0, sizeof(ARR)*200000);
	int *a=(int *)calloc(0, sizeof(int)*200000);
	char *buf=(char *)malloc(SIZE);
	char *p=buf;
	int n=0, m=0, i=0, flag=1;

	setbuf(stdin, NULL);
	ssize_t l=read(0, buf, SIZE);
	buf[--l]='\n';

	while(*p != ' ')
	{
		n=(n<<3)+(n<<1);
		n+=*p-'0';
		++p;
	}
	++p;
	while(*p != '\n')
	{
		m=(m<<3)+(m<<1);
		m+=*p-'0';
		++p;
	}
	++p;
	for(i=0; i < n; ++i, flag=1)
	{
		while(*p != '\n')
		{
			if(*p == '-')	flag=-1, ++p;
			a[i]*=10;
			a[i]+=*p-'0';
			++p;
		}
		++p;
		a[i]*=flag;
	}
	for(i=0; i < m; ++i, flag=1)
	{
		d[i].ord=i;
		while(*p != '\n')
		{
			putchar(*p);
			putchar(' ');
			if(*p == '-')	flag=-1, ++p;
			d[i].num*=10;
			d[i].num+=*p-'0';
			++p;
		}
		++p;
		d[i].num*=flag;
		printf("%d\n", d[i].num);
	}
	int_merge_sort(a, n);
	for(int i=0; i < n; ++i)	printf("# %d\n", a[i]);
	free(buf);
}
