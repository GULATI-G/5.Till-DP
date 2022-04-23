#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

vector<int> remove_duplicates(int* arr, int size)
{
    vector<int> output;
    unordered_map<int,bool> our_map;
    for(int i=0;i<size;i++)
    {
        if(our_map.count(arr[i])>0)
        {continue;}
        else
        {
            our_map[arr[i]]=true;
            output.push_back(arr[i]);
        }
    }
    return output;

}

int main()
{
    return 0;
}