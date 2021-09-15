/*
 ============================================================================
 Name        : Calculadora_2.c
 Author      : Edison Fracisco Uñog Valencia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIRMAS.h"

int main(void){
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int result;
	int function;
	int mostrarError;
	float resultOperacion;
	int factorialResultado;

	printf("\n\t\t\tCALCULADORA\n");
	printf("\t------------------------------------------\n");
	printf("\n\tINGRESA PRIMER NUMERO:\n\t> ");
	scanf("%d",&num1);
	printf("\tINGRESA SEGUNDO NUMERO:\n\t> ");
	scanf("%d",&num2);

    printf("\n\tQUE OPERACION DESEAS REALIZAR: \n\n\t1:Sumar, 2:Restar, 3:Multiplicar\n\t4:Dividir, 5:Factorial del primer numero\n\t6:Mostrar todas las operaciones\n\n\t>> ");
    scanf("%d",&function);

    switch(function){
    case 1:
    	result=sumaEnteros(num1,num2);
    	printf("\n\t-Resultado de la suma es:");
    	imprimirResultado(result);
    	break;

    case 2:
    	result=restaEnteros(num1,num2);
    	printf("\n\t-Resultado de la resta es:");
    	imprimirResultado(result);
    	break;

    case 3:
    	result=multiplicarEnteros(num1,num2);
    	printf("\n\t-Resultado de la multiplicacion es:");
    	imprimirResultado(result);
    	break;

    case 4:
    	mostrarError=dividirEnteros(num1,num2,&resultOperacion);
    	if(mostrarError==0){
    		printf("\n\t-Resultado de la divicion es:\n\t>>>  %f",resultOperacion);
    	}else{
    		printf("\n\t-Imposible dividir por cero(0)");
    	}
    	break;
    case 5:
    	mostrarError= factorialDeNum(num1,&factorialResultado);
    	if(mostrarError==0){
    		printf("\n\t-El factorial de %d es >>> %d",num1,factorialResultado);
    	}else{
    		printf("\n\t-Solo numeros enteros");
    	}
    	break;
    case 6:
    	printf("\n\t\tOPERACIONES_TOTALES: \n");
    	printf("\t------------------------------------------");
    	result=sumaEnteros(num1,num2);
    	printf("\n\t-Resultado de la suma es:");
    	imprimirResultado(result);

    	result=restaEnteros(num1,num2);
    	printf("\n\t-Resultado de la resta es:");
    	imprimirResultado(result);

    	result=multiplicarEnteros(num1,num2);
    	printf("\n\t-Resultado de la multiplicacion es:");
    	imprimirResultado(result);

    	mostrarError=dividirEnteros(num1,num2,&resultOperacion);
    	   if(mostrarError==0){
    	     printf("\n\t-Resultado de la divicion es:\n\t>>>  %f",resultOperacion);
    	   }else{
    	     printf("\n\t-Imposible dividir por cero(0)");
    	   }

    	mostrarError= factorialDeNum(num1,&factorialResultado);
    	     if(mostrarError==0){
    	       	printf("\n\t-El factorial de %d es >>> %d",num1,factorialResultado);
    	     }else{
    	        printf("\n\t-Solo numeros enteros");
    	     }
    	     break;
    }

	return EXIT_SUCCESS;

}


