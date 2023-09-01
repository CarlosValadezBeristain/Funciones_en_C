#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void atoi();
void atof();
void atol();
void itoa();
void ltoa();
//Creadores del programa : Valadez Beristain Carlos Ernesto, Flores Gonzalez Bryan Josue
//Araiza Rodriguez Jose de Jesus y Rubio Ramirez Julio Leonel.
main()
{
	int opc;
	setlocale(LC_CTYPE,"");
	do
	{
	
		printf("Seleccione una opcion para ver un ejemplo de esa funcion\n");
		printf("1)atof\n2)atol\n3)atoi\n4)itoa\n5)ltoa\n6)Para salir\n");
		fflush(stdin);
		scanf("%d",&opc);
		fflush(stdin);
		system("cls");
		
		
		switch(opc)
		{
			case 1:	atof();
					printf("\n");//este fue hecho por Valadez Beristain Carlos Ernesto 
					break;
			
			case 2:	atol();
					printf("\n"); //este fue hecho por Flores Gonzalez Bryan Josue
					break;
				
			case 3:	atoi();
					printf("\n");//este fue hecho por Araiza Rodriguez Jose de Jesus
					break;
				
			case 4: itoa();
					printf("\n");//este fue hecho por Rubio Ramirez Julio Leonel 
					break;
					
			case 5: ltoa();
					printf("\n");//este fue hecho por Flores Gonzalez Bryan Josue
					break;
					
			case 6: printf("Adios");
					break;		

				
			default:printf("Opcion no valida\n");
					break;
			
			
		}//fin switch
	}while(opc!=6);	
	
	
}

void atof()
{
	//Programa hecho por Carlos Ernesto 
	//Convierte una cadena a su valor numérico (coma flotante)
	
   char num[] = "12.308915"; 
 
   printf( "Convirtiendo la cadena \"%s\" en un número: %f\n", num, atof(num) );
 

}

void atol()
{
	//Programa hecho por Bryan Josue 
   char numPtr[] = "1234567890"; //Este es similar a atoi pero con tipo de dato long

   printf( "Convirtiendo la cadena \"%s\" en un numeros enteros: %u\n", numPtr, atol(numPtr) );

   
}

void atoi()
{
	//Programa hecho por Jose de Jesus 
char x[]="400";//cadena a guardar
int c,r;

  c = atoi(x); //convierte la cadena a numero y la guarda en c
  
 printf("La cadena: ");	//imprime dato de cadena
 printf("%d\n",c);
 printf("Multiplicada al cuadrado ya siendo un número\n");
 r=pow(c,2);//dato de cadena al cuadrado esta ya siendo un numero
 printf("El resultado es: %d\n",r);//imprime el resultado
}

void itoa()
{
	//Programa hecho por Julio Leonel 
  int i;     //Estas funciones convierten un long o un int a un string, cambiando la base de los mismos. El nombre quiere decir, respectivamente, long to ascii e int to ascii.
  char buffer [33];
  printf ("Ingresa un número: ");
  scanf ("%d",&i);
  itoa (i,buffer,10);
  printf ("Decimal: %s\n",buffer);
  itoa (i,buffer,16);
  printf ("Hexadecimal: %s\n",buffer);
  itoa (i,buffer,2);
  printf ("Binary: %s\n",buffer);
  
}

void ltoa()
{
//program hecho por Bryan Josue 
    char cadena[23]= "1234567890"; //La única diferencia es el tipo de dato que reciben, itoa recibe un entero o int, pero ltoa recibe un long.
    long decimal= 1234567890;
	
 
    printf("Convirtiendo decimal 1234567890 en un binario: %s\n",ltoa(decimal, cadena, 2) );
    
}

