#include <studio.h>
#include <stdlib.h>

//añado mi primer comentario
int main(void){
	int x,y,z,cont;
	x=0;
	y=1;
	printf("0\n1\n",z);
	for(cont=1;cont<=20;cont=cont+1){
		z=x+y;
		printf("%d\n",z);
		x=y;
		y=z;
	}
	system("PAUSE");
	return 0;
//añado comentario desde branch
}
