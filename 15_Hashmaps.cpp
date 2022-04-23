#include<iostream>
using namespace std;

// Hashmaps are also called hash tables or maps but there are difference btw all these terms
// Used alot in development.
// When given a problem to find the character occuring max number of times we can create an array
// of size 256 (which is the ma xnumber of characters) and then by traversing the string we can 
// the value at index i where i is the ascii value of the character on which we are.
// This will help us to do the problem in O(n) time com.

// Now given a problem we have to find the word occuring max number of times. Since there are 
// infinite number of words possible by any combination of the characters so we can not create a 
// array. 

// So we define the key for every word and then update using that key.

// There are 3 main operations to perform :-
// 1. Insert the key with value
// 2. Get the value using key
// 3. Delete using value 

// There are many ways to use this.
// 1. Linked List -> will take O(n) for every operation.
// 2. Balanced BST can be used which will perform every function in O(log n)
// 3. Hashtable will do with even lesser time complexity.

// in inbuilt hash maps we also have 2 varieties 
// one is using BST
// other is using hash tables

int main()
{
    return 0;
}