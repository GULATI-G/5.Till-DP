#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) 
{
    unordered_map<int,bool> our_map;
    for(int i=0;i<n;i++)
    {
        our_map[arr[i]]=true;
    }
    vector <int> v;
    int length=0;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        int temp_length=1;
        while(our_map.count(temp+1)>0)
        {
            temp_length++;
            temp++;
        }
        if(temp_length>length)
        {
            if(temp_length==1)
            {
                v.push_back(arr[i]);
            }
            else
            {
                v.clear();
                v.push_back(arr[i]);
                v.push_back(temp);
            }
            length=temp_length;
        }
    }
    return v;
}

int main()
{
    return 0;
}