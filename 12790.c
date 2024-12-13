#include <stdio.h>

int main()
{
	int t, hp, mp, dmg, ac;
	int w_hp, w_mp, w_dmg, w_ac;
	
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d %d %d", &hp, &mp, &dmg, &ac);
		scanf("%d %d %d %d", &w_hp, &w_mp, &w_dmg, &w_ac);
		hp=(hp+w_hp < 1)?	1:hp+w_hp;
		mp=(mp+w_mp < 1)?	1:mp+w_mp;
		dmg=(dmg+w_dmg < 0)?	0:dmg+w_dmg;
		ac+=w_ac;
		printf("%d\n", hp+5*mp+2*dmg+2*ac);
	}
}
