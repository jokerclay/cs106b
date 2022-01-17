#Lecture 7 Using Abstructions (implementing Breadth-First Search)
## review `set` and `map`
## activity Counting sort 
* Sorting is a fundeamental topic in computers science and one we will 
  revisit(重新访问) in more depth later
* question: How do would you efficiently  sort all the letter in alphabetical 
  order ?
* How can we take advantage of soome data structures we have's recently learned
  meaning fully structure the data that we want to sort.
    * eg. `banana` -> `aaabnn`
    * idea: if we can tally up how many times each of the letters from 'a' to 
      'z' shows up, we can then build new string composed of the correct number
      of 'a's,followed by the correct number of 'b's, .. etc.

      b a n a n a
      | | | | | |
      V V V V V V

      a -> 3    
      b -> 1    ==> aaabnn
      n -> 2

    * Counting sort Pseudocode 
        * loop over the word and build a  frequency map of all the letters that
          appear in orginal string
        * loop through all letters from 'a' to 'z' and build up a new string 
          with the right amount of each letter
        * return the newly generated string 













