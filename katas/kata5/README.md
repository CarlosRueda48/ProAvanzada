# Infographic
Validate if a given string is numeric.


## Definition
Think about capitalized words. For example, look at these sentences:

```
"After beating the eggs, Dana read the next step:"
"Add milk and eggs, then add flour and sugar."
```

What do we want to do with "After", "Dana", and "add"? In this example, your final hash map should include one "Add" or "add" with a value of 22.
 Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana".

Assume the input will only contain words and standard punctuation.

## Requirements:
The input will be taken in from a file named text.txt, all punctuation will be ignored and all capitalized letters will be converted to lower case
to create each key of the hash table.

## Solution
First we will have to solve the problem of cleaning up our word corpus, for each character in the text, we will add it to a new array without special
characters and turning all uppercase letters to lowercase, leaving the spaces to distinguish each word. The space complexity of creating a new array
is O(2n) if you take into account the space used by both the original and the new "clean" array. Time complexity of cleaning up the array is O(n) always,
traversing the whole array once.  

Once the cleaned corpus is ready to be used, we can start adding each word as a key to the hash table with a starting value of 1. If a key is found to be
repeated then that means the word has repeated in the text, so we add +1 to its value. To separate each word from the corpus we can either use the space
previously defined or turn the initial corpus into an array of arrays of chars. Each word is parsed and then we have the hash table with each letter from
the text as a key and its number of repetitions as its value.

I failed to implement the hash table use correctly in C, however I believe the theory is correct.
