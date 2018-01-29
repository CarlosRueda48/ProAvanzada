#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strongPasswordChecker(char* s) {
  int changes = 0;
  int passSize = strlen(s);
  int needsLowerCase = 1;
  int needsUpperCase = 1;
  int needsNumber = 1;
  printf("Password is %d characters long. \n",passSize);

  //Check if password is too short
  if(passSize<6)
  changes += (6 - passSize);

  //Check if password is too long
  if(passSize>20)
  changes += (passSize - 20);

  //Check for missing requirements
  for(int i = 0; i < passSize; i++){
    printf("Current character is %c \n", s[i]);
    if(isupper(s[i])){
      needsUpperCase = 0;
    }
    else if(islower(s[i])) {
      needsLowerCase = 0;
    }
    else if(isdigit(s[i])){
      needsNumber = 0;
    }
  }
  printf("Needs upper: %d, Needs lower: %d, Needs number: %d \n",
                                                needsUpperCase,
                                                needsLowerCase,
                                                needsNumber);


  //Add necessary changes
  changes += needsUpperCase += needsLowerCase += needsNumber;


  printf("The password requires %d changes. \n",changes);
  return changes;

}


int checkRepeatedChars(char* s){
  int size = strlen(s);
  int neededChanges = 0;
  char prev;
  char current;

  for(int i=0; i < size; i++){
    //Check for repeated characters
  }

  return neededChanges;
}

int main(){
  char* pass = "Abc123";
  strongPasswordChecker(pass);
}
