||Two-Sum Problem||

Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

The first and easiest approach is the brute-force approach, which is just compare each element with the rest and
check if they add up to the target.


Of course this is the least efficient method with a time complexity of O(n^2) and it could be made more efficient
with the use of a hash table, this method would increase the speed but use a bit more memory, however I didn´t feel
 confident enough to implement a Hash Table on C by myself.