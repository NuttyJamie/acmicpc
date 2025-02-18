#include <stdio.h>
#include <string.h>

int main()
{
	char buf[21];
	char alp[26]={0};
	char flag1, flag2, flag3;
	alp[0]=alp[4]=alp[8]=alp[14]=alp[20]=1;

	while(1)
	{
		flag1=flag2=flag3=0;
		scanf("%s", buf);
		if(!strcmp("end", buf))	break;

		for(int i=0; buf[i]; ++i)
		{
			if(buf[i] == 'a'||
			   buf[i] == 'e'||
			   buf[i] == 'i'||
			   buf[i] == 'o'||
			   buf[i] == 'u')
			{
				++flag1;
				flag2=(flag2 > 0)?	++flag2:1;;
			}
			else	flag2=(flag2 < 0)?	--flag2:-1;
			if(flag2 == 3 || flag2 == -3) break;
			if(i && (buf[i-1] == buf[i]))
				flag3+=(buf[i] != 'e' && buf[i] != 'o')?	1:0;
		}

		printf("<%s> is ", buf);
		printf((!flag1 || flag2 == 3 || flag2 == -3 || flag3)? "not acceptable.\n":"acceptable.\n");
	}
}
