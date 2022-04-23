#include<iostream>
#include<vector>
using namespace std;

class PriorityQueue
{
    vector<int> pq;
    public:
    PriorityQueue()
    {}

    bool isEmpty()
    {
        return pq.size()==0;
    }
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if(pq.size()==0){return 0;}
        return pq.at(0);
    }

    void insert(int element)
    {
        pq.push_back(element);
        int i=pq.size()-1;
        while(pq.at((i-1)/2)>pq.at(i) && i!=0)
        {
            int temp=pq.at((i-1)/2);
            pq.at((i-1)/2)= pq.at(i);
            pq.at(i)=temp;
            i=(i-1)/2;
        }
        return;
    }

        int removeMin()
    {
        if(isEmpty())
        {return INT_MIN;}
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentIndex=0;
        int leftChildIndex=2*parentIndex +1;
        int rightChildIndex=2*parentIndex +2;
        while( leftChildIndex<pq.size() )
        {
            int minIndex=parentIndex;
            if(pq[minIndex]>pq[leftChildIndex])
            {
                minIndex=leftChildIndex;
            }
            if(rightChildIndex<pq.size() && pq[rightChildIndex]<pq[minIndex])
            {
                minIndex=rightChildIndex;
            }
            if(minIndex==parentIndex)
            {
                break;
            }
            int temp=pq[minIndex];
            pq[minIndex]=pq[parentIndex];
            pq[parentIndex]=temp;

            parentIndex=minIndex;
            leftChildIndex=2*parentIndex+1;
            rightChildIndex=2*parentIndex+2;
        }
        return ans;
    }  
};

// This is also called heap sort as if we remove elements one by one, they will come out in min order

int main()
{
    PriorityQueue p1();

    return 0;
}
