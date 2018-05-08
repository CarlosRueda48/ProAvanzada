# Chef and Numbers
## Problem
Chef plays with the sequence of N numbers. During a single move Chef is able to choose a non-decreasing subsequence of the sequence and to remove it from the sequence. Help him to remove all the numbers in the minimal number of moves.
##Input
The first line of each test case contains a single N denoting the number of integers in the given sequence. The second line contains N space-separated integers A1, A2, ..., AN denoting the given sequence
##Output
Output a single line containing the minimal number of moves required to remove all the numbers from the sequence.
##Limitations
1 <= N <= 10001
##Solution
Al principio se me ocurrió utilizar uno de los problemas de encontrar la "Longest Increasing Subsequence" de la secuencia, así encontrando esta subsecuencia se podía ir removiendo de la secuencia completa, cada vez que se removía una de las secuencias se sumaba + 1 a la cantidad total mínima de movimientos para remover todos los números. Al analizar esto me di cuenta que tendría que hacer muchas iteraciones sobre la misma secuencia, esta siendo reducida cada vez. Lo que se me ocurre es obtener la subsecuencia más larga posible, que a la vez no decrementa e ir removimiendo los números que pertenencen a la subsecuencia de la secuencia original, cada vez que se haga esto se considera como un movimiento y la respuesta incrementa + 1.

En esencia el pseudocódigo sería algo así:
```
shortenSequence(int *sequence, int sequenceSize, int *subsequence, int subsequenceSize){
  //Remove all elements that are in subsequence from sequence
  //Considering sequence as a set of elements A and subsequence as a subset B of A
  //We perform the operation A-B to set A
}

getLNDS(int *sequence){
  //Get Longest Non-Decreasing Subsequence
}

deleteSequence(int[] sequence){
  int ans = 0;
  while(sequenceSize > 0){
    shortenSequence(sequence, getLNDS(sequence));
    ans += 1;
    //Here we perform A-B until the set (array) A is empty
  }
}

```
