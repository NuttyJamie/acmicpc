#include <stdio.h>
#include <string.h>

int main()
{
	char yeondu[21], team[21]={0}, candidate[21]={0};
	int n, max=0;
	int l=0, l_y=0;
	int o=0, o_y=0;
	int v=0, v_y=0;
	int e=0, e_y=0;

	scanf("%s %d ", yeondu, &n);
	for(int i=0; yeondu[i] != '\0'; ++i)
	{
		(yeondu[i] == 'L')?	++l_y:
		(yeondu[i] == 'O')?	++o_y:
		(yeondu[i] == 'V')?	++v_y:
		(yeondu[i] == 'E')?	++e_y:0;
	}
	while(n--)
	{
		scanf("%s", team);
		for(int i=0; team[i] != '\0'; ++i)
		{
			(team[i] == 'L')?	++l:
			(team[i] == 'O')?	++o:
			(team[i] == 'V')?	++v:
			(team[i] == 'E')?	++e:0;
		}
		l+=l_y;
		o+=o_y;
		v+=v_y;
		e+=e_y;
		int x=(l+o)*(l+v)*(l+e)*(o+v)*(o+e)*(v+e)%100;
		if(max < x || !strlen(candidate))
		{
			max=x;
			strcpy(candidate, team);
		}
		if(max == x && (strcmp(team, candidate) < 0))
			strcpy(candidate, team);
		l=0;
		o=0;
		v=0;
		e=0;
	}
	printf("%s", candidate);
}
