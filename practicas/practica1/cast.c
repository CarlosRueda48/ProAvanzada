#include <stdio.h>

int main(){
  int a = 4;
  int j;
  int *p;
  float f = 7.5;
  int max = 2147483647;
  long int d;
  int b = a + (int)f; //11
  float c = a* f;
  int arreglo[5] = {0,2};
  d = (long)max*max;
  p = arreglo;
  for(int k = 0; k<5; k++){
    *p = 67;
    p++;
    //arreglo[k] = 67;
  }



  printf("p= %p, a= %d, j = %d, d= %ld \n", p, a, j, b, d);
  printf("f = %f, c = %f \n", f, c);
  return 0;
}
