#include<iostream>
#include<string>
using namespace std;

template <typename V>
class MapNode
{
    public:
    string key;
    V value;
    MapNode* next;

    MapNode (string key, V value)
    {
        this->key=key;
        this->value=value;
        next=NULL;
    }

    ~MapNode()
    {
        delete next;
    }
};

template<typename V>
class ourmap
{
    MapNode<V> ** buckets;
    int count;
    int numBuckets;

    public:
    ourmap()
    {
        count=0;
        numBuckets=5;
        buckets = new MapNode<V>*[numBuckets];
        for(int i=0;i<numBuckets;i++)
        {
            buckets[i]=NULL;
        }
    }

    ~ourmap()
    {
        for(int i=0;i<numBuckets;i++)
        {
            delete buckets[i];
        }
        delete [] buckets;
    }
    
    int size()
    {
        return count;
    }

    V getValue(string key)
    {
        int bucketIndex=getBucketIndex(key);
        MapNode<V> * head= buckets[bucketIndex];
        while(head!=NULL)
        {
            if(head->key==key){return head->value;}
            head=head->next;
        }
        return 0;
    }

    private:
    int getBucketIndex(string key)
    {
        int hashcode=0;

        int currentCoeff=1;
        for(int i=key.length()-1;i>=0;i--)
        {
            hashcode+=key[i] * currentCoeff;
            hashcode=hashcode % numBuckets;
            currentCoeff*=37;
            currentCoeff=currentCoeff % numBuckets;
            // we choose to take p as prime number as this helps to get good distribution
            // Further there is possibility that the number might exceed the highest possible number
            // possible for int. So using a property of % operator we will divide currentCoeff by bucketSize
            // And we will also divide hashCode each time by bucketSize

        }

        return hashcode % numBuckets;
    }

    public:

    void insert(string key, V value)
    {
        int bucketIndex=getBucketIndex(key);
        MapNode<V> * head= buckets[bucketIndex];
        while(head!=NULL)
        {
            if(head->key == key)
            {head->value=value;
            return;}
            head=head->next;
        }
        head=buckets[bucketIndex];
        MapNode<V> * node=new MapNode<V> (key,value);
        node ->next=head;
        buckets[bucketIndex]=node;
        count++;
    }

    V remove(string key)
    {
        int BucketIndex=getBucketIndex(key);
        MapNode<V> * head=buckets[BucketIndex];
        MapNode<V>* prev=NULL;
        while(head!=NULL)
        {
            if(head->key==key)
            {
                if(prev==NULL)
                {
                    bucket[BucketIndex]=head->next;
                }
                else {prev->next=head->next;}
                V ans = head->value;
                head->next=NULL;
                delete head;
                count--;
                return ans;
            }
            head=head->next;
            if(prev==NULL){prev=head;}
            else{prev=prev->next;}
        }
    }
    return 0;
};


int main()
{
    // Since we will have to define hash code for each different data type so as for now let's make the class
    // taking key as string

    return 0;
}