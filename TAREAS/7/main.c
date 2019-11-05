#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char* argv[]){
	//flotante para tener mayor presicion
	float numero1, numero2;
	numero1=atof(argv[1]);
	numero2=atof(argv[2]);
	//la funcion pow devuelve el resultado que se obtiene de 
	//elevar el número1 al exponente (numero2)
	printf("%.2f", pow(numero1,numero2));
	
	return 0;
}