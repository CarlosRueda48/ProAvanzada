#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 1000000007
#define N 1000005

int fac[N], inv[N], f[N];

int inverse(int a) {
  //Get the inverse of a number (1/x)
	return a == 1 ? 1 : (long long)(MOD - MOD / a) * inverse(MOD % a) % MOD;
}

int perm(int n, int m) {
  //Get a permutation for a single value of n and m, these are the derangement permutations
	return (long long)fac[n] * inv[n - m] % MOD;
}

int campinatorics(int n, int x){
  if(x > n){
    //There is no way to sort the camp if there is more 3 member families than rows/columns
    return 0;
  }

  else{
    fac[0] = 1;
    inv[0] = 1;
    for (int i = 1; i < N; ++i) {
			//Fill up factorial and inverse arrays
      fac[i] = (long long)fac[i - 1] * i % MOD;
      inv[i] = inverse(fac[i]);
    }
    f[0] = 1; f[1] = 0;
    for (int i = 2; i < N; ++i) {
      f[i] = ((long long)f[i - 1] * i % MOD * (i - 1) + (long long)f[i - 2] * perm(i - 1, 1) % MOD * perm(i, 2) % MOD) % MOD;
    }

      int total = 0;
      for (int i = x; i <= n; ++i) {
        (total += (long long)perm(n, i) * perm(n, i) % MOD * inv[i] % MOD * f[n - i] % MOD) % MOD;
      }
      printf("%d", total);
  }

}


int main() {
  campinatorics(3,1);
	return 0;
}
