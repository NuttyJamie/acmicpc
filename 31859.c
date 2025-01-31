#include <stdio.h>

int main()
{
	char alphabet[26]={0}, name[43]={0};
	char buf, dup=0;
	int n, i=0;

	scanf("%d ", &n);
	n+=1906;
	while((buf=getchar()) != '\n')
	{
		if(!alphabet[buf-'a'])
		{
			++alphabet[buf-'a'];
			name[i++]=buf;
		}
		else
		{
			++dup;
			continue;
		}
	}
	dup+=4;
	if(dup > 9) name[i++]=dup/10, dup%=10;
	name[i++]=dup;
	printf("smupc_");
	while(i--)	putchar((name[i] < 10)? name[i]+'0':name[i]);
	while(n)
	{
		putchar(n%10+'0');
		n/=10;
	}
}
