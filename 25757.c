#include <stdio.h>
#include <stdint.h>
#define _M 100003

uint32_t hash(char c[], int size)
{
	int i=0;
	uint32_t value=5381;

	while(i < size) value=((value << 5)+value)+c[i++];

	return value%_M;
}

int main()
{
	char name[22]={0};
	char game;
	int i=0, j=0, n;
	uint8_t table[_M]={0};

	scanf("%d %c", &n, &game);

	getchar();
	while(n--)
	{
		fgets(name, sizeof(name), stdin);
		while(name[j] != '\n' && name[j] != '\0')	++j;
		if(name[j] == '\n')	name[j]='\0';
		table[hash(name, j)]=1;
		j=0;
	}
	for(i=0, j=0; i < _M; ++i)	j+=table[i];
	if(game == 'F')				j/=2;
	else if(game == 'O')		j/=3;
	printf("%d", j);
}
