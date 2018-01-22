#include <stdio.h>

int* anagramMappings(int* A, int ASize, int* B, int BSize, int returnSize) {
  int* anagram = malloc(sizeof(int)*returnSize);
  for(int i=0;i<ASize;i++){
      for(int j=0;j<BSize;j++){
          if(a[i]==b[j]){
            anagram[i] = j;
            break;
          }
      }
  }
  return anagram;
}

int main(){
  int[] A = [12, 28, 46, 32, 50]
  int[] B = [50, 12, 32, 46, 28]
  intanagram(A,B,sizeof(A));
}
