#include <stdio.h>
#include <string.h>

double getscore(char* grade)
{
	if	   (strcmp(grade, "A+") == 0) return 4.5;
	else if(strcmp(grade, "A0") == 0) return 4.0;
	else if(strcmp(grade, "B+") == 0) return 3.5;
	else if(strcmp(grade, "B0") == 0) return 3.0;
	else if(strcmp(grade, "C+") == 0) return 2.5;
	else if(strcmp(grade, "C0") == 0) return 2.0;
	else if(strcmp(grade, "D+") == 0) return 1.5;
	else if(strcmp(grade, "D0") == 0) return 1.0;
	else if(strcmp(grade, "F") == 0)  return 0.0;
}

int main()
{
	char grade[3];
	int i;
	double total=0, buf, score=0;

	for(i=0; i < 20; ++i)
	{
		while(getchar() != ' ')	continue;

		scanf("%lf %s", &buf, grade);

		if (strcmp(grade, "P") == 0)	continue;

		total+=buf;
		score+=(buf*getscore(grade));
	}
	printf("%lf\n", score/total);
}
