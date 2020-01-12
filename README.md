# The C++ Standard Template Library (STL) 
*by Mario*

Hello everyone. In this blog, I will be explaining to you about the use of several STL features.

## What is STL and its uses?
The Standard Template Library is a set of C++ template classes which provides many useful programming data structures and functions, making coding easier.
STL is especially useful when it comes to competitive programming (e.g. IOI) and there is definitely highly important to learn about STL  to solve questions in competitive programming.


## Containers
Firstly, let's start by introducing container. They are used to store objects and data.


#### 1. vectors
A vector is a stack with the functionality of an array which can resize itself after inserting and removing elements from this container.
```c++
vector<int> v;
```

Here are some essential functions to use for vectors:

**.push_back()** : add element to the back of the vector

**.pop_back()** : remove element at the back of the vector

**.insert()** : add an element at a specified position

**.erase()** : add an element at a specified position or range

**.size()**
```c++
#include <bits/stdc++.h>
using namespace std;

vector<int> v = {0,1,2,3,4,5,6,7,8,9};
v.push_back(10);   // vector is now: v = {0,1,2,3,4,5,6,7,8,9,10}
v.pop_back();   // vector is now: v = {0,1,2,3,4,5,6,7,8,9}
cout << v.size();   // prints 10
v.insert(v.begin(), 5);   // v = {5,0,1,2,3,4,5,6,7,8,9}
v.erase(v.begin());   // v = {0,1,2,3,4,5,6,7,8,9};
v.erase(0,4);   // v = {4,5,6,7,8,9};
```


#### 2. stack
First-In-Last-Out data structure. Elements that are added first will be removed last. 
```c++
stack<int> s;
```
Here are some essential functions to use for stack:

**.push()** : add element to the top of the stack

**.pop()** : remove element at the top of the stack

**.top()** : returns the top element

**.size()** 
[click here to view my example codes of stack](https://github.com/MarioHanzel/Standard_Table_Library/blob/master/stack.cpp)



#### 3. queue
It is a First-In-First-Out data structure. As its name suggests, the container works just like a real life queue. Just imagine this scenario, a person who enters a queue first in front of the cashier gets to get out and purchase his goods first, the second person who enters the queue gets out the second, so on and so forth.

```c++
queue<int> q;
```
Some codes that are imperative to take note of:

.push() : add element at the front of the container

.pop() : removes element at the front of the container

.front() : returns the front element of the container

.empty() : returns 0 if queue is not empty, otherwise, 1.

[click here to view my codes on queue](https://github.com/MarioHanzel/Standard_Table_Library/blob/master/queue.cpp)



#### 4. deque
Deque is a double-ended queue. It has the functionality of both a vector and queue. It is a special kind of queue as you can add and remove elements at the front and at the back of this container.

```c++
deque<int> dq;
```
Below shows functions you need to know for deque:
```c++
dq.push_back(10);  //adds 10 at the back of the container
dq.push_front(11);  //adds 11 at the front of the container
dq.pop_back();  //removes element at the back of the container
dq.pop_front();  //removes element at the front of the container
```


#### 5. list


## Iterators

Lastly, I will be telling you more about iterator. What exactly is an iterator? Iterator is an object that points to element in data structure. 
Iterators can be categorised into:
 - Input iterator
 - Output iterator
 - Forward iterator
 - Bidirectional iterator
 - Random access iterator
 
**Input iterators** are used to access elements in a data structure container but cannot modify the element. Unlike input iterators, **output iterators** can modify the elements but cannot read the value of an element in the container. 

The **forward iterators** have both the functionality of input and output iterators. It can read and modify the container. However, it is limited to one direction when iterating through the container, which is forward direction.

The **bidirectional iterators** have all the functionalities of the forward iterators and also have one more feature, it can also move backwards through the container.

The **random access iterators** have all the functionalities of the bidirectional iterators and have additional feature, which is to provide random access to an element.


Types of container that supports bidirectional iterators: list, set, multiset, map, multimap
Types of container that supports random access iterators: deque, vector, array


Here are some of the operations of iterator. 
**begin()** : This returns the starting position of the container.
**end()** : This returns the position after the last element of the container.
**++** : It is use to increase the iterator by one.
**- -** : It is used to decrease the iterator by one.
**=** : assigns the iterator.
*: gives the value of the element in the position pointed by the iterator.
**advance()** : increase the iterator until a specified value which is given as the second parameter in this function

Below are the example codes for different operations :
```c++
#include <bits/stdc++.h>
using namespace std;

vector<int> v = {0,1,2,3,4,5,6,7,8,9};
vector<int>::iterator ptr;
for(ptr = v.begin(); ptr < v.end(); ptr++){
    cout << *ptr; 
}
```
```c++
#include <bits/stdc++.h>
using namespace std;

vector<int> v = {0,1,2,3,4,5,6,7,8,9};
vector<int>::iterator ptr = v.begin();
advance(ptr, 4);
cout << *ptr; // prints out 4

```
