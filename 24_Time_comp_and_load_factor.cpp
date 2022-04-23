#include<iostream>
using namespace std;

int main()
{
    // although it takes different time for the hash function to convert various string to int
    // But since no. of keys >>> lenght of word so we'll assume hash function to perform in constant
    // time. 
    // in worst case a linked list may contain all the keys.
    // But in reality this doesn't really happen. if we have b boxes and n keys then 
    // each box will have on an average n/b keys. So we can assume time comp is O(n/b) 
    // this n/b is called the load factor. We try to keep n/b < 0.7 (or something in this range)
    // Since load factor has to be kept in certain range there we may have to increase the size
    // of our bucket array. To do so we do rehashing. 
    // So then we assume that the box will have constant number of entries therefore it will be O(1)
    // Although rehashing will take some time but we will be performing rehashing after a lot of 
    // intervals
    return 0;
}