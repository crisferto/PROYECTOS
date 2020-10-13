#include <stdio.h>

  main()
 {
   int N;
   printf("hola usuario escoje un numero de entre el 0 > 5 y te daremos tus numeros de la suerte \n");
   scanf("%d", &N);
   switch (N)
   {
       case 0:
       printf("\ntu numero de la surte es 0."); break;
       case 1:
       printf("\nTu numero de la surte es 1 y -1 "); break;
       case 2:
       printf("\nTu numero de la surte es 2, 4 y 0 "); break;
       case 3:
       printf("\nTu numero de la surte es 9, 7, 5 y 3 "); break;
       case 4:
       printf("\nTu numero de la surte es 16, 14, 12, 10 y 8 "); break;
       case 5:
       printf("\nTu numero de la surte es 25, 23, 21, 19, 17 y 15 "); break;

       default:
       if (N>5)
       {
           printf("\nNumero incorecto. ");
       }
       else
       {
           printf("\nValor incorecto ");
       }
   }
 }
