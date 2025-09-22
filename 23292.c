#include <stdio.h>
#include <string.h>

int cal_biorythm(char arr1[9], char arr2[9])
{
	int i, t=0, biorythm=0;

	for(i=0; i < 4; ++i)
		t+=(arr2[i]-arr1[i])*(arr2[i]-arr1[i]);

	biorythm=t;
	for(t=0; i < 6; ++i)
		t+=(arr2[i]-arr1[i])*(arr2[i]-arr1[i]);

	biorythm*=t;
	for(t=0; i < 8; ++i)
		t+=(arr2[i]-arr1[i])*(arr2[i]-arr1[i]);

	return biorythm*t;
}

int main()
{
	struct
	{
		int biorythm;
		char date[9];
	}plans[1000];

	int n, i, max=0, max_idx=0;
	char birth[9];

	scanf("%s %d", birth, &n);

	for(i=0; i < n; ++i)
	{
		scanf("%s", plans[i].date);

		plans[i].biorythm=cal_biorythm(birth, plans[i].date);

		if(max == plans[i].biorythm)
		{
			int earlier=strncmp(plans[max_idx].date, plans[i].date, 9);

			max_idx=(earlier < 0)?	max_idx:i;
		}
		else if(max < plans[i].biorythm)
		{
			max=plans[i].biorythm;
			max_idx=i;
		}
	}

	printf("%s", plans[max_idx].date);
}
