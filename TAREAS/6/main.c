#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	//el resultado es lo que se va a imprimir
	int resultado;
	//lista para los valores enteros
	int argvi[argc];
	for(int i=1; 1<argc; i++){
		resultado=1;
		//Hace operacion sin excluir a nunguno
		for(int j=1; j<argc; j++){
			argvi[j]=atoi(argv[j]);
			resultado=resultado*argvi[j];
		}
		//inverso multiplicativo excluyendo a argv[i]
		resultado=resultado/argvi[i];
		printf("%i\n", resultado);
	}
	return 0;
}