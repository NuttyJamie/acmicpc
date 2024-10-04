#include <stdio.h>
#include <string.h>

char* getBiggerAbs(char *arr1, char *arr2)
{
	int arr1_size, arr2_size;
	int i, j=0, k=0;

	arr1_size=(arr1[0] != '-')?	strlen(arr1):strlen(arr1)-1;
	arr2_size=(arr2[0] != '-')?	strlen(arr2):strlen(arr2)-1;

	if	   (arr1_size > arr2_size)	return arr1;
	else if(arr1_size < arr2_size)	return arr2;
	else
	{
		if(arr1[0] == '-')	j++;
		if(arr2[0] == '-')	k++;

		for(i=0; i < arr1_size; ++i)
		{
			if	   (arr1[i+j] > arr2[i+k]) return arr1;
			else if(arr1[i+j] < arr2[i+k]) return arr2;
		}
	}
	return NULL;
}

int add(char *arr1, char *arr2)
{
	int i, d1=0, d2=0, carry=0;
	int arr1_size=strlen(arr1);
	int arr2_size=strlen(arr2);

	if(arr1[0] == '-')	d1=1;
	if(arr2[0] == '-')	d2=1;

	for(i=1; arr2_size-i >= d2; ++i)
	{
		arr1[arr1_size-i]+=arr2[arr2_size-i]-48+carry;
		carry=0;
		if(arr1[arr1_size-i] > '9')
		{
			arr1[arr1_size-i]-=10;
			carry++;
		}
	}

	while(arr1_size-i >= d1)
	{
		arr1[arr1_size-i]+=carry;
		carry=0;
		if(arr1[arr1_size-i] > '9')
		{
			arr1[arr1_size-i]-=10;
			carry++;
		}
		++i;
	}

	return carry;
}

int sub(char *arr1, char *arr2)
{
	int i, d1=0, d2=0, carry=0;
	int arr1_size=strlen(arr1);
	int arr2_size=strlen(arr2);

	if(arr1[0] == '-')	d1=1;
	if(arr2[0] == '-')	d2=1;

	for(i=1; arr2_size-i >= d2; ++i)
	{
		arr1[arr1_size-i]+=carry;
		carry=0;
		if(arr1[arr1_size-i] < arr2[arr2_size-i])
		{
			arr1[arr1_size-i]+=10;
			arr1[arr1_size-i]-=arr2[arr2_size-i]-48;
			carry--;
		}
		else 
		{
			arr1[arr1_size-i]-=arr2[arr2_size-i]-48;
			carry=0;
		}
	}

	while(arr1_size-i >= d1)
	{
		arr1[arr1_size-i]+=carry;
		carry=0;
		if(arr1[arr1_size-i] < '0')
		{
			arr1[arr1_size-i]+=10;
			carry--;
		}
		++i;
	}

	return carry;
}

int multiply(char *arr1, char *arr2)
{
	int i, d1=0, d2=0, carry=0;
	int arr1_size=strlen(arr1);
	int arr2_size=strlen(arr2);

	if(arr1[0] == '-')	d1=1;
	if(arr2[0] == '-')	d2=1;

}
int presult(int sign, int carry, char *string, int string_size)
{
	int i=0;
	if(sign)	i++;
	if(!carry)
	{
		while(string[i] == '0')	i++;
		if(i == string_size)
		{
			putchar('0');
			return 0;
		}
	}
	if(sign)	putchar('-');
	if(carry)	putchar('1');
	printf("%s", &string[i]);
}

int main()
{
	char a[1001]={0}, b[1001]={0}, result[1000001]={0};
	char *big=NULL, *small=NULL;
	int b_sign, s_sign;

	scanf("%s %s", a, b);

	big=getBiggerAbs(a, b);
	small=(big == a)?	b:a;

	if(!getBiggerAbs(a, b))
	{
		if(a[0] != b[0])	
		{
			putchar('0');
			return 0;
		}
		big=a;
		small=b;
	}
	b_sign=(big[0] == '-')?		-1:0;
	s_sign=(small[0] == '-')?	-1:0;

	if(b_sign != s_sign)
		presult(b_sign, sub(big, small), big, strlen(big));
	else
		presult(b_sign, add(big, small), big, strlen(big));
}
