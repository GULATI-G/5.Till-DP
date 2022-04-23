#include<iostream>
using namespace std;

// question is to implement dictionary
// operations are:-
// 1. Search word
// 2. Add Word
// 3. Remove Word
// Hashmaps perform above operations in O(1) but this is average case time complexity.
// to convert eg. abc to hash code we will have to work O(length of the word).
// similarly for search and remove Word the time complexity will alse be O(length of the word) which is independent
// of dictionary length.

// Trie hs a tree like data structure with some elements marked. 
// In case of implementing a dictionary with tries the marked elements mark the ending of a word.
// A parent at max can have 26 children.
// If there is no child we create one and then move on to the children 
// In trie also insert, search and remove word functions are taking time complexity O(length of word).
// to delete word we should ideally only mark the ending char as not a terminal one but since it will be occupying 
// some space so we will remove that child also.

// Trie is better than hashmap in this case as 
// 1. since we are storing letter a (for words starting with a) only one time for all the words
//    therefore space is optimised.
// 2. For giving the preferences if we type initial of the word feature, hashmap will be searching entire map
//    but trie will only search the children of that initials

// think trie as a tree. U can implement recursion here also


int main()
{
    return 0;
}