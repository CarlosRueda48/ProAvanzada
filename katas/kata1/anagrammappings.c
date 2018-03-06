#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* anagramMappings(int* A, int ASize, int* B, int BSize, int returnSize) {
  int* anagram = malloc(sizeof(int)*returnSize);
  for(int i=0;i<ASize;i++){
      for(int j=0;j<BSize;j++){
          if(A[i]==B[j]){
            anagram[i] = j;
            break;
          }
      }
  }
  return anagram;
}

int main(){
  int A[] = {12, 28, 46, 32, 50};
  int B[] = {50, 12, 32, 46, 28};
  int* result = anagramMappings(A,sizeof(A),B,sizeof(B),sizeof(A));
  for(int i = 0; i < sizeof(result); i++){
    printf("Number %d on position %d in array A matches the number on position %d in array B \n", A[i], i, result[i]);
  }
  printf("%d",result[0]);
}
