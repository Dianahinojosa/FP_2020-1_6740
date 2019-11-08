#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char* argu[]) {
	
	//Se declaran variables para utilizar
	int numero1, x;
	float numero2, resul;
	//se convierten de char a float o int
	numero1=atoi(argu[1]);
	numero2=atoi(argu[2]);
	//Se guarda x en otra variable
	x=numero1;
	//funcion para celsius y fahrenheit
	switch(x){
		case 0:
		resul=numero2*1.8;
		resul=resul+32;
		printf("%.2f\n", resul);
		break;
		case 1:
		resul = numero2-32;
		resul=resul*.55555556;
		printf("%.2f\n", resul);
		break;
		default:
		printf("Opcion invalida\n");
		break;
	}
	
	return 0;
}