## Problem
You've built an inflight entertainment system with on-demand movie streaming. Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer `flight_length` (in minutes) and a list of integers `movie_lengths` (in minutes) and returns a boolean indicating whether there are two numbers in `movie_lengths` whose sum equals `flight_length`.

When building your function:
- Assume your users will watch exactly two movies
- Don't make your users watch the same movie twice
- Optimize for runtime over memory

##Solution

This kata is very similar to the Kata 0 we did earlier. The easiest way (naive) to solve this is with a nested for loop, comparing each movie with the rest to see if they add up to the total flight length. This approach uses no extra memory making it O(1) on memory, however it is a O(n^2) algorithm given the double nested loop.

Another way to solve this that would optimize runtime a little bit more would be to use a hash table and store each of the movie lengths in it, then comparing, this would make the algorithm runtime O(n), but since we use a hash table to store the movie lengths now, memory becomes O(n) as well.
