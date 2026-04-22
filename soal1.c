#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int *x, int n){
   int temp = 0;
   for(int i = 0; i <n; i++){
      temp += *(x+i);
   }
   return temp;
}

int max(int *x, int n){
   int temp = 0;
   for(int i = 0; i <n; i++){
      if(*(x+i)>temp){
         temp = *(x+i);
      }
   }
   return temp;
}

float avg(int *x, int n){
   float y =(float)sum(x,n)/n;
   return y;
}

int IDX(int *x, int n){
   for(int i = 0; i <n; i++){
      if(*(x+i)== max(x, n)){
         return i;
      }
   }
}

int main(){
   char buff[100]; 
   fgets(buff, sizeof(buff), stdin);
   int N = (int)(strtok(buff, " ")[0]-'0');
   if(N!=0){
      int x[N];
      for(int i =0; i < N; i++){
         x[i] = (int)(strtok(NULL, " ")[0]-'0');
      }
      printf("\nSUM %d", sum(x, N));
      printf("\nAVG %0.2f", avg(x, N));
      printf("\nMAX %d", max(x, N));
      printf("\nIDX %d", IDX(x, N));
   }

}
