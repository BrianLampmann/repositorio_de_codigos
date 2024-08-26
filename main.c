#include <stdio.h>

void bubble (int*,int);
void printv(int*,int);
int main(int argc, char** args){
int vetor[6]= {3,2,4,1,6,5};
printv (vetor,6);
bubble (vetor,6);
printv(vetor,6);
return 0;
}

void bubble(int* v, int tam){
  int flag =1 , aux;
  // controla a flag
  while (flag!=0){
    flag=0;
    for (int i=0; i<tam;i++){
      if(v[i]>v[i+1]){
        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        flag = 1;
      }
      
    }
    
  }
}
void printv(int* v,int tam){
  for(int i = 0; i < tam; i++){
    printf("%d", v[i]);
  }
  printf("\n");
}