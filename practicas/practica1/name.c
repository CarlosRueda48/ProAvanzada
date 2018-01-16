#include <stdio.h>

int doFullName(char *firstName, char *lastName, char **fullName){
  int size = strlen(firstName) + strlen(lastName) + 1;
  *fullName = (char *) malloc(sizeof(char) * size);
  strcopy(*fullName+strlen(firstName), " ");
  strcopy(*fullName+strlen(firstName)+1, lastName);
  return 0;
}

main(){
  return 0;
}
