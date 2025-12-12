#include <stdio.h>
#include <string.h>

struct chat
{
	char name[11];
	char content[11];
};

int main()
{
	struct chat chat[1000];
	int n, i=0, count=0;
	char winner[11], answer[11];

	scanf("%d %s", &n, winner);

	do
	{scanf("%s %s", chat[i].name, chat[i].content);
	}while(strcmp(winner, chat[i++].name));

	strcpy(answer, chat[--i].content);
	while(i--)
		if(!strcmp(chat[i].content, answer)) ++count;

	printf("%d", count);
}
