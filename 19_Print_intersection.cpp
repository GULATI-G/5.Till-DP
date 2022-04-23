#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) 
{
    unordered_map<int,int> our_map;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        our_map[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(our_map.count(arr2[i])>0)
        {
            if(our_map[arr2[i]]==1)
            {
                v.push_back(arr2[i]);
                our_map.erase(arr2[i]);
            }
            else
            {
                v.push_back(arr2[i]);
                our_map[arr2[i]]--;
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return;
}

int main()
{
    return 0;
}