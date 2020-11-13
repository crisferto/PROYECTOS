#include <stdio.h>
#include <stdlib.h>


int VecY[100];
    int VecL[100];
    int VecK[100];
    int VecO[100];
    int s,e;

    int t1=0,Z=0;
    int t2=0,Q=0;
    float VOLUM1=0;
    float VOLUM2=0;

    int main () {

        printf("inserte los elementos del  vector:");
         scanf("%d",&s);
        printf("ingrese los datos\n");
        printf(" vector 1\n");
    for (e=1;e<=s;e++)
          {
        printf("ingresa el valor %d:", e+1);
         scanf("%d",&VecY[e]);
          }
        printf("vector 2\n");
    for (e=1;e<=s;e++)
        {
        printf("ingresa el valor %d:", e+1);
         scanf("%d",&VecL[e]);
        }
        {
        printf("\n => suma:\n");
    for (e=1;e<=s;e++)
        {
        VecK[e]=VecY[e]+VecL[e];
        printf ("los resultados son[%d]=%d\n ",e,VecK[e]);
        }
        printf("\n => resta:\n");
    for (e=1;e<=s;e++)
        {
        VecO[e]=VecY[e]-VecL[e];
        printf ("resultado de la resta[%d]=%d\n ",e,VecO[e]);
        }


        printf("\n => magnitud del vector :");
    for (e=1;e<=s;e++)
        {
        t1=VecK[e]*VecK[e];
        Z+=t1;
       }
        VOLUM1=sqrt(Z);
        printf("\n magnitud del vector resultante de la suma:\t\%f",VOLUM1);

    for (e=1;e<=s;e++){
        t2=VecO[e]*VecO[e];
        Q+=t2;
}
        VOLUM2=sqrt(Q);
        printf("\n magnitud del vector resultante de la resta:\t\%f", VOLUM2);

        }

}
