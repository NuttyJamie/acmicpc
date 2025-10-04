#include <stdio.h>

void merge(char arr[], int size, char left[], char right[])
{
	char tmp[size];
	int i, j, k;
	int mid=size>>1, last=size-mid;

	for(i=j=k=0; i < size; ++i)
	{
		if(j < mid && k < last)
			tmp[i]=(left[j] < right[k])?	left[j++]:right[k++];
		else
			tmp[i]=(j < mid)?				left[j++]:right[k++];
	}

	for(i=0; i < size; ++i) arr[i]=tmp[i];
}

char* merge_sort(char arr[], int size)
{
	if(size == 1) return arr;
	int mid=size>>1, last=size-mid;

	char *left=merge_sort(arr, mid);
	char *right=merge_sort(&arr[mid], last);

	merge(arr, size, left, right);

	return arr;
}

int main()
{
	int l_s=0, l_t=0;
	char s[10001], t[10001];
	char *ps=s, *pt=t;

	scanf("%s %s", s, t);

	for(ps=s; *ps != '\0'; ++ps) ++l_s;
	for(pt=t; *pt != '\0'; ++pt) ++l_t;

	merge_sort(s, l_s);
	merge_sort(t, l_t);

	ps=s;
	pt=t;
	while(*ps != '\0' && *pt != '\0')
	{
		if(*ps == *pt)		++pt;
		else if(*ps > *pt)	break;
		++ps;
	}

	if(*pt == '\0') printf("OK");
	else			printf("NEED FIX");
}
