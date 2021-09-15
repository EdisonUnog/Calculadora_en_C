/*
 *  FUNCIONES.c
 *
 *  Created on: 15 sep. 2021
 *  Author: Edison Fracisco Uñog Valencia
 */
#include <stdio.h>
#include <stdlib.h>

int sumaEnteros(int numA, int numB){
	int retorno;
	retorno=numA+numB;
	return retorno;
}
//--------------------------------------------------
int restaEnteros(int numA, int numB){
	int retorno;
	retorno=numA-numB;
	return retorno;
}
//--------------------------------------------------
int multiplicarEnteros(int numA, int numB){
	int retorno;
	retorno=numA*numB;
	return retorno;
}
//--------------------------------------------------
int dividirEnteros(int numA, int numB,float* puntero){
	float retorno=-1;  //Salio todoo bien  // =NUL._no me pasaron nada.
	if(puntero != NULL && numB!=0){ //!= de NULL asegurarme de q' recibi una direccion de memoria
		*puntero =(float)numA/numB;  //cargado como resultado
		retorno=0;//sin error.
	}                //retorno:_nunca lo vamos usar para dar un resultado.
	return retorno; //retorno:_solo para dar una respuesta: si pudo o no hacer lo que le mandamos hacer
}
//--------------------------------------------------
int factorialDeNum(int numA,int*puntero){
	int retorno=-1;
	int factorial=1;
	int i;
	if(puntero!=NULL && numA>0){
		retorno=0;
		for(i=1;i<=numA;i++){
			factorial=factorial*i;
			*puntero=factorial;
		}
	}
	return retorno;
}
//--------------------------------------------------
void imprimirResultado(int numero){
	printf("\n\t>>> %d",numero);
}
