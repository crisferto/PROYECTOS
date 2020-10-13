#include <stdio.h>

  main()
 {
   int N;
   printf("hola usuario escoje un numero de entre el 0 > 5 y te daremos tus numeros de la suerte \n");
   scanf("%d", &N);
   switch (N)
   {
       case 0:
       printf("\ntu numero de la surte es 0 y 2."); break;
       case 1:
       printf("\nTu numero de la surte es 3, 5, 7 y 9. "); break;
       case 2:
       printf("\nTu numero de la surte es 6, 8, 10, 12, 14 y 16. "); break;
       case 3:
       printf("\nTu numero de la surte es 9, 11, 13, 15, 17, 19, 21 y 23. "); break;
       case 4:
       printf("\nTu numero de la surte es 12, 14, 16, 18, 20, 22, 24, 26, 28 y 30."); break;
       case 5:
       printf("\nTu numero de la surte es 15, 17, 19, 21, 23, 25, 27, 29, 31, 33 y 35. "); break;

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
