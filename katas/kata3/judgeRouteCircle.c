#include <stdio.h>
#include <string.h>

int judgeRouteCircle(char* steps){
  int stepNumber = strlen(steps);
  printf("There are %d steps.\n",stepNumber);
  int vertical = 0;
  int horizontal = 0;
  for(int i = 0; i < stepNumber; i++){
    if(steps[i] == 'U'){
      vertical++;
    }

    else if(steps[i] == 'D'){
      vertical--;
    }

    else if(steps[i] == 'R'){
      horizontal++;
    }

    else if(steps[i] == 'L'){
      horizontal--;
    }
  }
    if(vertical == 0 && horizontal == 0){
      printf("There is a circle.");
      return 1;
    }
    else{
      printf("There is not a circle.");
      return 0;
    }
  }


int main(){
  judgeRouteCircle("UUDDLRLR");
}
