#include <stdio.h>
#include <stdlib.h>

//hacemos una funcion antes de la principal
int apretones(int personas) {
	//saludo refiere a todos los apretones de manos que da una persona
	//todos la sumatoria de todos los apretones de mano
	int todos, saludo;
	saludo=personas-1;
	//cuando solo es una persona no hay saludos
	if (saludo==0){
		return saludo;
	}
	//se hace la sumatoria
	todos=saludo+apretones(personas-1);
	return todos;
}
//funcion principal
int main (int argc, char*argu[]){
	int resultado, personas;
	personas=atoi(argu[1]);
	resultado=apretones(personas);
	//se imprime el resultado
	printf("%i\n", resultado);
	return 0;
}
