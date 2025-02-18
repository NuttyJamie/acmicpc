#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFSIZE 100000

typedef struct member
{
	int age;
	char name[101];
}MEMBER;

MEMBER* merge_sort(MEMBER arr[], int size)
{
	if(size == 1)	return arr;
	MEMBER tmp[size];
	int mid=size>>1, end=size-mid;
	int i, j, k;

	MEMBER *left=merge_sort(arr, mid);
	MEMBER *right=merge_sort(&arr[mid], end);

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < end)
			tmp[i]=(left[j].age <= right[k].age)?	left[j++]:right[k++];
		else if(j < mid)	tmp[i]=left[j++];
		else				tmp[i]=right[k++];
	}

	for(i=0; i < size; ++i)	arr[i]=tmp[i];

	return arr;
}

int main()
{
	MEMBER* member=(MEMBER*)malloc(sizeof(MEMBER)*BUFSIZE);
	char* buf=(char*)malloc(sizeof(char)*105*BUFSIZE);
	char *p=buf;
	int i=0, j=0;

	setbuf(stdin, NULL);
	scanf("%*d");
	ssize_t l=read(0, buf, 105*BUFSIZE);

	while(p < buf+l)
	{
		while(*p != ' ')
		{
			member[i].age*=10;
			member[i].age+=*p-'0';
			++p;
		}
		++p;
		while(*p != '\n')
			member[i].name[j++]=*p++;
		member[i].name[j]='\0';
		++p, ++i;
		j=0;
	}
	merge_sort(member, i);
	for(j=0; j < i; ++j)	printf("%d %s\n", member[j].age, member[j].name);
	free(member);
	free(buf);
}
