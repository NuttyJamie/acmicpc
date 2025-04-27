#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int* merge_sort(int arr[], int size)
{
	if(size == 1)	return arr;
	int tmp[size];
	int i, j, k, mid=size>>1, end=size-mid;

	int *left=merge_sort(arr, mid);
	int *right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)	tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else					tmp[i]=(j < mid)?				left[j++]:right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	int *p=(int *)calloc(100000, sizeof(int));
	int n=0, x=0, i=0;
	char *buf=(char *)calloc(1100018, sizeof(char));
	char *c=buf;

	setbuf(stdin, NULL);
	ssize_t l=read(0, buf, 1100018);
	buf[l-1]='\0';

	while(*c != ' ')
	{
		n*=10;
		n+=*c-'0';
		++c;
	}
	++c;
	
	while(*c != '\n')
	{
		x*=10;
		x+=*c-'0';
		++c;
	}
	++c;

	for(i=0; c < buf+l; ++c) 
	{
		if(*c >= '0')
		{
			p[i]*=10;
			p[i]+=*c-'0';
		}
		else ++i;
	}

	free(buf);
	merge_sort(p, n);

	for(i=0; i < n-1; ++i)
		if(p[i]+p[i+1] > x)
			break;

	printf("%d", (i == n-1)?	n:i+1);
	
	free(p);
}
