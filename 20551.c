#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#define SIZE 4800014

typedef struct
{
	int num;
	int ord;
}ARR;

ARR* merge_sort(ARR* arr, int size, int offset)
{
	if(size == 1)	return arr;
	ARR tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	ARR *left=merge_sort(arr, mid, offset);
	ARR *right=merge_sort(&arr[mid], end, offset);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)
		{
			int left_val=*((int *)((char *)&left[j]+offset));
			int right_val=*((int *)((char *)&right[k]+offset));

			tmp[i]=(left_val < right_val)?	left[j++]:right[k++];
		}
		else tmp[i]=(j < mid)?		left[j++]:right[k++];
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
	ARR *d=(ARR *)calloc(200000, sizeof(ARR));
	int *a=(int *)calloc(200000, sizeof(int));
	char *buf=(char *)malloc(SIZE);
	char *p=buf;
	int n=0, m=0, i=0, j=0, flag=1;

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
	for(j=0; j < m; ++j, flag=1)
	{
		d[j].ord=j;
		while(*p != '\n')
		{
			if(*p == '-')	flag=-1, ++p;
			d[j].num*=10;
			d[j].num+=*p-'0';
			++p;
		}
		++p;
		d[j].num*=flag;
	}
	int_merge_sort(a, n);
	merge_sort(d, m, offsetof(ARR, num));
	i=j=0;
	while(i < n && j < m)
	{
		if(d[j].num == a[i])		d[j].num=i, ++j;
		else if(d[j].num < a[i])	d[j].num=-1, ++j;
		else						++i;
	}
	while(j < m)	d[j].num=-1, ++j;
	merge_sort(d, m, offsetof(ARR, ord));

	for(j=0; j < m; ++j)	printf("%d\n", d[j].num);
	free(buf);
	free(a);
	free(d);
}
