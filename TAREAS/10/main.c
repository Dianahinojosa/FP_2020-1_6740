#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion para las raices reales positivas
void raizreal (double a, double b, double c, double determinante){
	double x1, x2;
	
	//formula general
	double parte;
	parte=sqrt(determinante);
	x1=(-b/2*a)+(parte/2*a);
	x2=(-b/2*a)-(parte/2*a);
	printf("%.2lf\n", x1);
	printf("%.2lf\n", x2);
}

//funcion para raices imaginarias
void raizimaginaria (double a, double b, double c, double determinante){
	//se indica el determinante con un - para que se haga positivo
	double parte;
	parte=sqrt(-determinante);
	//se agregan 4 variables
	double x11, x12, x21, x22;
	//primer resultado
	x11=-b/(2*a); x12=parte/(2*a);
	//segundo resultado
	x21=-b/(2*a); x22=-parte/(2*a);
	if (b==0){
		x11=0; x21=x11;
	}
	//se imprimen las partes imaginarias
	printf("%.2lf+%.2lfi\n", x11, x12);
	printf("%.2lf%.2lfi\n", x21, x22);
}

//esta solo si existe una solucion 
void unaraiz (double a, double b) {
	double xu;
	xu=-b/(2*a);
	printf(".2lf\n", xu);
}

//funcion principal
int main (int argc, char*argu[]) {
	double a, b, c;
	a=atof(argu[1]); b=atof(argu[2]); c=atof(argu[3]);
	double determinante;
	determinante=pow(b,2);
	determinante=determinante-(4*a*c);
	//si es 0 solo tiene una solucion 
	if (determinante==0){
		unaraiz(a,b);
	}
	//sino debe ser mayor o menor
	else{
		//si es mayor se usan las raices reales
		if (determinante>0){
			raizreal(a,b,c,determinante);
		}
		//si no se usa para la raiz imaginaria
		else{
			raizimaginaria(a,b,c,determinante);
		}
	}
	return 0;
}