#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int sum(int n)
{
    int s=0;
    for(int i=1;i<n;i++)
    {s+=i;}
    return s;
}

int pairSum(int *arr, int n) 
{
    int ans=0;
    unordered_map<int,int> our_map;
    for(int i=0;i<n;i++)
    {our_map[arr[i]]++;}
    if(our_map.count(0)>0)
    {
        if(our_map[0]>1)
        {
            ans+=sum(our_map[0]);
        }
        our_map.erase(0);
    }
    for(int i=0;i<n;i++)
    {
        if(our_map.count(-1*arr[i])>0)
        {
            ans+=our_map[arr[i]]* our_map[-1*arr[i]];
            our_map.erase(arr[i]);
            our_map.erase(-1*arr[i]);
        }
    }    
    return ans;
}

int main()
{
    return 0;
}