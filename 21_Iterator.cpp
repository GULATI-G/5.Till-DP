#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

// Iterator is there in a lot of inbuilt structures like vector, list ( inbuilt version of linked list), map, unordered_map, set 
// and unordered set. A set is basciaclly a map but in a set we only store keys and not values. Set is like map and unordered set 
// is like unordered map. Set is implemented using BST and unordered set is implemented using hashtable. 
// Set does task in log n and unordered set does work in O(1).

// Since unordered map is not sorted so we will not be getting the values in order.
// so when we make a iterator we kind of get a pointer to one of the key. Then iterator++ will give us the next element .
// It will now point to another location



// now to point this iterator to the starting of the map we write ( but note it will not be first element you entered)
// 


int main()
{
    unordered_map<string,int> ourmap;

    ourmap["abc1"]=1;
    ourmap["abc2"]=2;
    ourmap["abc3"]=3;
    ourmap["abc4"]=4;
    ourmap["abc5"]=5;
    // to initialise iterator write:-
    unordered_map<string,int> :: iterator it;
    // |^ this is datatype                |^ this is the name of the iterator

    // now to point this iterator to the starting of the map we write ( but note it will not be first element you entered)
    it=ourmap.begin();
    // Since unordered map is not sorted so we will not be getting the values in order.
    // so when we make a iterator we kind of get a pointer to one of the key. Then iterator++ will give us the next element .
    // It will now point to another location

    // to iterate
    // 1. is to see the size of the map and iterate that number of times
    // 2. is to iterate till it== ourmap.end() . this is basically means that the task is over and we have iterated over all the 
    // elements. NOTE the end doesn't mean that we have reached the last element, it means 
    // we have surpassed the last element .


    for(int i=0;i<ourmap.size();i++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }

    cout<<endl<<endl;
    it=ourmap.begin();

    while(it!=ourmap.end())
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }
    // had it been we had used sorted map we would got elents printed in inorder traversal

    // important we have to write at least 1 element before we point the iterator towards the beginning.
    
    // and see it doesn't matter if we erase the element the iterator was pointing in the beginning. it point towards the next
    // key
    ourmap.erase("abc5");
    // ourmap["abc6"]=6;
    cout<<endl<<endl;
    it=ourmap.begin();

    while(it!=ourmap.end())
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }

    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> :: iterator it1 =v.begin();

    cout<<endl<<endl;

    while(it1!=v.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
    // in vector it follows the order in which we entered the elements

    // iterator has some functions that only the iterator can perform.
    // eg.
    // to find the value of a key we use
    // cout<<ourmap["abc1"]; or .at()

    // but to point the iterator towards a specific key we use find function of map
    unordered_map<string,int> :: iterator it2;
    it2=ourmap.find("abc1");

    cout<<endl<<endl;

    cout<<it2->first<<"\t"<<it2->second<<endl;

    cout<<endl<<endl;

    // erase function deleted the pair by taking input the key wg. ourmap.erase("abc1");
    // but we can also erase a pair by passing the iterator of that pair. eg.

    ourmap["abc7"]=7;
    ourmap["abc8"]=8;

    it=ourmap.begin();
    cout<<"before erasing"<<endl;
    while(it!=ourmap.end())
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }
    unordered_map<string,int> :: iterator it3;
    it3=ourmap.find("abc2");
    ourmap.erase(it3);

    cout<<endl<<endl;

    cout<<"after erasing"<<endl;
    it=ourmap.begin();
    while(it!=ourmap.end())
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }

    cout<<endl<<endl;

    // we can go one next step further
    // we can tell the map to erase continous pairs. eg.

    unordered_map<string,int> :: iterator it4;
    it4=ourmap.find("abc3");
    
    ourmap.erase(it4,ourmap.end());
    
    // we can't do ourmap.erase(it4,it+3) but imagine we can then, 
    // IMPORTANT this will erase it4, it4 +1 and it4+2   NOT it4 + 3  that is it will stop one before the second arguement.
    // similiarly putting (ourmap.begin(), ourmap.end()) wil erase the whole map
    // this doesn't make sense in unordered map but helps in vector.

    cout<<"after erasing more elements "<<endl;
    it=ourmap.begin();
    while(it!=ourmap.end())
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }

    // similiarly find and erase(iterator) is there in vector as well


    return 0;
}