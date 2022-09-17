#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	start:;
	int x,y;
	scanf("%d",&x);
	y=x;
	while(x!=1){
		x--;
		y=y*x;
	}
	printf("%d\n",y);
	goto start;
	return 0;
}
