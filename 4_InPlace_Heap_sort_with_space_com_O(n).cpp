#include<iostream>
using namespace std;

// inplace are those in which we don't require any extra space. This word is mainly used for 
// sorting algo. i.e space complexity is almost O(1).
void heapSort(int arr[], int n) 
{
    if(n==0 || n==1){return;}
    for (int i=1;i<n;i++)
    {
        int child_index=i;
        int parent_index=(child_index-1)/2;
        while(child_index!=0 && arr[parent_index]>arr[child_index])
        {
            int temp=arr[child_index];
            arr[child_index]=arr[parent_index];
            arr[parent_index]=temp;

            child_index=parent_index;
            parent_index=(child_index-1)/2;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        int temp=arr[0];
        arr[0]=arr[n-i-1];
        arr[n-i-1]=temp;

        int parent_index=0;
        int min_index=parent_index;
        int left_index=2*parent_index+1;
        int right_index=2*parent_index+2;

        while(left_index<n-i-1)
        {
            if(arr[left_index]<arr[min_index])
            {min_index=left_index;}
            if(right_index<(n-i-1) && arr[right_index]<arr[min_index])
            {min_index=right_index;}

            if(min_index==parent_index){break;}

            int t1=arr[min_index];
            arr[min_index]=arr[parent_index];
            arr[parent_index]=t1;

            parent_index=min_index;
            left_index=2*parent_index+1;
            right_index=2*parent_index+2;
        }
    }
    return;
}

int main()
{

}