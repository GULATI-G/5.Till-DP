#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> kSmallest(int arr[], int n, int k) 
{
    priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(arr[i]<pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> v;
    for(int i=0;i<k;i++)
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