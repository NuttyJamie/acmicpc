#include <stdio.h>

int main()
{
	char c;

	while((c=getchar()) != EOF)
	{
		switch(c)
		{
			case '0': c='9'; break;
			case '1': c='`'; break;
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9': --c; break;
			case '-': c='0'; break;
			case '=': c='-'; break;
			case 'W': c='Q'; break;
			case 'E': c='W'; break;
			case 'R': c='E'; break;
			case 'T': c='R'; break;
			case 'Y': c='T'; break;
			case 'U': c='Y'; break;
			case 'I': c='U'; break;
			case 'O': c='I'; break;
			case 'P': c='O'; break;
			case '[': c='P'; break;
			case ']': c='['; break;
			case 'S': c='A'; break;
			case 'D': c='S'; break;
			case 'F': c='D'; break;
			case 'G': c='F'; break;
			case 'H': c='G'; break;
			case 'J': c='H'; break;
			case 'K': c='J'; break;
			case 'L': c='K'; break;
			case ';': c='L'; break;
			case 'X': c='Z'; break;
			case 'C': c='X'; break;
			case 'V': c='C'; break;
			case 'B': c='V'; break;
			case 'N': c='B'; break;
			case 'M': c='N'; break;
			case ',': c='M'; break;
			case '.': c=','; break;
			case '/': c='.'; break;
			case '\'': c=';'; break;
			case '\\': c=']'; break;
		}
		putchar(c);
	}
}
