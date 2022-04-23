#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool isMaxHeap(int arr[], int n) 
{
    for(int i=0;i<n;i++)
    {
        int left_index=(2*i+1);
        int right_index=(2*i+2);
        if(left_index<n)
        {
            if(arr[left_index]>arr[i])
            {return false;}
        }
        if(right_index<n)
        {
            if(arr[right_index]>arr[i])
            {return false;}
        }
    }
    return true;
}

int main()
{
    return 0;
}