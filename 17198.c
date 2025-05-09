#include <stdio.h>

int main()
{
	struct {int x, y;}barn;
	struct {int x, y;}rock;
	struct {int x, y;}lake;
	int i, j;
	char c;

	for(i=0; i < 10; ++i)
		for(j=0; j < 11; ++j)
		{
			c=getchar();
			if	   (c == 'B')	barn.x=j, barn.y=i;
			else if(c == 'R')	rock.x=j, rock.y=i;
			else if(c == 'L')	lake.x=j, lake.y=i;
		}

	if((barn.x != lake.x) && (barn.y != lake.y))
	{
		c=((barn.x < lake.x)?	lake.x-barn.x:barn.x-lake.x)+
			((barn.y < lake.y)?	lake.y-barn.y:barn.y-lake.y)-1;
	}
	else if(barn.x == lake.x)
	{
		if((barn.x == rock.x) && 
				(((barn.y < rock.y) && (rock.y < lake.y)) ||
				((lake.y < rock.y) && (rock.y < barn.y))))
		{
			c=lake.y-barn.y;
			c=(c < 0)?	-c+1:c+1;
		}
		else
		{
			c=lake.y-barn.y;
			c=(c < 0)?	-c-1:c-1;
		}
	}
	else if(barn.y == lake.y)
	{
		if((barn.y == rock.y) && 
				(((barn.x < rock.x) && (rock.x < lake.x)) ||
				((lake.x < rock.x) && (rock.x < barn.x))))
		{
			c=lake.x-barn.x;
			c=(c < 0)?	-c+1:c+1;
		}
		else
		{
			c=lake.x-barn.x;
			c=(c < 0)?	-c-1:c-1;
		}
	}
	printf("%d", c);
}
