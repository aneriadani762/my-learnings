# my-learnings
A repository to collect all my C++ learnings and practice codes.

Starting right from the basics and would try documenting it too.

## Table of Contents
* [Standard Template Library](#standard-template-library)
* [Data Types](#data-types)
* [Storage Class](#storage-class)


## Standard Template Library (STL)
Basically, it's a set of templates which makes our code simple and easy to write.

For eg: Swapping of 2 elements.

without STL: 
t=a;
a=b;
b=t;

with STL;
swap(a,b);

To use STL:
just write this at the very start of the code:
#include<bits/stdc++.h>

## Every variable has two features: Data types and storage class.

#### Data Types
Data types are used to declare various variables so that it is restricted to store only a particular type of data.
Basically, it tells you what type of data is stored in a particular variable.
Various data types are int, long, float, long long, char. Different data types require a different amount of memory.

## Storage Class
It controls the lifetime, i.e. how long the variable can exist and the scope of the variable, i.e. in which part its accessible.
Types: 
1. Local variable
2. Global variable
3. Static local variable
