#include<iostream>
#include<string>
using namespace std;

// There are 2 main advantages of tries over hashmaps
// 1.Space Optimized
// 2.Faster Searching (in case of recommendation on the basis of typed letters)

// there are 2 types of tries.
// 1. Compressed Tries
// 2. Suffix Tries

// In compressed tries we can club the characters based on if the have no other children
// i.e. if there is only one linear path from a alphabet then we can club the alphabets of that path.
// important in case of deletion if deletion leads to creation of a linear path then we have to club that path also.

// In pattern matching in Suffix Tries we want to implement search functionlike com. + f
// 1. Since we need to print every text therefore we will have to remove the property of isTerminal.
//    We want that every thing (starting from typed letters) should be printed so remove prop
// 2. We want that every suffix of the word should also be shown. To implement this we will have to 
//    insert every suffix of every word as well.

int main()
{
    

    return 0;
}