#include <stdio.h>

int div( float *n1, float *n2, float *res){
    if (*n2!=0){
        *res = (*n1)/(*n2);
        printf("La respuesta es %.2f\n", *res);
    }
    else{
        printf("No se puede realizar una division para 0 \n");
    }
}
//------------------------------------------------------------------------------------------------------------------------------
int multi( float *n1, float *n2, float *res){
    *res = *n1**n2;  
    printf("La respuesta es: %f\n", *res);
}
//------------------------------------------------------------------------------------------------------------------------------
int resta( float *n1, float *n2, float *res){
    *res = *n1-*n2;  
    printf("La respuesta es: %f\n", *res);
}
//------------------------------------------------------------------------------------------------------------------------------
int suma( float *n1, float *n2, float *res){
    *res = *n1+*n2;  
    printf("La respuesta es: %f\n", *res);
}
//------------------------------------------------------------------------------------------------------------------------------
int argescalar(float *arg, int cd, float esc){
    for (int vector = 0; vector < cd; vector++){
        (arg[vector+1])= arg[vector] + esc;
    }
    printf("El vector Resultante de la suma %f es:\n", esc);
    for (int vector=0; vector<cd; vector++){
        printf(" %.2f |", arg[vector]);
    }
}
//------------------------------------------------------------------------------------------------------------------------------
int ccade(char *joe1, char *joe2, int alan1, int alan2){
    int mmdio=1,
    if (alan1 != alan2){
      printf("\nLas cadenas de caracteres no son iguales\n");         
    } else{
        if (*joe1 == *joe2){
              joe1++;
              joe2++;
              mmdio=1;  
            }
    else{
              mmdio=0;
            } 
        } 
    }
    if (mmdio == 1) {
      printf("Son iguales\n");
    }
    else {
      printf("Son desiguales\n");
    }

//profe mis ammigos me explicaron q podia poner el mismo archivo de funciones.c en este main.c para q revise porque yo no estaba en clases