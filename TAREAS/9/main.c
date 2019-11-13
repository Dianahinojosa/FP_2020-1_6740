#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc, char* argu[]){
	
	//se declaran las variables 
	int numero1, a, resul;

	//convierto de char a int
	numero1=atoi(argu[1]);

	//se guarda este valor en otra variable para usarla despues
	a=numero1;
	resul=0;

	//la funcion
	while(a>0){
		resul = resul + a%10;
		a = a/10;

	}

	//se imprime el resultado
	printf("%i\n", resul);

	return 0;
}
