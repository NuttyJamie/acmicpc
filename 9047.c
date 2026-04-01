#include <stdio.h>

int str2num(char arr[])
{
	int i, num=0;

	for(i=0; i < 4; ++i)
	{
		num*=10;
		num+=arr[i]-'0';
	}

	return num;
}

void num2str(int n, char arr[])
{
	for(int i=3; i > -1; --i)
	{
		arr[i]=(n%10)+'0';
		n/=10;
	}
}

int main()
{
	int t, i, j, min, max, count;
	char n[5];

	scanf("%d ", &t);

	while(t--)
	{
		count=0;

		scanf("%s", n);

		while(str2num(n) != 6174)
		{
			for(i=0; i < 3; ++i)
			{
				for(j=i+1; j < 4; ++j)
					if(n[i] < n[j])
					{
						n[i]^=n[j];
						n[j]^=n[i];
						n[i]^=n[j];
					}
			}
			max=str2num(n);

			for(i=0; i < 3; ++i)
			{
				for(j=i+1; j < 4; ++j)
					if(n[i] > n[j])
					{
						n[i]^=n[j];
						n[j]^=n[i];
						n[i]^=n[j];
					}
			}
			min=str2num(n);

			num2str(max-min, n);
			++count;
		}

		printf("%d\n", count);
	}
}
