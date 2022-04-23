#include<iostream>
#include<vector>
using namespace std;
class PriorityQueue
{
    vector <int> pq;

    public:
    PriorityQueue()
    {}

    void insert(int element)
    {
        pq.push_back(element);
        int child_index=pq.size()-1;
        while(child_index!=0 && pq.at((child_index-1)/2) < pq.at(child_index))
        {
            int temp=pq.at((child_index-1)/2);
            pq.at((child_index-1)/2)= pq.at(child_index);
            pq.at(child_index)=temp;
            
            child_index=((child_index-1)/2);
        }
        return;
    }

    int getMax()
    {
        if(pq.size()==0)
        {return INT_MIN;}
        return pq[0];
    }

//     int removeMax()
//     {
//         if(pq.size()==0){return INT_MIN;}
//         int temp=pq.at(0);
//         pq.at(0)=pq.at(pq.size()-1);
//         pq.pop_back();
        
//         int parent_index=0;
//         int left_child=2*parent_index +1;
//         int right_child=2*parent_index +2;
//         int max_index=0;
//         while(left_child<pq.size())
//         {
//             if(pq.at(left_child)> pq.at(max_index))
//             {
//                 max_index=left_child;
//             }
//             else if(right_child<pq.size() && pq.at(right_child)>pq.at(max_index))
//             {
//                 max_index=right_child;
//             }
//             else if(max_index==parent_index)
//             {break;}

//             int temp1=pq.at(max_index);
//             pq.at(max_index)=pq.at(parent_index);
//             pq.at(parent_index)=temp1;
//             parent_index=max_index;
//             left_child=2*parent_index +1;
//             right_child=2*parent_index +2;
// 		}

//         return temp;
//     }
    
	int removeMax(){
		if(isEmpty()){
			return INT_MIN;
		}
		int ans=pq[0];
		pq[0]=pq[pq.size()-1];
		pq.pop_back();
		int parent=0;
		while(parent<pq.size()){
			int LeftIdx=(2*parent)+1;
			int rightIdx=(2*parent)+2;
			int maxIdx=parent;
			//If left 
			if(LeftIdx<pq.size() and rightIdx>pq.size()){
				maxIdx=LeftIdx;
			}
			//If right
			else if(rightIdx<pq.size() and LeftIdx>pq.size()){
				maxIdx=rightIdx;
			}
			//If both 
			else if(LeftIdx<pq.size() and rightIdx<pq.size()){
				if(pq[LeftIdx]>pq[rightIdx]){
					maxIdx=LeftIdx;
				}
				else{
					maxIdx=rightIdx;
				}
			}
			//If none
			else{
				break;
			}
			if(maxIdx==parent){
				break;
			}
			else{
				swap(pq[maxIdx],pq[parent]);
				parent=maxIdx;
			}
		}
		return ans;
	}

    int getSize()
    {
        return pq.size();
    }

    bool isEmpty()
    {
        return pq.size()==0;
    }
};

int main()
{
    return 0;
}
