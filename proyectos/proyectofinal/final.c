#include <stdio.h>
#define MAX_SIZE 100001

static int a[MAX_SIZE];

//Max function to compare two integers
int max(int a, int b)
{
	return (a > b)? a : b;
}

int main(void)
{
  //n is the number of integers in the sequence
  //ans will be the integer for the answer
	int n, ans = 0;

  //Get number of integers in sequence
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) //for each integer
	{

		int x, low = 0, high = ans - 1; //high = -1 initially
    //scan an integer in the sequence
		scanf("%d", &x);
		printf("Starting for loop iteration.\n");
		printf("x= %d\n", x);
		printf("Initial low= %d\n", low);
		printf(" Initial high= %d\n", high);
		while (low <= high)
		{
			printf("In while loop.\n");
      //Get average of low and high
			int m = (low + high) / 2;
			printf("m= %d\n", m);
			if (a[m] <= x)
			{
				high = m - 1;
				printf("high= %d\n", high);
			}
			else
			{
				low  = m + 1;
				printf("low= %d\n", low);
			}
		}
		a[low] = x;
    //Compare both to get final answer
		ans = max(ans, low + 1);
		printf("ans= %d\n", ans);
		printf("Ending for loop iteration.\n");
	}
	printf("%d\n", ans);
	return 0;
}
