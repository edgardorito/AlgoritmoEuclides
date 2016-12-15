#include <stdio.h>
#include <stdlib.h>

//ALGORITMO DE EUCLIDES

int resultado(int r);
int A = 0, B = 0, aux = 0, r = 0, c = 0;
int main(int argc, char *argv[]) {

	printf("introduzca el primer valor\n");
	scanf("%d", &A);
	printf("introduzca el segundo valor\n");
	scanf("%d", &B);
	
	if(A>B){
		aux=A%B;
		if(aux==0){
			printf("EL M.C.D DE %d Y %d ES: %d", A,B,B);
		}
		else{
			aux=resultado(aux);
			printf("EL M.C.D DE %d Y %d ES: %d", A,B,aux);
		}
	}
	if(B>A){
		aux=B%A;
			if(aux==0){
			printf("EL M.C.D DE %d Y %d ES: %d", A,B,B);
		}
		else{
			aux=resultado(aux);
			printf("EL M.C.D DE %d Y %d ES: %d", A,B,aux);
		}
	}
	
	
	
	return 0;
}

int resultado(r){

	c=r;
	r=B%r;
	if(r==0){
		return c;
	}
	
	else{
		resultado(r);
	}
}







