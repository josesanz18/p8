/*Programa que 
hecho por
Carrasco Flores Apolinar
Gonzáles Ruiz Gonzalo
Sánchez Espinosa José Manuel
Sánchez Espinosa Miguel Ángel
Valderrama Pérez Roberto
*/
#include<stdio.h>																						//para printf y scanf
#include<math.h>																						//para pow
#include<stdlib.h>																						//para exit

int main (void)																							//función principal
{																										//abre función principal
	short caso;																							//variable tipo short para elegir opción de acción
	int num1,num2,res;																					//variables para almacenar números ingresados y el resultado, tipo enteros
	float div;																							//variable tipo float para almacenar la divisón
	
	printf("\n			%c================================%c",201,187); 								//imprimo mensaje del programa
	printf("\n 			%c  PROGRAMA DE MEN%c SWITCH CASE  %c",186,233,186);							//imprimo nombre del programa
	printf("\n 			%c    CARRASCO FLORES APOLINAR    %c",186,186);	 								//imprimo nombre
	printf("\n 			%c      GONZ%cLEZ RUIZ GONZALO     %c",186,181,186);	 						//imprimo nombre
	printf("\n 			%c  S%cNCHEZ ESPINOSA JOS%c MANUEL  %c",186,181,144,186);						//imprimo nombre
	printf("\n 			%c  S%cNCHEZ ESPINOSA MIGUEL %cNGEL %c",186,181,181,186);					 	//imprimo nombre
	printf("\n 			%c    VALDERRAMA P%cREZ ROBERTO    %c",186,144,186);							//imprimo nombre
	printf("\n 			%c================================%c\n",200,188);								//imprimo mensaje del programa
	
	printf("Este programa consiste en un men%c para realizar operciones\n",163);						//muestra lo que hace el programa
	printf("Ingrese 1 para potencia, 2 para el triple,3 para dividir, 4 para salir\n");					//muestra las opciones del menú
	scanf("%hd", &caso);																				//lee la opción seleccionada y la guarda en la varable caso
	switch (caso)																						//switch case que compara el valor de caso
	{																									//abre el switch
		case 1:																							//caso donde caso vale 1
			printf("\tHa elegido potencia de un n%cmero\n\tIngrese un n%cmero\n\t",163,163);			//muestra la opción seleccionada y piede el primer número a ingresar
			scanf("%d", &num1);																			//lee el numero y lo guarda en num1
			printf("\tA continuaci%cn ingrese la potencia a elevar\n\t",162);							//pide el segundo número
			scanf("%d", &num2);																			//lee el segundo número y lo guarda en num2
			res=pow(num1,num2);																			//realiza la operacion de num1 a el exponente num2 y lo guarda en res
			printf("\t\t%d a la %d es: %d",num1,num2,res);												//muestra el valor de res
		break;																							//cierra caso 1
		
		case 2:																							//caso donde caso vale 2
			printf("\tHa elegido calcular el triple de un n%cmero\n\tIngrese el n%cmero\n\t",163,163);	//muestra la opción seleccionada y piede el número a ingresar
			scanf("%d", &num1);																			//lee el numero y lo guarda en num1
			res=num1*3;																					//realiza el triple de num1 y lo guarda en res
			printf("\t\tEl triple del n%cmero %d es: %d",163,num1,res);									//muestra el valor de res
		break;																							//cierra caso 2
	
		case 3:																							//caso donde caso vale 3
			printf("\tHa elegido divisi%cn\n\tIngrese el primer n%cmero\n\t",162,163);					//muestra la opción seleccionada y piede el primer número a ingresar
   			scanf("%d",& num1);																			//lee el numero y lo guarda en num1
   			do																							//ciclo do while
   			{																							//abre do
				printf("\tEscriba el segundo n%cmero (diferente de 0)\n\t",163);						//pide el segundo número
				scanf("%d",& num2);																		//lee el segundo número y lo guarda en num2
			}																							//fin do
			while (num2==0);																			//se hará el do mientras num2 sea igual a 0
			div=(float)num1/num2;																		//realiza la división de num1 entre num2 y lo guarda en div como flotante
			printf("\t\tEl cociente de %d / %d es: %.2f",num1,num2,div);								//muestra el valor de res con dos desimales
		break;																							//cierra caso 3
		
		case 4:																							//caso donde caso vale 4
    		getchar();																					//atrapa el último enter
    		getchar();																					//mantiene en espera el programa
    		exit(0);																					//sale del programa
		break;																							//cierra caso 4																							
		
		default:																						//abre el caso contrario	
			printf("\tOpci%cn no valida\n",162);														//muestra que la opción es incorrecta
	}																									//cierra el switch
	getchar();																							//atrapa el último enter
	getchar();																							//mantiene el programa en pausa
	return 0;																							//termina la ejecución volviendola 0
}																										//cierra funcion principal
