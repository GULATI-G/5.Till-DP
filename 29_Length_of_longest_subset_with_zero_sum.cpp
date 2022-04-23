#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int* arr, int n) 
{
    int new_arr[n];
    int length=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
        new_arr[i]=temp;
    }
    
    unordered_map <int,int> our_map;
    for(int i=0;i<n;i++)
    {
        if(new_arr[i]==0)
        {
            int t=i+1;
            if(length<t)
            {
                length=t;
            }
        }
        else if(our_map.count(new_arr[i])>0)
        {
            int t=i-our_map[new_arr[i]];
            if(length<t)
            {
                length=t;
            }
        }
        else
        {
            our_map[new_arr[i]]=i;
        }
    }
    
    return length;
}

int main()
{
    return 0;
}