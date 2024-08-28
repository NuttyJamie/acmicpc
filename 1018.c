#include <stdio.h>

int main()
{
	int n, m, i, j, t, s;
	int flag=0, bcount=0, wcount=0, last=0, tcount=0;
	char c[50][50];
	char b[50][50]={
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'}
	};
	char w[50][50]={
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}
	};

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
		for(j=0; j < m; ++j) scanf(" %c", &c[i][j]);


	for(t=0; t+7 < n; ++t)
	{
		for(s=0; s+7 < m; ++s)
		{
			for(i=t, bcount=wcount=0; i < t+8; ++i)
			{
				for(j=s; j < s+8; ++j)
				{
					if(c[i][j] != b[i-t][j-s])	bcount++;
					if(c[i][j] != w[i-t][j-s])	wcount++;
				}
			}
			tcount=(bcount > wcount)? wcount:bcount;
			if(!tcount)
			{
				flag=1;
				break;
			}
			if(last != 0) 	last=(last < tcount)?	last:tcount;
			else			last=tcount;
		}
		if(flag)	break;
	}
	if(tcount == 0)	putchar('0');
	else 			printf("%d", last);
}
