#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k) 
{
	int count=0;
    unordered_map<int,int> our_map;
    for (int i = 0; i < n; i++)
    {
        our_map[arr[i]]++;
    }
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            if(our_map.count(arr[i])==0){continue;}
            int temp=our_map[arr[i]];
            int temp_ans=((temp)*(temp-1))/2;
            count+=temp_ans;
            our_map[arr[i]]=0;
        }
        return count;
    }
    for(int i=0;i<n;i++)
    {
        int temp=arr[i]-k;
        if(temp<0)
        {continue;}
        if(our_map.count(temp)>0)
        {
            count+=our_map[temp];
        }        
    }
    return count;
}

int main()
{
    return 0;
}