

#include <conio.h>
#include <stdio.h>

int main()
{
    int n1, n2;

    printf( "\n   Introduzca un n%cmero entero: ");
    scanf( "%d", &n1 );

   printf("\n  Introdusca un segundo numero entero ");
    scanf("%d", &n2);


    if ( n1 % 2 == 0 )
        {
        printf( "\n   ES PAR" );
        }
    else
        {
         printf( "\n   ES IMPAR" );
        }



    if (n1 % n2 == 0)
       {
        printf("\n tu primer numero es multiplo del segundo ");
       }
    else
        {
          printf("\n no son multiplos ");
        }


    return 0;
}
