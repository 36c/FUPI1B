#include <stdio.h>
 
 
int main(){
  int af, ac, bf, bc, i, j, k;
  printf("Numero de renglonesde la matriz  A");
  scanf("%d", &af);
  printf("Numero de columnas de la matriz  A");
  scanf("%d", &ac);
  printf("Numero de renglones de la matriz B");
  scanf("%d", &bf);
  printf("Numero de columnas de la matriz  B");
  scanf("%d", &bc);
  if(ac!=bf){
             printf("no es posible hacer la multiplicación\n");
             return 0;
  }
  int A[af][ac], B[bf][bc], C[af][bc];
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          printf("Escribe el valor de la matriz 1 (%d, %d)",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bf;i++){
      for(j=0;j<bc;j++){
          printf("Escribe el valor de la matriz 2 (%d, %d)", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }
 
  for(i=0;i<af;i++){
      for(j=0;j<bc;j++){
          C[i][j]=0;
          for(k=0;k<ac;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }
  printf("\n Matriz A");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n");
      for(j=0;j<ac;j++){
          printf("  %d  ", A[i][j]);
      }
  }
  printf("\n Matriz B");
  printf("\n");
  for(i=0;i<bf;i++){
      printf("\n");
      for(j=0;j<bc;j++){
          printf("  %d  ", B[i][j]);
      }
  }
 
  printf("\n Matriz C");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n");
      for(j=0;j<bc;j++){
      	
          printf("  %d  ", C[i][j]);
      }
  }
  printf("\n");
}
