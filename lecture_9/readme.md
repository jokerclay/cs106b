# Recursion
* How can we take adantage of self-similarity within a problem to solve it more
  elegantly ?
## what is recursion ? 
  * a problem-solving technique in which tasks are completed by reducing them into 
    repeated, smaller tasks of the same form
  * A powerful substitute for iteration (loop)
    * we'll start off with seeing the difference between iterative VS. recursive solutions
    * some problems  that can only be solved using recursion
    * results in elegant, often shorter code when used well
    * often applied to sotring and searching problems and can be express patterns seen in nature

### How many students are in the lecture in the lecutre hall ?
### two main cases  (components ) of recursion
    * base case
        * The simplest versions of your problem that all other cases reduce to
        * An occurrence that can be answered directly 
    * Recurtive case
        * The step at which you break down  more complex versions of the task into smaller occurrence
        * Cannot be answered directly
        * Take the "recursive leap of faith" and trust the smaller tasks will solve the problem for you 
### Factorical 
### Reverse string example 

#### How can we want to reverse string like in the following examples:

```

    "dog"           ----->      "god"
    "stressed"      ----->      "desserts"
    "recursion"     ----->      "noisrucer"
    "level"         ----->      "level"
    "a"             ----->      "a"

```
        
#### Approaching recursive problems
* look for self-similarity
* try out an example
    * work through a simple example then increase the complexity
    * Think about what infomation needs to be stored at each step in the recursive
      case (like the current value of `n` in each `factorial` stack frame) 

    * ask yourself:
        * what is the base case ?(what is the simle case ?)
        * what is the recursive case ? (what pattern of self-similarity do you use ?)

#### how can we reverse a string ?
* look for self-similarity:`stressed -> desserts`
    * take the `s` and put it at the end of string
    * then reverse `"tressed"`
        * take the `t` and put it at the end of string
        * then reverse `"ressed"`
            * take the `r` and put it at the end of string
            * then reverse `"essed"`
                ....
                * take the `d` and put it at the end of string
                * base case reverse "" -> get ""

* recursive case: `reverse(str) = reverse(str without first letter) + first letter of str`
* base case : `reverse("") = ""`

* depending on how you throught of the problem, you may have also come uo with last letter
    * recursive case: `reverse(str) =  last letter of str + reverse(str without first letter) `
    * base case : `reverse("") = ""`
### Summary
    * Recursion is a problem-solving technique in which tasks are completeld by 
      reducing them into **repeated, smaller tasks of the same form**
      * a recursive operation(function) is defined in terms of itself  (ie. call it self)
    * Recursion has 2 main part, the `base case` and `recursive case`
      * base case: simple form of the problem that has direct answer. 
      * recursive case: the step where you break the problem into a smaller, self-similarity task 
    * The solution will get built up as you come back up the call stack
      * the base case will define the 'base' of solution you are building up to.
      * each previous recursive call contributes a little bit to the final solution 
      * the initial call you recursive function is what you will return the completely conturcted answer.
    * when solving problems recursively,look for `self-similarity` and think about
    **what infomation is getting stored in each stack frame**






















