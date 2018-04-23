## Problem
"Summer is finally here: time to relax, have some fun, go outside and enjoy the nice weather!" says Alice, a very dedicated Ranger working in a popular National Park. During the summer, lots of families take some time off to camp there and have a good time, and it is Alice's job to accommodate the visitors.

Alice is in charge of one of the many camps around the park. The camp can be described as a matrix of size N x N, where each cell has enough space for at most one tent. In order to arrange the families in the camp, there are several regulations that Alice needs to follow:
Only families with 1, 2 or 3 members are allowed in the camp. Also, each tent can contain members of only one family, and families cannot be split across multiple tents.
For security reasons, Alice doesn't want the rows or columns to be too crowded or too empty, so she wants exactly 3 members in each row and column.
Also, according to the park's safety policies, there shouldn't be more than 2 tents in any row or column.

Additionally, Alice knows in advance that at least X three-member families will be visiting the camp, and that there will be enough one- or two-member families to fill the rest of the camp.

For example, these are valid arrangements for N = 3 and X = 0:
```
1  2  0  |  3  0  0
0  1  2  |  0  1  2
2  0  1  |  0  2  1
```

These are not valid arrangements for N = 3 and X = 1:

```
1  2  0  |  0  3  0  |  1  2  0  |  1  1  1
0  1  2  |  3  0  0  |  0  2  0  |  1  1  1
2  0  1  |  0  0  0  |  2  0  1  |  1  1  1
```

The first one is not valid because there should be at least one three-member family.
The second example is not valid because the number of persons in the third row (and column) is not three.
The third one is invalid because there are more than three members in the second column (and fewer than three in the second row).
The last example contains more than two tents per row or column.


## Input
The first line of the input contains T, the number of test cases. T test cases follow. Each test case consists of exactly one line with two integers N and X corresponding to the number of rows (and columns) in Alice's camp and the minimum number of three-member families, respectively.

## Output
For each test case, output one line containing "Case #X: Y", where X is the test case number (starting from 1) and Y is the number of possible arrangements.

The answer may be huge, so output the answer modulo 10^9 + 7.

## Limits
1 ≤ T ≤ 200.
0 ≤ X ≤ N.

## Sample
### Input
```
Input       Output
3           
2 2         Case #1: 2
3 1         Case #2: 24
15 0        Case #3: 738721209
```



##Solution
Just by thinking a bit, I realized that each 3 member family that attends the camp pretty much blocks out a whole row and column of being filled,
at first I thought that each 3 member family would block out an exact number of rows and cells from being occupied, this number being 2N-1 (an entire row and column)
however I realized that this wasn't true for all cases. With this first realization I found the easiest case, if there were more three member families than available
rows and columns (X > N) then it wasn't possible to arrange the camp at all.

Now, I tried for some hours to find some kind of mathematical formula that could give me the exact amount of possible arrangements, however after I did some research
I found that it was a little bit complicated. I first realized that I can first choose a set of X rows and X columns to contain the 3-family tents, and the remaining set of N-X rows and N-X columns will contain the 2 member family and 1 member family tents. Now I had to figure out the number of ways that I could choose each row and column for the three member families. After some research on how to do this, I found that the solution for this sub-problem was that there were C(N,X)^2 ways of choosing the rows and columns, where C(N,X) is a binomial coefficient.

Now I also had to take into account the number of ways to assign the 3 member family tents to row-column pairs. We can do this assignment by taking a permutation of the columns, and assigning the ith column in the permutation to the ith row in the set of K rows. There are X! such permutations.

This is as far as I could get by myself, however I still had to assign the 2 and 1 member family tents to a row-column pair and find all possible combinations for that,  After some googling I found an explanation of the problem on the Codejam website which allowed me to finish the formula to get all the possible arrangements. [Links is here.](https://code.google.com/codejam/contest/5224486/dashboard#s=a&a=1)The number of ways to assign the 2-family tents to row-column pairs. Similar to the 3-family tents, there are (N-X)! ways to do this. For the 1 member family tents, since not all the (N-X)! could be used because there were already some two member family tents on that row or column, what I needed to do (that I failed to understand completely) was to do a permutation called a derangement.


The link provided me with the final formula for the solution of this problem which is:

C(N,X)^2 × X! × (N-X)! × !(N-X) = N!^2 / (X! × (N-X)!) × !(N-X)

It was suggested that the values that will be needed for X!, 1/X! and !X can all be pre-calculated to make the program more efficient, which I did. There are some cases where my code does not work and gives a wrong answer, but I could not figure out the reason. Perhaps I missed one mod operation for the max value somewhere but I ran out of time to check correctly.

##Run the program
To change the values of N and X all you have to do is change them in the main method of campinatorics.c with the values you want to test, then compile and run the program.
