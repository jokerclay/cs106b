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
```
only want to add letter to sortedString if it exits as key in map
    extract exactly copies of characters to add from map
    for loop for value extracted from map
        add a single of current copy character to sortedString
```


## How can we use the unique properties of different absrtactions to solve perblems
### Examples of insteresting perblems to solve using ADTs 
* simulate potential impacts of flooding on a topographical landspcape
  (how does water outwards from a  source and settle into the sround areas)
* Generate simulated text in the style of a certain author. Similarly,do textual
  analysis to determine who the author of a provided piece of text was.
* spell check and autocomplete for a word document editor.
* manage infomation about the natural landmarks and state parks in California to
  help tourists plan their trip to the state.
* develop a ticketing management system for standford stadium
* Aggregate and analyze revirews for and shoppinh website
* solve fun puzzles

## Word ladders 
* a word ladder is type of puzzle base on a start word and a target word.
  to solve the puzzle you must generate a seqience of intermediate words
  (which must be valid English words) each of which id one letter different
  from the pervious one, that gets from the start word to the target word.
* a common tool for teaching kids English vocabulary

## How can we come up with an algorithm to generate these word ladders ?

## Word ladder generation first attempt 
* given a start word and target word, a natural place to start would be to model
  how a human might attempt to solve this problem
  * start at the start word
  * make an educated guess about what letter to change first
  * modify that letter to get a new English word
  * from there, make another educated guess about which letter to change and 
    modify that letter.
  * keep repeating this process until you reach the target word(unlike) or hit
    a dead end(likely)
  * if you hit a dead end, start over again, taking a different first step.
* what are the issues with this approach ?
  * requires intuition - does a computer have intuition ?
  * unorganized - no oregnized strategy exploration 
  * no guarantee that you'll find a solution 


## Breadth-First Search
* we need a structured way to explore words that are "adjacent" to one anther


## Breadth-First Search Data Structure
we need ...
* A data structure to represent (partial word) ladders
    * desired characteristics: we should be easily access the  the most recent
    word added to the word ladder 

    **`stack<string>`**

* A Data Structure to store all the partial word that we have generated so far
  and have yet to explore 
    * desired characteristics:we want to maintian an ordering of ladders such 
      that all ladders of certain length get explored before ladders longer get 
      explored.

    **`queue<stack<string>>`**

* A Data Structure to keep track of all  the words that we have explored so far
  so that we get avoid getting stuck in loops.
    * desired characteristics: we want to  be able to quickly decide whether or
    not a word has been seen before.

    **`set<string>`**


## Breadth-First Search pseudocode
```
create an empty queue and  an empty set of visited locations
create an initial word ladder containing the starting word and add it to the queue
while the queue is not empty
    remove the next partial ladder from the queue 
    set the current search word to be the word at the top of the ladder 
    if the current word is the destination,then return the current ladder
    generate all "neighboring" words that are valid English words and one loop
    over all neighbor word
        if the neighbor has not been visited 
            create a copy if current ladder
            add the neighbor to the top of the new ladder and mark it visited
            add the new ladder  to the back of the queue of partial ladders

```
