#include <stdio.h>
#include <stdlib.h>

//se hara una funcion para usarla en la principal
double raiz(double numero, double tolerancia, double resultado) {
	//se declaran dos variables extras
	double division, diferencia;
	division=numero/resultado;
	diferencia=resultado-division;
	//se indica que diferencia es valor absoluto
	diferencia=diferencia>0? diferencia: -diferencia;
	//si la difernecia es menor o igual que la tolerancia se retorna 
	//el resultado
	if(diferencia<=tolerancia){
		return resultado;
	}
	//pero ni no es menor o igual se obtiene un nuevo candidato
	else{
		resultado=(resultado+division)/2;
		//y se retorna la funcion con el nuevo resultado
		return raiz(numero, tolerancia, resultado);
	}
}
//funcion principal
int main (int argc, char *argu[]){
	//se declaran variables
	double numero, tolerancia, resultado;
	//se guardan los agumentos
	numero=atof(argu[1]); tolerancia=atof(argu[2]); resultado=atof(argu[3]);
	resultado=raiz(numero, tolerancia, resultado);
	//se muestra
	printf("%lf\n", resultado);
}