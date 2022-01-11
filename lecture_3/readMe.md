#Lecture 3
## review lecture 2
 * write a program  contdown from 10 to 1 
 * and then print liftoff



# String
## defintion
* string: a data type that represent a sequence of characters

# String review
## string are made up of characters of type char, and the character of string
## can be accessed by the index in the string;

# String activity
## what the different between c++ and  other lang ?

* String are mutable in C++
* Unlike python and java
* You must assign string indices to a **character**
YES : `word[1] = 'a'`
NO : `word[1] = "a"`
* You can add character to string, and string to string using += and + 
* character must use `""` string use `" "` 
* you can logical operators to compare strings (and character)
`comparing string/ character just take the ASCII code to compare`



# String and char conventions


# string utility functions

## Three categories of functions
* Built-in C++ char functions `<cctype> library`
    * `<cctype> library`
    * see more info : `<a herf="https://www.cplusplus.com/reference/cctype/">`
    * return a boolean value, ture/false
    * eg:
    ```c++
    char letter = 'L';
    islower(letter);
    ```

* Built-in C++ string methods
**some useful methods**
s.append(str);
s.length(str);
s.replace(index, len, str);
s.substr(start, length);


# Two types of C++ strings
1. what will happen with the following  line of code ?
```C++
string hiThere = "hi" + "there";
```
You will get ...
A. an error
B. the string "hiThere" stored in `hiThere`
C. a garbage value stored in `hiThere`

ans: you will  get error
```
hiThere.cpp: In function ‘int main()’:
hiThere.cpp:7:27: error: invalid operands of types ‘const char [3]’ and ‘const char [6]’ to binary ‘operator+’
    7 |     string hiThere = "hi" + "There";
      |                      ~~~~ ^ ~~~~~~~
      |                      |      |
      |                      |      const char [6]
      |                      const char [3]

explain: 
    the error basiclly saying they are c type string, you can not add c type 
    string together,
    you have to convert them to c++ type of string, then add the together.
```

**There are two types of string**
1. c type string
2. C++ type string



1. what will happen with the following  line of code ?
```C++
string hiThere = "hi" + '?';
```
You will get ...
A. an error
B. the string "hiThere" stored in `hiThere`
C. a garbage value stored in `hiThere`

**ans : you will get garbage value**

# C string VS. C++ string summary
* C string have no methods
    * This is why you can not do something like `"hi".length()` in C++ 
* Conversion fixes
    * store the C string  in variable first convert to a C++ string
    * Use a convention function
    `string("text")`; => convert the C string literal into a C++ String
    `string.c_str()`; => return a C string from a C++ string

* NOTE: be awre of C string


















