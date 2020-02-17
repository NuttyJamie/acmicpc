#include <stdio.h>

int main()
{
	int buf, i, count=0;
	int arr[10];

	for(i=0; i<10; ++i)
	{
		arr[i]=-1;
	}

	for(i=0; i<10; ++i)
	{
		scanf("%d", &buf);
		buf=buf%42;
		for(count=0; count<10; ++count)
		{
			if(arr[count]==buf) break;
			else if(arr[count]==-1)
			{
				arr[count]=buf;
				break;
			}
		}
	}
	for(count=0; count<10; ++count)
	{
		if(arr[count]==-1) break;
	};

	printf("%d", count);
}
