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





