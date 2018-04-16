#include <stdlib.h>
#include <stdio.h>

//Since the only information we get is the length of the movies,
//we assume that there are no repeated movies in the movie_lengths list
//for the purpose of the user not watching the same movie
int movies(int flight_length, int* movie_lengths, int movie_lengths_size){
  for(int i=0; i<movie_lengths_size; i++){
    for(int j = 0; j<movie_lengths_size;j++){
      //Make sure we don't make the user watch the same movie
      if((i != j) && (movie_lengths[i] + movie_lengths[j] == flight_length)){
        printf("There exist two movies that add up to flight length.");
        return 1;
      }
    }
  }
  printf("Two movies that added up did not exist.");
  return 0;

}

int main(){
  int test[4] = {70, 120 , 100, 80};
  movies(150, test, 4);

}
