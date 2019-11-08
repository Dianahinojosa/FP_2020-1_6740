#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char* argu[]){
	//declaro las variables con flotantes
	float numero1, numero2, resul=0;
	//de char a float
	numero1=atof(argu[1]);
	numero2=atof(argu[2]);
	//la funcion 
	resul=resul+numero1;
	for(float i=1; i<numero2; i++){
	resul=resul*numero1;
	}
	//se imprime el valor
	printf("%.2f", resul);
	
	return 0;
}