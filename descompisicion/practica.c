// Hecho por Andres Aguilar cruz
//           Ernesto Sandoval Becerra
//			Carlos Gabriel Gomez ochoa
//		IDS 2°A

#include<stdio.h>
#include<math.h>
#include "funciones2.c"


main() {
	long p;
	long x;
	while (scanf("%ld",&p)!=EOF) { // pide un numero
		if(p==1){
			printf("factorizacion en primos de p=%ld \n",p);
			printf("1\n");

		}	
		else{
		
		
			if (p<=0){
				printf("UPS!!! Error, numero no valido \nIngrese solo numeros positivos GRACIAS :3\n\n\n ");
			
			}
			else{
				printf("factorizacion en primos de p=%ld \n",p);
				x=factorizacion_primos(p); 
				if(x>1){
				factorizacion_primos2(x);
				
				}
			}

		}
	}
	return 1;
}
	
	
