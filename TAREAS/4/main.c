#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	//se declara otra lista para guardar la de argv
	//argc es el numero de argumentos
	int lista[argc], suma=0;
	//se declara como real ya que el promedio normalmente esta con decimales
	float promedio;
	
	for(int i=1; i<argc; i++) {
		lista[i]=atoi(argv[i]);
	}
	//for para sumar los elementos de la lista
	for(int i=1; i<argc; i++) {
		suma=suma+lista[i];
	}
	//A la suma se le divide por argc-1 para quitar el ./main 
	promedio=(float)suma/(argc-1);
	printf("%f\n", promedio);
	
	return 0;
}