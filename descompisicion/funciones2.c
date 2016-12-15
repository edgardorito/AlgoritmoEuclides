
// Hecho por Andres Aguilar cruz
//           Ernesto Sandoval Becerra
//			Carlos Gabriel Gomez ochoa
//		IDS 2°A

#include<stdio.h>
#include<math.h>



long factorizacion_primos(long c){
		
	while ( (c % 2) == 0) { //todos los numeros pares entran
		printf("%ld\n",2); // mientras sea par se va a dividir en el numero primo mas pequeño "2"
		c = c / 2; 
	}
	return c;
}

//funcion encargada de retornar solo valores primos
long factores(long c, long i){
	
	while (c %i != 0){//se asegura de que el valor de retorno de i sea un numero primo que divida a "c"
		i+=2; //en dado caso de que el valor de que no sea un numero primo divisible le suma dos para buscar el factor siguiente
	}
	 return i;	//nos regresa el factor por el que podemos dividir a nuestro numero
}

void factorizacion_primos2(long c){

long i;	/* contador */

i = 3;
int x;
x= sqrt(c)+2;
	
	while (i <= x) { //nos verifica que el valor de c sigue siendo divisible entre i
			i=factores(c,i);//reasigna el valor a i segun lo hecho en la funcion factores
			printf("%ld\n",i); //imprime los factores 
			c = c /i;//divide a c entre el factor para seguir con los ciclos
			if (c==1) break;
	}
	
	//printf("%ld\n",i); //imprime los factores 
		
}
