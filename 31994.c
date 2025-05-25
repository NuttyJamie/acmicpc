#include <stdio.h>

int main()
{
	struct SEMINAR
	{
		char name[24];
		int applicant;
	}seminar[7];
	int max=0, ord=0;

	for(int i=0; i < 7; ++i)
	{
		scanf("%s %d", seminar[i].name, &seminar[i].applicant);
		if(max < seminar[i].applicant)
		{
			max=seminar[i].applicant;
			ord=i;
		}
	}

	printf("%s", seminar[ord].name);
}
