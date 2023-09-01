#include <string.h>
#include <iostream>
#include <windows.h>
#include <locale.h>

void strcpy();
void strncmp();
void strnset();
void strcat();
void strlen();
void strtok();
void strncat();
void strcspn();
void strstr();
void strcmp();
void strrev();
void strlwr();
void strcmpi();
void strset();
void strupr();
void integrantes();

main()
{
	int opc;
	setlocale(LC_CTYPE,"");//esta linea nos permite poner el progama en español
	do
	{
		printf("----Bienvenido al menú de opciones----\n");
		printf("1)strcpy\n2)strncmp\n3)strnset\n4)strcat\n5)strlen\n6)strtok\n7)strncat\n8)strcspn\n9)strstr\n10)strcmp\n11)strrev\n12strlwr\n13)strcmpi\n14)strset\n15)strupr\n16)integrantes\n");
		scanf("%d",&opc);
		system("cls");
		switch(opc)
		{
			case 1:
			strcpy();
			break;
			case 2:
			strncmp();
			break;
		
			case 3:
			strnset();	
			break;
				
			case 4:
			strcat();
			break;
			
			case 5:
			strlen();
			break;
			
			case 6:
			strtok();	
			break;
			
			case 7:	
			strncat();
			break;
			
			case 8:	
			strcspn();
			break;
					
			case 9:	
			strstr();
			break;
					
			case 10:
			strcmp();	
			break;
					
			case 11:
			strrev();	
			break;
					
			case 12:
			strlwr();	
			break;
					
			case 13:
			strcmpi();	
			break;
					
			case 14:
			strset();	
			break;
					
			case 15:
			strupr();	
			break;
					
			case 16:
			integrantes();	
			break;
				
			default:printf("Opción desconocida\n");
			getchar();
			
		}
		
	}while(opc<17);	
	
	
}//fin main 

void strcpy()
{
   printf("strcpy copia la cadena apuntada por s2 (incluyendo el carácter nulo) a la cadena apuntada por s1.\n");
   char s2[8] = "abcdefg";
   char s1[8];

   strcpy( s1, s2 );
   printf( "s2=%s\n", s2 );
   printf( "s1=%s\n", s1 );
}

void strncmp()
{
	printf("La función retorna un número entero mayor, igual, o menor que cero, apropiadamente según la cadena apuntada por s1 es mayor, igual, o menor que la cadena apuntada por s2.\n");
   char s1[9] = "artesano";
   char s2[8] = "artista";
   int i;

   printf( "s1=%s\t", s1 );
   printf( "s2=%s\n", s2 );

   i = strncmp( s1, s2, 3 );
   printf( "Las 3 primeras letras de s1 son " );
   if( i < 0 )  printf( "menores que" );
   else if( i > 0 )  printf( "mayores que" );
   else  printf( "iguales a" );
   printf( " s2\n" );	
}

void strnset()
{
		printf("La cadena strnset convierne x numero de letras de una cadena a un caracter a elejir\n");
   char string []= "Hola mundo como estan hoy";
   char va = 'x';

   printf("string antes de strnset: %s\n", string);
   strnset(string, va, 13);
   printf("string despues de strnset: %s\n", string);
}

void strcat()
{
	printf("La función retorna el valor de s1. Si la copia hace que los objetos se superpongan, entonces el comportamiento no está definido.\n");
   char s1[11] = "Hola ";
   char s2[11] ="amigos";

   printf( "s1=%s\t", s1 );
   printf( "s2=%s\n", s2 );
   strcat( s1, s2 );
   printf( "s1=%s\n", s1 );
}

void strlen()
{
	printf("La función retorna el número de caracteres hasta el carácter nulo, que no se incluye.\n");
   char s[13] = "Hola a todos";

   printf( "s=%s\n", s );
   printf( "strlen(s) = %d\n", strlen( s ) );
}

void strtok()
{
	printf("La primera llamada a strtok determina la cadena a romper, retornando el puntero al comienzo del primer token. Si se recorrió la cadena s1 sin haber encontrado un delimitador, y aún no se ha obtenido el primer token, entonces la función retornará un puntero nulo.\n");
  char s1[49] = "Esto es un ejemplo para usar la funcion strtok";
   char s2[4] = " \n\t";
   char *ptr;

   printf( "s1=%s\n", s1 );

   ptr = strtok( s1, s2 );    // Primera llamada => Primer token
   printf( "%s\n", ptr );
   while( (ptr = strtok( NULL, s2 )) != NULL )    // Posteriores llamadas
    printf( "%s\n", ptr );
}

void strncat()
{
   printf("La función retorna el valor de s1. Si la copia hace que los objetos se superpongan, entonces el comportamiento no está definido.\n");
  char s1[11] = "Hola ";
   char s2[11] = "Hola";

   printf( "s1=%s\t", s1 );
   printf( "s2=%s\n", s2 );
   strncat( s1, s2, 3 );
   printf( "s1=%s\n", s1 );
}

void strcspn()
{
	printf("Busca caracteres especificos en la cadena 1 y los marca como error\n");
   char s1[13] = "Hola a todos";
   char s2[5] = "abcd";

   printf( "s1=%s\n", s1 );
   printf( "s2=%s\n", s2 );
   printf( "strcspn(s1,s2) = %d\n", strcspn( s1, s2 ) );
}

void strstr()
{
	printf("La función retorna un puntero a la cadena encontrada, o un puntero nulo si no se encontró la cadena. Si s2 apunta a una cadena de longitud cero, la función retorna s1.\n");
   char s1[13] = "Hola a todos";
   char s2[3] = "la";

   printf( "s1=%s\n", s1 );
   printf( "s2=%s\n", s2 );
   printf( "strstr(s1,s2) = %s\n", strstr( s1, s2 ) );
}

void strcmp()
{
	printf("La función retorna un número entero mayor, igual, o menor que cero, apropiadamente según la cadena apuntada por str1 es mayor, igual, o menor que la cadena str2(alfabéticamente).\n");
   char s1[11] = "caracol";
   char s2[11] = "Caracol";
   int i;

   printf( "s1=%s\t", s1 );
   printf( "s2=%s\n", s2 );

   i = strcmp( s1, s2 );
   printf( "s1 es " );
   if( i < 0 )  printf( "menor que" );
   else if( i >0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " s2\n" );
}

void strrev()
{
	printf("Realiza la impresion de la cadena de caracteres a la inversa\n");
   char forward[] = "string";

   printf("Antes de strrev(): %s\n", forward);
   strrev(forward);
   printf("Despues de strrev():  %s\n", forward);
}

void strlwr()
{
	printf("Realiza la impresion de la cadena de caracteres a la inversa\n");
   char string [] = "CoNvierte Las Mayusculas eN MinusculaS";

   printf("string antes  de strlwr: %s\n", string);
   strlwr(string);
   printf("string despues de strlwr: %s\n", string);
}

void strcmpi()
{
	printf("Compara cadenas\n");
   char buf1[] = "BBB", buf2[] = "bbb";
   int ptr;

   ptr = strcmpi(buf2, buf1);

   if (ptr > 0)
      printf("La cadena 2 es mayor que la cadena 1\n");

   if (ptr < 0)
      printf("La cadena 2 es menor que la cadena 1\n");

   if (ptr == 0)
      printf("La cadena 2 es igual que la cadena 1\n");
}

void strset()
{
   printf("Establece todos los caracteres de una cadena a un caracter determinado.\n");
   char string[10] = "123456789";
   char symbol = 'c';

   printf("Antes de strset(): %s\n", string);
   strset(string, symbol);
   printf("Despues de strset(): %s\n", string);
}

void strupr()
{
	printf("Convierte una cadena en mayusculas\n");
   char string []= "abcdefghijklmnopqrstuvwxyz", *ptr;
   ptr = strupr(string);
   printf("%s\n", ptr);
}
void integrantes()
{
	printf("Flores Gonzales Bryan Josue\nCarlos Ernesto Valadez Beristain\n");
}
