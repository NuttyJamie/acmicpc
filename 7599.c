#include <stdio.h>
#include <string.h>

int main()
{
	char name[21]={0}, label[7]={0};
	int f, c, w, length;

	while(1)
	{
		scanf("%s %d", name, &f);
		if(!f)	break;
		printf("%s Library\n", name);

		scanf("%d", &c);
		for(int i=0; i < c; ++i)
		{
			scanf("%d %s", &w, label);
			length=strlen(label);
			printf("Book %d %s\n", i+1, (length*f+2 <= w)?	"horizontal":"vertical");
		}
	}
}
