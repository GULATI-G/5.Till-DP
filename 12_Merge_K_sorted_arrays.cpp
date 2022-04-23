#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//  IMPORTANT :- THERE IS ANOTHER APPROACH TO REDUCE SPACE COMPLEXITY. SEE HINT VIDEO FOR THAT

// https://www.geeksforgeeks.org/priority-queue-of-pairs-in-c-with-ordering-by-first-and-second-element/
// This link will be useful for solving the problem

vector<int> mergeKSortedArrays(vector<vector<int>*> input) 
{
    priority_queue < int , vector<int> , greater<int> > pq;
    for(int i=0;i<input.size();i++)
    {
        pq.push(input[i]->at(0));
    }
    vector<int> v;
    for(int i=0;i<input.size();i++)
    {
        for(int j=1;j<input[i]->size();j++)
        {
            pq.push(input[i]->at(j));
        }
    }
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}

int main()
{
    return 0;
}