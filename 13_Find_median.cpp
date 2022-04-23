#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void findMedian(int *arr, int n)
{
    if(n==0){return;}
    priority_queue<int> pq;
    pq.push(arr[0]);
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++)
    {
        pq.push(arr[i]);
        vector <int> v;
        while(!pq.empty())
        {v.push_back(pq.top());
        pq.pop();}

        if(v.size() %2 ==0)
        {
            cout<<( v.at(v.size()/2) + v.at(v.size()/2 -1) )/2 <<" ";
        }
        else
        {
            cout<<v.at(v.size()/2)<<" ";
        }
        for(int j=0;j<v.size();j++)
        {
            pq.push(v.at(j));
        }

    }
    return;
}

int main()
{
    return 0;
}