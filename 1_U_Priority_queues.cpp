#include<iostream>
using namespace std;

int main()
{
    // when there are elements in a queue there might be possibility that instead of doing first in first 
    // serve we might have a diffrentiating factor or importance factor. eg. criticality of patient in 
    // hospital room allotment or age factor in airlines reservation system.
    // So to tackle these conditions we have specially designed data structures- priority queue
    // which is extension of queue.
    // Insertion in priority queue is same as in queue that is element inserted is inserted at end

    // There are two types of priority queues :- min and max. min is the one in we extract element 
    // which has least importance factor first and so on. in max we extract the element which has max 
    // importance factor first.

    // Basically we have to perform main 3 tasks to perform in priority queues.
    // 1. insert function
    // 2. getMax/getMin function
    // 3. removeMax/removeMin function

    // So out of the existing data structures ( to use internally for the priority queues ) best is Balanced BST which performs
    // all the above 3 functions in log n time complexity.
    // but there are 2 problems with balanced BST that:
    // 1. first it will be difficult to keep the tree balanced tree
    // 2. It will be difficult to store the pointers etc for the balanced BST

    // So we use new data structure which is heap which has following these properties:-
    // 1. Complete Binary Tree (CBT)        

    // Complete Binary tree is the one in which except for the last level all levels above should be filled 
    // and in the last level too the elements should be filled left to right.
    // in CBT the height of the tree is always log n (due to its first property). This helps to keep the tree always balanced
    // removing first problem of Balanced BST
     
    // we will be saving the CBT in the form of array however we should think of it as a tree only
    // Now instead of traversing the whole tree to insert element, we can keep a variable (next index) to mark the 
    // next index at which we have to save the element. This will help us to insert in O(1) (not taking care 
    // of heap order property) . We can access the child of a node by
    // eg. if index of the parent is i then the index of its 2 children will be 2i+1(left) and 2i+2(right)
    // to access the parent if we are on the child node, if child node index is i then parent
    // node index will be (i-1)/2

    // Now let's see heap order property of heap 
    // There are 2 types of heaps as well - min heap and max heap (due to heap order prop of heap)
    // min heap is that a parent node should be smaller than the children in terms of data
    // max heap is that in which parent's data is bigger than the children data

    // to insert element in min heap we will insert at next index (that we maintained above). Then we will keep 
    // comparing the node with its parent and if it is less than parent node then we will swap it.
    // Doing this will help us to keep the tree balanced as well maintain heap order property.
    // the complexity for insertion of a new element therfore will be O(log n) as log n is the height of the tree.
    // this process is called up heapify
    
    // Now to delete element we want to delete the root element in both min and max heap but according
    // to CBT property we can only delete the last element. So we swap the root element and the last element and 
    // and then delete the last element. Now this violates the heap order prop so what we what we do is we swap
    // the new root with the child of lesser data and then keep on swapping . Again this will also take O(log n).
    // this process is called down heapify

    // to access the least or max element it will take O(1). 

    // important think like tree save like array/vector else difficult to solve the problem

    return 0;
}