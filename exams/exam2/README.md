##Exam Problem
You are given an integer N, followed by N lines of input (1 <= N <= 100). Each line of input contains one or several words separated with single spaces. Each word is a sequence of letters of English alphabet containing between 1 and 10 characters, inclusive. The total number of words in the input is between 1 and 100, inclusive.

Your task is to reverse the order of words in each line of input, while preserving the words themselves. The lines of your output should not have any trailing or leading spaces.

Example

input
3
Hello World
Bye World
Useless World

output
World Hello
World Bye
World Useless

##Solution
At first I thought about it a little bit and thought to start at the end of the array and start reading the string backwards, using each space as the boundary for each word, and start adding it to another string from the start, however later I thought of a simple solution that I believe can work and isn't memory or space intensive, what we do is first, reverse the whole input string, then, reverse each word, using the detection of spaces as boundaries for the words. This results in the time-complexity being O(2n)=O(n), this because for this method the string must be iterated through twice. The space-complexity being O(1) because no additional memory is being used, we use the original string and reverse it.
