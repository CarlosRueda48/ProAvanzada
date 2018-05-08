# Chef and Numbers

## Problem
Chef plays with the sequence of N numbers. During a single move Chef is able to choose a non-decreasing subsequence of the sequence and to remove it from the sequence. Help him to remove all the numbers in the minimal number of moves.

## Input
The first line of each test case contains a single N denoting the number of integers in the given sequence. The second line contains N space-separated integers A1, A2, ..., AN denoting the given sequence

## Output
Output a single line containing the minimal number of moves required to remove all the numbers from the sequence.

## Limitations
1 <= N <= 10001

## Solution
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

deleteSequence(int[] sequence, int n){
  int ans = 0;
  //Here we perform A-B until the set (array) A is empty
  while(n > 0){
    int *subsequence = getLNDS(sequence)
    shortenSequence(sequence, n, subsequence, (sizeof(subsequence))/sizeof(int));
    ans += 1;
    n -= 1;
  }
}

```

La complejidad de encontrar la LNDS puede variar dependiendo de la implementación, sin embargo se puede llegar a un O(n) de tiempo y O(n) en espacio. Acortarle la LNDS a la secuencia original también tomaría un tiempo y espacio O(n). Ahora hacer esto hasta que la secuencia original esté vacía va a variar mucho dependiendo de cada secuencia, sin embargo en promedio el costo en tiempo sería O(n/2) = O(n), en espacio sería O(1) ya que solo se va reduciendo el array de la secuencia. Así que en tiempo tenemos O(n*(2n)) = O(n^2) para este algoritmo, mientras que para espacio tenemos O(1*(2n)) = O(n).
