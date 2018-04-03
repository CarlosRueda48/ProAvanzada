#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(char str[], int i, int j){
    char t = str[i];
    str[i] = str[j];
    str[j] = t;
}

void reverseString(char str[], int length){
    for(int i=0; i<length/2; i++){
        swap(str, i, length-i-1);
    }
}

void reverseWords(char str[]){
    int len = strlen(str);
    reverseString(str,len);
    int aux = 0;
    for(int i=0; i<len; i++){
        if(str[i] == ' '){
            reverseString(&str[aux], i - aux);
            aux = i + 1;
        }
    }
    //Finally reverse the last word.
    reverseString(&str[aux], len-aux);
}

int main(){

    int numCases;
    scanf("%d", &numCases);

    for (int i=0; i<numCases;i++){
        char array[1000] = "";
        scanf(" %[^\n]",array);
        reverseWords(array);
        printf("%s\n", array);
    }

    return 0;
}
