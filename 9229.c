#include <stdio.h>
#include <string.h>

int main()
{
	int d, i, l1, l2, correct=1;
	char s1[21], s2[21];

	while(1)
	{
		correct=1;
		scanf("%s", s1);

		if(s1[0] == '#')	break;
		for(i=l1=0; s1[i]; ++i)	++l1;

		while(1)
		{
			scanf("%s", s2);

			if(s2[0] == '#')	break;
			for(i=l2=0; s2[i]; ++i)	++l2;

			if(l1 == l2)
			{
				for(d=i=0; s1[i]; ++i)
					if(s1[i] != s2[i])	++d;
				if(d != 1) correct=0;
			}
			else	correct=0;
			strcpy(s1, s2);
			l1=l2;
		}
		puts(correct? "Correct":"Incorrect");
	}
}
