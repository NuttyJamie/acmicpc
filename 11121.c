#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	char i[121], o[121];

	scanf("%d", &t);

	while(t--)
	{
		scanf("%s %s", i, o);

		puts((strcmp(i, o))?	"ERROR":"OK");
	}
}
