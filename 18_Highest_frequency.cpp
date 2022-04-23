#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int highestFrequency(int arr[], int n) 
{
    unordered_map<int,int> our_map;
    for(int i=0;i<n;i++)
    {
        our_map[arr[i]]++;
    }
    int max=0;
    int element=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<our_map[arr[i]])
        {max=our_map[arr[i]];
        element=arr[i];}
    } 
    return element;
}

int main()
{
    return 0;
}