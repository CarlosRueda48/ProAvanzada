#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkDigit(char* currentInt, int pos, int* digitArray){
  if(currentInt[pos] == '0')
    digitArray[0]++;
  else if(currentInt[pos] == '1')
    digitArray[1]++;
  else if(currentInt[pos] == '2')
    digitArray[2]++;
  else if(currentInt[pos] == '3')
    digitArray[3]++;
  else if(currentInt[pos] == '4')
    digitArray[4]++;
  else if(currentInt[pos] == '5')
    digitArray[5]++;
  else if(currentInt[pos] == '6')
    digitArray[6]++;
  else if(currentInt[pos] == '7')
    digitArray[7]++;
  else if(currentInt[pos] == '8')
    digitArray[8]++;
  else if(currentInt[pos] == '9')
    digitArray[9]++;
}


int* pageNumbers(int n){
  int* digitCount = malloc(sizeof(int)*10);
  for(int i=0; i<10; i++){
    digitCount[i] = 0;
  }
  for(int i = 1; i <= n; i++){
    char currentNumber[12];
    sprintf(currentNumber, "%d", i);
    for(int i = 0; i < strlen(currentNumber); i++){
      checkDigit(currentNumber, i, digitCount);
    }
    //printf("%s \n", &currentNumber[0]);
  }

  return digitCount;
}




int main(){
  int n = 100;
  int* result = pageNumbers(n);
  for(int i = 0; i < 10; i++) {
    printf("Number of %d needed: %d \n", i, result[i]);
  }
}
