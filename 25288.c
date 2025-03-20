#include <stdio.h>

int main()
{
	char buf[27]={0};
	int n;

	scanf("%d %s", &n, buf);

	while(n--) printf("%s", buf);
}
