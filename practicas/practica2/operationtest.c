#include <stdio.h>
#include "operations.h"

void printTestMessage(int, char*, char*);
int testAdd(void);
int testSubstract(void);


void printTestMessage(int condition, char* successMsg, char* failureMsg){
  if(condition)
    printf("%s\n",successMsg);
  else
    printf("%s\n",failureMsg);

}

int testAdd(){
  //Test add
  int a = 5;
  int b = 7;

  int addresult = add(a,b);
  int addexpected = a + b;


}

int testSubstract(){
  //Test substraction
  int c = 10;
  int d = 4;

  int subresult = substract(c,d);
  int subexpected = c - d;

}

int main(){

  printTestMessage(testAdd(),
                  "add test passed",
                  "add test failed");

  printTestMessage(testSubstract(),
                  "substract test passed",
                  "substract test failed");


  return 0;
}
