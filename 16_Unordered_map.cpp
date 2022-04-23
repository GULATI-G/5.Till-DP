#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

// inbuilt maps are of 2 types from stl library
// 1. Map -> implemented using BST with time comp O(log n)
// 2. Unordered map ->implemented using Hashtable with time complexity O(1)

// in map there is order in everything

int main()
{
    unordered_map<string, int> our_map;
    // now this unordered map keeps the elements in the form of pair.
    // to insert an element we therefor have to pass a pair

    pair<string,int> p("abc",1);
    our_map.insert(p);
    // if "abc" is already present then the map will not insert any new element but update the value of key "abc"

    // we can also insert by 
    our_map["def"]=2;

    // to find or access
    cout<<our_map["abc"]<<endl;
    cout<<our_map.at("abc")<<endl;

    // .at() function doesn't allow us to access an key which is not present
    // what bracket i.e our_map[] does is that if the key is present then it will return the value 
    // if not then it inserts that key and puts it value as 0 and returns 0

    // cout<<our_map.at("ghi")<<endl;
    cout<<our_map["ghi"]<<endl;
    // this has now inserted ghi into map

    // there is count function that tells us how many times a key comes in the map
    // A key in map is either not present or present only once so the count function will return 
    // only 1 or 0;
    cout<<our_map.count("abc")<<endl;
    cout<<our_map.count("ghi")<<endl;
    cout<<our_map.count("jkl")<<endl;

    // now if we want to check that a particular key is present or not,
    // at if not present will give error
    // bracket will insert that in the map
    // we don't want any of above so we will perform following

    if(our_map.count("def")>0)
    {
        cout<<"def is present"<<endl;
        cout<<our_map["def"]<<endl;
        // or
        cout<<our_map.at("def")<<endl;
        // no issue in using any of them as the value exists
    }

    // there is also size function that allows us to see the size of the map
    cout<<"Size = "<<our_map.size()<<endl;



    if(our_map.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    else{cout<<"ghi is not present"<<endl;}

    // to erase an element 
    our_map.erase("ghi");

    if(our_map.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    else{cout<<"ghi is not present"<<endl;}
    
    cout<<"Size = "<<our_map.size()<<endl;



    return 0;
}