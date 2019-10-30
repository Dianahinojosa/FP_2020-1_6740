#include <stdio.h>
#include <stdlib.h>

//funcion antes de la principal para devolver el numero correspondiente a un caracter

int numero(char n){
	int z;
	switch(n){
		case 'J':
			z=10;
			break;
		case 'Q':
			z=10;
			break;
		case 'K':
			z=10;
			break;
		case 'A':
			z=11;
			break;
		case 'k':
			z=10;
			break;
		case 'j':
			z=10;
			break;
		case 'q':
			z=10;
			break;
		case 'a':
			z=11;
			break;
	}
	return z;
}

int main(int argc, char* argv[]){
	int imprimir;
	char coi; //refiere a char o int

	for(int i=1; i<argc; i++){
		//se comienza a recorrer la lista en subindice 1
		coi = argv[i][0]=='J'||argv[i][0]=='j'||
		argv[i][0]=='Q'||argv[i][0]=='q'||
		argv[i][0]=='K'||argv[i][0]=='k'||
		argv[i][0]=='A'||argv[i][0]=='a';
		if(coi==1){
			//si se pide un caracter se usa la funcion numero
			imprimir=numero(argv[i][0]);
		}
		else{
			//si no se utiliza atoi
			imprimir=atoi(argv[i]);
		}
		printf("%i\n", imprimir);
	}
	return 0;
}
		
