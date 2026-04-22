#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


void sum(int *x, int n, int* sum){
   int temp = 0;
   for(int i = 0; i <n; i++){
      temp += *(x+i);
   }
   *sum = temp;
}

void max(int *x, int n, int* max){
   int temp = -9999999;
   for(int i = 0; i <n; i++){
      if(*(x+i)>temp){
         temp = *(x+i);
      }
   }
   *max = temp;
}

void avg(int *x, int n, float* avg){
   int sumx;
   sum(x,n, &sumx);
   *avg =(float)sumx/n;
}

void IDX(int *x, int n, int* idx){
   int maxx;
   max(x, n, &maxx);
   for(int i = 0; i <n; i++){
      if(*(x+i)== maxx){
         *idx = i;
         return;
      }
   }
}

int main(){
   char buff[100];
   int sumx, maxx, idxx;
   float avgx; 
   fgets(buff, sizeof(buff), stdin);
   int N = atoi((strtok(buff, " ")));
   if(N!=0){
      int x[N];
      for(int i =0; i < N; i++){
         char *temp = strtok(NULL, " ");
         if(temp != NULL){
            x[i] = atoi(temp);
   }
}
   sum(x, N, &sumx);
   avg(x, N, &avgx);
   max(x, N, &maxx);
   IDX(x, N, &idxx);
   printf("\nSUM %d", sumx);
   printf("\nAVG %0.2f", avgx);
   printf("\nMAX %d", maxx);
   printf("\nIDX %d", idxx);
   }

}
