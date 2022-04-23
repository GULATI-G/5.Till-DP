#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int main()
{
    // Now let's implement our own map using hash table
    // In order to perform all 3 tasks in O(1) the best data structure is array. Let's call our final array -> bucket
    // array. So we need a int for every key and that int should be fixed for that key
    // We'll make a hash function in order to convert the key (which may be string or class student)
    // to an int which can be the index of the array. First of all we make a hash code that converts key into 
    // int ( which will be different for every data type). Second, since the first step can return a value very
    // large for which we will have to create a very large array, we will make a compressor function which will 
    // compress the int returned by the first step into a small int which can be the index. A compressor func may
    // like % bucket size which will get the remainder from division of int obtained by hash code and bucket array size
    // The int that we get from hash function will be used as the index for that key.

    // Now for hash code 
    // 1. for int we will simply return int(and let the compressor take care of the rest)
    // 2. for string we will break abcd = a* (p)^3 + b* (p)^2 + c* (p)^1 + d* (p)^0    where p is prime number 
    //    and we will be using the ascii value of a,b,c,d. We can't go for simply sum of abcd ascii's value
    //    as it will treat abcd and dbca as same. 
    // 3. For student we can take the address of that student object and convert it to int and then pass through
    //    compressor function 


    // But it might be possible that hash function returns same index for 2 different keys. So there is a collision.
    // Let's handle the collision. There are 2 ways to handle this collision
    // 1. Closed Hashing / Closed addressing
    // 2. Open addressing

    // Closed hashing means that all of the colliding keys will go to same index in the array. We implement it by
    // making an array of linked list. Each time a new key comes it will be added to the tail 
    // This is also called separate chaining

    // In open addressing if the int from hash function is filled then we look for another location in the array to fill the 
    // key. There are many ways to look for this location. We basically make a function
    // hi(a) = h f(a) + f(i)  . ith attempt is equal to original hash function + function of i . We can make infinite ways
    // to probe. eg. f(i) can be linear or quadratic or Double hashing

    // 1. Linear is when i is full we look for i+1 then i+2 and so on. i.e f(i)=i
    // 2. Quadratic is when f(i) is i^2 . This is helpful when a specific area of array is crowded. 
    // 3. Double hashing is when f(i)=i* h'(a)    where h'(a) is a different hash function. So aim is that conflict may be over
    //    one is facing conflict and other is not. If both faces then we take another hash function and so on.
    
    // Different types of open addressing techniques mean different type of f(i)
    // First requirement for f(i) is that f(0)=0;
    // during probing if needed we can compress the int again.

    // We wold be using separate chaining in our implementation as it is relatively easy.

    return 0;
}