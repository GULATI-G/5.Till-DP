#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int buyTicket(int *arr, int n, int k) 
{
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {pq.push(arr[i]);}
    int ans=0;

    while(k!=0 || pq.top()!=arr[0])
    {
        if(pq.top()==arr[0])
        {
            ans++;
            int temp=arr[0];
            for(int i=1;i<pq.size();i++)
            {
                arr[i-1]=arr[i];
            }
            arr[pq.size()-1]=temp;
            pq.pop();
            k--;
        }
        else if (k==0)
        {
            int temp=arr[0];
            for(int i=1;i<pq.size();i++)
            {
                arr[i-1]=arr[i];
            }
            arr[pq.size()-1]=temp;
            k=pq.size()-1;
        }
        else
        {
            int temp=arr[0];
            for(int i=1;i<pq.size();i++)
            {
                arr[i-1]=arr[i];
            }
            arr[pq.size()-1]=temp;
            k--;
        }
    }
    ans++;
    return ans;
} 

int main()
{
    return 0;
}