# Lecture 5
## our first ADT **vector**
* at a high level, a vector is an ordered collection of same type that can 
  grow and shrink in size.
* Each element in collection has a specific location or index
* All elements in a vector must  be the same type.
* Vectors are flexible when it comes to the number of elements they can strore
you can easily add and remove elements, and the vector  also know their size.


# Ordered data structure
* the data strore inside maintain a specific order.

# Grid
## what is a grid ? 
* a 2D array,defined with a particular width and height
* Useful for spreadsheets, game boards, etc
* Three ways to declare a grid
    * `Grid<type> gridName`
    ```
    Grid<int> board;
    board.resize(3,3);  // if you declare a board with no initialization,
                        // you must resize or reassign it before using it
                        // resizing will fill it with default value for that type.
    board[0][0] = 2;
    board[1][0] = 7;
    ```
    * `Grid<type> gridName(nameRows,numCols)`
    ```
    Grid<int> board(3,3);
    board[0][0] = 2;
    board[1][0] = 7;
    ```
    * `Grid<type> gridName({r0c0,r0c1,r0c2},{r1c0,r1c1,r1c2})`
    ```
    Grid<int> board = {{2,0},{6,0}};
    ```

## grid methods
* usually use:
    * grid.numRows()：return the number of rows in the grid.
    * grid.numCols()：return the number of columns in the grid.
    * `grid[i][j]` ：select the element in `i`th row and `j`th column
    * grid.inBounds(row,col): return `ture ` if the position is in the grid,
      `false` otherwise.



## what is q queue ?
* like a real queue/line 
* first person in id the first person out **FIFO**
* when you remove (dequeue) people from the queue, you remove them from the
  the front line.
* Last person in is the last person served
    * When you insert(enqueue) people into a queue, you insert them at the back
      (in the end og  the line)

## queue methods
* A queue must implement at least the following functions:
1. `enqueue(value)` or `add(value)` place a entity on to the back of the queue
2. `dequeue()`or`remove()` remove an entity from the front of the queue and return it.
3. `peek()`or`front()` look at the entity at the front of the queue, btn't remove it.4. `isEmpty()` a boolean value, `ture` if the queue is empty,
   `false` if the queue have at least one element
   note: a runtime error if a `dequeue()` or `front()` operation is attmepted on
   an empty queue.

## what is a stack ?
* Modeled like an actual stack (of panpackes).
* Only the top element is accessiable.
    * **The Last item In is the first one OUT**
* the operation just `push`, `pop`, `top`

## stack methods
* `push(value)` or `add(value)` place an entity onto the top of the  stack
* `pop()` or `remove()` remove an entity from the top of stack and return it.
* `peek()` or `top()` look at the entity at the top of the stack ,but don't return it
* `isEmpty()` a boolean value, `ture` if the stack is empty,
   `false` if the stack have at least one element
   note: a runtime error if a `pop()` or `top()` operation is attmepted on
   an empty queue.


# queue + stack patterns
## common patterns and pitfalls with stack and queue
* Idioms:
    1. Emptying a stack/queue
    ```c++
    queue<int> queue1
    // produce: {1,2,3,4,5,6}
    for (int i = 0; i <=6; i++) {
            queue1.enqueue(i);
        }
    // removing all the elements in queue queue1.
    while (!queue1.isEmpty()) {
            cout << queue1.dequeue() << "";
        }
        cout << endl;
    // prints: 1 2 3 4 5 6
    ```
    
    ```c++
    stack<int> stack1
    // produce: {1,2,3,4,5,6}
    for (int i = 0; i <=6; i++) {
            stack1.push(i);
        }
    // removing all the elements in queue queue1.
    while (!stack1.isEmpty()) {
            cout << queue1.pop() << "";
        }
        cout << endl;
    // prints: 1 2 3 4 5 6
    ```
    2. iterating over and modifying a stack/queue -> only calculate size once before looping.
    
    ```c++
    queue<int> queue2 = {1,2,3,4,5,6}
    int origQSize = queue2.size();
    for (int i = 0; i <= origQSize; i++) {
            int value = queue2.dequeue(); // dequeue() will remove the last element and return it,
                                          // here, the value is the last element in queue2.
            if (value % 2 == 0) {
                    queue2.enqueue(value);
            }
    }
    cout << queue2 << endl;
    // prints:  {2,  4,  6}
    ```

    ```c++

    stack<int> stack2 = {1,2,3,4,5,6};
    stack<int> result;

    int origQS_Size = stack2.size();
    for (int i = 0; i < origQS_Size; i++) {
            int value = stack2.pop();
            // add even values to result
            if (value % 2 == 0) {
                result.push(value);
            }
    }
    cout << result << endl;

    // prints：{6,4,5}

    ```
    **if you edit the ADT within loop , ! don't use `.size()` in loop condistion**
    **the size changes while the loop runs **
    * unlike with queues you can not iterate a stack without destorying it.
      it may be benificial to make a copy instead.


# Treadeoffs with queues  and stacks （vs. other ADT）
## what are some downside of using queue/stack ?
1. No random access. you get the front/top or nothing.
2. No size-effect-free traversal, you can only iterate all the element in the structure by removing pervious element first. 
3. No easy way  to search through a queue/stack.
## what are some benefits ?
* Useful for lots of real word problems, many real word problem can be solved with a LIFO or FIFO model
* very easy to build one from an array such that access is guaranteed be fast.




# what ADT should we use ?
For each the task, which ADT is the best suited for the task ?
1. the undo button in a text editor.[stack]
2. jobs submitted to a printer that can be also be cancelled [vector] any one of the jobs can be cancelled
3. LaIR requests [queue]
4. your browsing history [vector]
5. google spreadsheets [queue]
6. call center("your call will be handled by the next availble agent").[queue]

# ADTs summary (so far)
### Ordered ADTs with accessiable indices
**type:**
* vector (1 D) 
* grid (2 D) 

**Traits:**
* easily able to search through all elements
* can use the indices as a way of structuring the data

### Ordered ADTs where you can't  accesse elements by index
**type:**
* queues (FIFO) 
* stack (LIFO) 

**Traits:**
* constrains the way you can insert and access data
* more efficient for solving specific LIFO/FIFO problems































