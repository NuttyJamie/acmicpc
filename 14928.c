#include <stdio.h>
#include <unistd.h>

int main()
{
	char n[1000002]={0};
	int l=read(0, n, sizeof(n));
	int i=0;
	long long t=0;

	--l;
	while(i < l)
	{
		t*=10;
		t+=n[i++]-'0';
		if(t >= 20000303)	t%=20000303;
	}
	printf("%lld", t);
}
