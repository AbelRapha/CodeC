#include <stdio.h>

int main(){
  int N = 10;
  float f, e=1;
  int i,j;
  for (i=1;i<=N; i++){
    f =1;
    for(j=1; j<=i; j++){
      f = f * j;
    }
    e = e + 1.0/f;
    printf("e(n=%d) = %.6f\n",i,e);
  }
  
  return 0;
}


  

