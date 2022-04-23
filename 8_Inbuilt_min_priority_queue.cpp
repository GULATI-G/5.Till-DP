#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// by default inbuilt priority queue is max. To use inbuilt min priority queue write following 
// priority_queue < int , vector<int> , greater<int> > pq;
// instead of only priority_queue<int> pq;

// 1. By default we check if value at parent_index is less than value at child_index (due to max)
//    so by writing greater<int> we want to indicate that look for greater not smaller. 
//    So basically this is specifying that when we have to swap the elements
// 2. Since we used vector internally for priority queue so we mentioned vector
// 3. In priority_queue < int , vector<int> , greater<int> > pq;  the typename (i.e template data) of vector and the queue should be same.
//    i.e                  |^  and     |^ they should be same

int main()
{
    return 0;
}