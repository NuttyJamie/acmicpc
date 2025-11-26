#include <stdio.h>

int main()
{
	int i, l, flag=1;
	char board[51];

	scanf("%s", board);

	for(i=l=0; board[i]; ++i)
	{
		if(board[i] == 'X')	++l;
		if(l == 4)		board[i-3]=board[i-2]=board[i-1]=board[i]='A', l=0;
		else if(board[i] == '.' && l == 2)	board[i-2]=board[i-1]='B', l=0;
		else if(board[i] == '.' && l%2)
		{
			flag=0;
			break;
		}
	}

	if(flag && (l == 4))	board[i-4]=board[i-3]=board[i-2]=board[i-1]='A';
	if(flag && (l == 2))	board[i-2]=board[i-1]='B';
	else if(flag && l%2)	flag=0;

	printf("%s", (flag)?	board:"-1");
}
