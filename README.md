#The C++ Standard Template Library (STL) 


Hello everyone, welcome to my blog. Here, I will be explaining and showing you about the use of several STL features.

The Standard Template Library is a set of C++ template classes which provides many useful programming data structures and functions, making coding easier.


##iterators

Firstly, let's start off with iterators. Well, what exactly is it? An iterator is an object that points to element in data structure. 
Iterators can be categorised into:
 - Input iterator
 - Output iterator
 - Forward iterator
 - Bidirectional iterator
 - Random access iterator
 
Input iterators are used to access elements in a data structure container but cannot modify the element. Unlike input iterators, output iterators can modify the elements but cannot read the value of an element in the container. 

The forward iterators have both the functionality of input and output iterators. It can read and modify the container. However, it is limited to one direction when iterating through the container, which is forward direction.

The bidirectional iterators have all the functionalities of the forward iterators and also have one more feature, it can also move backwards through the container.

The random access iterators have all the functionalities of the bidirectional iterators and have additional feature, which is to provide random access to an element.

Now, I will be explaining about the operations of iterator. 
