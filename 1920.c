#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 2400014

int* merge_sort(int arr[], int size)
{
	if(size == 1) return arr;
	int tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	int* left=merge_sort(arr, mid);
	int* right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end) 	tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else 					tmp[i]=(j < mid)?				left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

char binary_search(int obj, int target[], int size)
{
	int start=0, end=size-1, mid;

	while(start <= end)
	{
		mid=(start+end)>>1;
		if(obj < target[mid]) 		end=mid-1;
		else if(obj > target[mid])	start=mid+1;
		else						return '1';
	}

	return '0';
}

int main()
{
	char *buf=(char *)malloc(N);
	char *p=buf;
	int *a=(int *)calloc(100000, sizeof(int));
	int *b=(int *)calloc(100000, sizeof(int));
	int flag=1, i=0, j=0;

	setbuf(stdin, NULL);
	ssize_t l=read(0, buf, N);
	--l;

	while(*p++ != '\n');
	while(*p != '\n')
	{
		if(*p == '-')	flag=-1;
		else if(*p != ' ')
		{
			a[i]=(a[i]<<3)+(a[i]<<1);
			a[i]+=*p-'0';
		}
		else
		{
			a[i]*=flag;
			flag=1;
			++i;
		}
		++p;
	}
	a[i]*=flag;
	flag=1;
	++i, ++p;
	while(*p++ != '\n');
	while(p < buf+l)
	{
		if(*p == '-')	flag=-1;
		else if(*p != ' ')
		{
			b[j]=(b[j]<<3)+(b[j]<<1);
			b[j]+=*p-'0';
		}
		else
		{
			b[j]*=flag;
			flag=1;
			++j;
		}
		++p;
	}
	b[j]*=flag;
	flag=1;
	++j;
	merge_sort(a, i);

	for(flag=0; flag < j; ++flag)
	{
		buf[flag<<1]=binary_search(b[flag], a, i);
		buf[(flag<<1)+1]='\n';
	}
	write(1, buf, j<<1);
	free(buf);
	free(a);
	free(b);
}
