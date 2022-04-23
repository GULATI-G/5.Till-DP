#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string uniqueChar(string str) 
{
    unordered_map<char,bool> our_map;
    string ans;

	for(int i=0;i<str.length();i++)
    {
        if(our_map.count(str[i])>0)
        {continue;}
        ans+=str[i];
        our_map[str[i]]=true;
    }
    return ans;
}

int main()
{
    return 0;
}