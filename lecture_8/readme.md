# How can we formalize the notion of efficiency for algorithms ?
# Nested data structures
### Nested data structures example 
* imagine we desingning a system to keep track of feeding times for the 
  different animals at zoo
* requirements: we need ot be able to quickly look up the feeding times 
  associated woth animal if we know the it's name. we need to be able to
  store multiple feeding times for each animal. the feeding times should be 
  stored in the order in which the feedings should happne
* data structure
  * `map<string, vector<string>>`
```
                map
-----------------------------------------
keys                      value
"hansa"   ------------->  {"12:00","3:00","9:00"}
"kandlua" ------------->  {"8:00","1:00"}
"lumpy"   ------------->  {"11:00"}
"surus"   ------------->  {"5:00","3:00","9:00","2:00"}

```
* we want to add a second feeding time  of 4:00 for "lumpy"
* which code of the following line will correctly update the state ? <br>
`1. feedingTimes["lumpy"].add("4:00")`<br>
`2. vector<string> times=  feedingTimes["lumpy"].add("4:00")` <br>
`3. vector<string> times = feedingTimes["lumpy"];` <br>
    `times.add("4:00");` <br>
    `feedingTimes["lumpy"] = times;` <br>

**1 and 3 works**

 * Operator and = Operator Nuances
  * when you use the `[]` operator to access an element from a map, you get a reference to the map,
    which means any changes you make will be persitent in the map
  * However, when you use the `=` operator to assgin the result of the `[]` operator to a variable，
    you get a copy of the internal data structure 
  * if you choose to store the internal data structure in a variable，you must do an explicit 
    reassignment to get your chance to persist
 
### Nested ADTs Summary
 * powerful
    * can express highly structured complex data;
    * used to many real-world systems

* Tricky
    * with increase complexity comes increased congnitive load in differentiating between levels of 
      infomation stroed at each level of nesting.
    * specifically in C++, working with nested data structures can be tricky due to the fact that 
      references and copies show up at different points in time, follow the correct paradigmd presented
      earlier to stay on track



### big O notation






