#include <windows.h>
#include <stdio.h>
#include <ctype.h>


void isnum();
void ispha();
void isdigit();
void islower();
void isnct();
void isace();
void isper();
//Creadores del programa : Valadez Beristain Carlos Ernesto, Flores Gonzalez Bryan Josue
//Araiza Rodriguez Jose de Jesus y Rubio Ramirez Julio Leonel.

main()
{
	int op;

	do
	{
		printf("Seleccione una opcion para ver un ejemplo \n");
		printf("1)isalnum\n2)isalpha\n3)isdigit\n4)islower\n5)ispunct\n6)isspace\n7)isupper\n8)Para salir\n");
		
		
		scanf("%d",&op);
		
		system("cls");
		
		
		
		switch(op)
		{
			case 1:	isnum();//Este programa fue hecho por Valadez Beristain Carlos Ernesto
					printf("\n");
					break;
			
			case 2:	ispha();//Este programa fue hecho por Valadez Beristain Carlos Ernesto
					printf("\n"); 
					break;
				
			case 3:	isdigit();//Este programa fue hecho por Araiza Rodriguez Jose de Jesus
					printf("\n");
					break;
				
			case 4: islower();//Este programa fue hecho por Araiza Rodriguez Jose de Jesus
					printf("\n");
					break;
					
			case 5: isnct();//Este programa fue hecho por Rubio Ramirez Julio Leonel
					printf("\n");
					break;
					
			case 6: isace();//Este programa fue hecho por Rubio Ramirez Julio Leonel
					printf("\n");
					break;
					
			case 7: isper();//Este programa fue hecho por Flores Gonzalez Bryan Josue
					printf("\n");
					break;
					
			case 8: printf("Adios");//Este programa fue hecho por Flores Gonzalez Bryan Josue este incluye el menu
					break;		

				
			default:printf("ingreso algo invalido\n");
					break;
			
			
		}//fin switch
	}while(op!=8);	
	
	
}

void isnum()
{
	//Comprueba si un carácter es alfanumérico.
   char cadena[] = "0sR(hfghj&R1/";
   
   int i;
   
   for(i = 0; cadena[i]; i++) 
   
      printf("%c, %d\n", cadena[i], isalnum(cadena[i]));
}

void ispha()
{
	//Comprueba si un carácter es alfabético.
   char cadena[] = "erty0sR(hdfgh&R1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isalpha(cadena[i]));

}

void isdigit()
{
	//Comprueba si	 un carácter es un dígito decimal.
   char cadena[] = "xcvbn9ñfáR(.4h&~?RÛ1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isdigit(cadena[i]));
}

void islower()
{
	//Comprueba sin un carácter es de tipo minúscula.
   char cadena[] = "aAbBcCdD31&75$/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], islower(cadena[i]));


}

void isnct()
{
	//Comprueba sin un carácter es correspondiente a un signo de puntuación.
   char cadena[] = "aAb..,kBc/Cd(D3:1&,75%$/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], ispunct(cadena[i]));
    
}

void isace()
{
	//Comprueba si un carácter es de tipo espacio.
   char cadena[] = "0 ñ sá R\n (h &~?\177R\tÛ 1 /";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isspace(cadena[i]));

}

void isper()
{
	//Comprueba si un carácter es de tipo mayúscula.
   char cadena[] = "aAbBcCdD31&75$/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isupper(cadena[i]));
}

