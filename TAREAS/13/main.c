#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	//se hace la lista de enteros
	int numeros [argc - 1];
	//dos indices y una variable
	int i=0, j=1, numero;
    while(i<argc-1){
		//la copia de argv a la nueva lista
		numero=atoi(argv[j]);
		numeros[i]=numero;
		i++;
		j++;
    }
    //una variable extra
	int temporal;
    for(i=1; i<argc-1; i++){
        for(j=0; j<argc-1-i; j++){
                //se intercambian numeros, solamente comparando dos numeros
				//de menor a mayor
				if(numeros[j]>numeros[j+1]){
					temporal=numeros[j];
					//se retrocede el numero siguiente
					numeros[j]=numeros[j+1];
					numeros[j+1]=temporal;
                }
            }
        }
        //aqui se imprime
		for(int i=0; i<argc-1; i++){
			printf("%i\n", numeros[i]);
        }
}