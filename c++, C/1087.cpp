#include<stdio.h>
#include<math.h>
int main (){
	int px1,py1,px2,py2;
	int resultado =2;
	int x,y;
	
	while((scanf("%d %d %d %d", &px1, &py1, &px2, &py2))&&(px1 != 0 || py1 !=0 || px2 != 0 || py2 != 0)){
		x = fabs(px1 - px2);
		y = fabs (py1 - py2);
		
		if (px1 == px2 && py1 == py2){
			resultado = 0;
			printf("%d\n", resultado);
		}else if (px1 == px2 && py1 != py2){
			resultado = 1;
			printf("%d\n", resultado);
		}else if (px1 != px2 && py1 == py2){
			resultado = 1;
			printf("%d\n", resultado);
			
			
		}else if (x == y){//Na diagonal se o modulo de px1 - px2 for igual ao modulo de py1 - py2
			resultado = 1;
			printf("%d\n", resultado);	
		}else {
			resultado = 2;
			printf("%d\n", resultado);
		}
	}
	return 0;
}