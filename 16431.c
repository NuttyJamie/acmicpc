#include <stdio.h>

int main()
{
	int br, bc, dr, dc, jr, jc, bessie, daisy;

	scanf("%d %d %d %d %d %d", &br, &bc, &dr, &dc, &jr, &jc);

	br-=jr;
	if(br < 0)	br*=-1;

	bc-=jc;
	if(bc < 0)	bc*=-1;

	dr-=jr;
	if(dr < 0)	dr*=-1;

	dc-=jc;
	if(dc < 0)	dc*=-1;

	daisy=dr+dc;
	bessie=(br < bc)?	br:bc;
	bessie+=(bessie == br)?	bc-br:br-bc;

	if(daisy == bessie)	puts("tie");
	else				puts((daisy < bessie)?	"daisy":"bessie");
}
