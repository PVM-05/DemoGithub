#include <stdio.h>
#include <math.h>

int fibo(int n){
   long long F[100];
   F[0] = 1;
   F[1] = 2;
   for(int i = 2; i < n;i++){
      F[i] = 2*F[i] - F[i - 1];
   }
   return fibo(n);
}
   

int main(){
    int n;
    scanf("%d",&n);
   fibo(n);
   return 0;
}