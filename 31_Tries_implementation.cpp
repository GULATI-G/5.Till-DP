 #include<iostream>
#include<string>
using namespace std;

class TrieNode
{
    public:
    char data;
    TrieNode** children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data=data;
        children=new TrieNode*[26];
        for (int i = 0; i < 26; i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie
{
    TrieNode* root;

    public:
    Trie()
    {
        root=new TrieNode('\0');
    }

    void insertWord(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }
        
        int index=word[0]-'a';
        TrieNode* child;
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else
        {
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertWord(child,word.substr(1));
        return;
    }

    void insertWord(string word)
    {
        insertWord(root,word);
        return ;
    }

    bool search(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            if(root->isTerminal==false){return false;}
            return true;
        }
        
        int index=word[0]-'a';
        if(root->children[index]==NULL)
        {
            return false;
        }
        return search(root->children[index],word.substr(1));
    }
    bool search(string word)
    {
        return search(root,word);
    }

    void removeWord(TrieNode* root, string word)
    {
        if(word.length()==0)
        {
            root->isTerminal=false;
            return ;
        }

        int index=word[0]-'a';
        if(root->children[index]!=NULL)
        {
            removeWord(root->children[index],word.substr(1));
            if(root->children[index]->isTerminal==false)
            {
                for(int i=0;i<26;i++)
                {
                    if(root->children[index]->children[i]!=NULL)
                    {return;}
                }
                delete root->children[index];
                root->children[index]=NULL;
            }
        }
        return;
    }

    void removeWord(string word)
    {
        removeWord(root,word);
        return;
    }
};

int main()
{
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("dot");

    cout<<t.search("and")<<endl;

    t.removeWord("and");
    cout<<t.search("and")<<endl;

    return 0;
}