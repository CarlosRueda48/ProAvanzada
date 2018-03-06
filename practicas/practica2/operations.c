#include <assert.h>
#include "operations.h"
#define MAX_INT 2147483647

/*
* Use long addition to catch overflow in the add integer operation
*/
int add(int a, int b){
  //Do the addition and check if there is an overflow
  long c = (long)a + b;
  assert(c <= MAX_INT  || c > -MAX_INT);
  return (int) c;
}

/*
* Use long substraction to catch overflow in the substract integer operation
*/
int substract(int a, int b){
  //Substract and check if there is an overflow
  long c = (long)a - b;
  assert(c <= MAX_INT  || c > -MAX_INT);
  return (int) c;
}
