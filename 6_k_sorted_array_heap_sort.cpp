#include<iostream>
#include<queue>
using namespace std;

// queue header file also has inbuilt priority queue. The name of the class for priority queue is
// priority_queue <  > . it is also made from template 
// inbuilt priority queue by default is max priority queue

// isEmpty() -> is now empty()
// getSize() -> is now size()
// void insert() -> is now void push(element)  (root contains largest element)
// getMax() -> is now T top()   which will return the largest value
// t removeMax() -> is now void pop()   this will delete the root element

void k_sorted_array(int arr[], int n, int k)
{
    if(n==0 || n==1){return;}
    priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=pq.top();
        pq.pop();
        if((i+3)<n)
        {pq.push(arr[i+3]);}
    }
    return;
}

// Above code is not checked so pls be aware

int main()
{
    priority_queue<int> pq;
    return 0;
}