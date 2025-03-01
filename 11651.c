#include <stdio.h>
#include <unistd.h>

typedef struct
{
	int x;
	int y;
}COORD;

COORD* merge_sort(COORD arr[], int size)
{
	if(size == 1)	return arr;
	int mid=size>>1, end=size-mid;
	COORD temp[size];
	COORD *left=merge_sort(arr, mid);
	COORD *right=merge_sort(&arr[mid], end);

	for(int i=0, j=0, k=0; i < size; ++i)
	{
		if(j < mid && k < end)
		{
			if(left[j].y == right[k].y)
			{
				temp[i]=(left[j].x < right[k].x)?	left[j++]:right[k++];
			}
			else	temp[i]=(left[j].y < right[k].y)?	left[j++]:right[k++];
		}
		else if(j < mid)	temp[i]=left[j++];
		else				temp[i]=right[k++];
	}
	for(int i=0; i < size; ++i)	arr[i]=temp[i];
	return arr;
}

int main()
{
	COORD coord[100000]={0};
	char buf[1600000]={0};
	char *p=buf;
	int i=0, j=0;

	setbuf(stdin, NULL);
	scanf("%*d");

	ssize_t l=read(0, buf, sizeof(buf));

	while(p < buf+l)
	{
		int flag=1;
		if(*p == '-')
		{
			flag=-1;
			++p;
		}
		while(*p != ' ')
		{
			coord[i].x*=10;
			coord[i].x+=*p-'0';
			++p;
		}
		coord[i].x*=flag;
		++p;
		if(*p == '-')
		{
			flag=-1;
			++p;
		}
		else flag=1;
		while(*p != '\n')
		{
			coord[i].y*=10;
			coord[i].y+=*p-'0';
			++p;
		}
		coord[i].y*=flag;
		++i, ++p;
	}
	merge_sort(coord, i);
	while(j < i)	printf("%d %d\n", coord[j++].x, coord[j].y);
}
