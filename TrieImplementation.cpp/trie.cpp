#include <iostream>
using namespace std;

class TreeNode{
public:
    char ch;
    TreeNode* children[26];
    bool isTerminal;
    TreeNode(char ch){
        this->ch=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
public:
    TreeNode* root=new TreeNode(' ');

    void insertUtil(TreeNode* root, string word)
    {
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }

        int index= word[0]-'a';
        TreeNode* child;

        if(root->children[index]!=NULL)
            child=root->children[index];
        else
            child=new TreeNode(word[0]);
            root->children[index]=child;

        insertUtil(child,word.substr(1));
    }

    void insertIntoTrie(string word)
    {
        insertUtil(root,word);
    }

    bool searchUtil(TreeNode* root, string word)
    {
        if(word.length()==0)
        {
            return root->isTerminal;
        }

        int index=word[0]-'a';
        TreeNode* child;

        if(root->children[index]!=NULL)
            child=root->children[index];
        else
            return false;

        return searchUtil(child, word.substr(1));
    }

    bool searchInATrie(string word)
    {
        return searchUtil(root,word);
    }

    bool isEmpty(TreeNode* root)
    {
        for (int i = 0; i < 26; i++)
            if (root->children[i])
                return false;
        return true;
    }

    TreeNode* deleteUtil(TreeNode* root, string word)
    {
        if(word.length()==0)
        {
            if(root->isTerminal){
                root->isTerminal=false;}
            else{
                cout<<"There is no such word"<<endl;
                return NULL;}

            if(isEmpty(root))
            {
                delete(root);
                root=NULL;
            }
            return root;
        }

        int index=word[0]-'a';
        TreeNode* child;

        if(root->children[index]!=NULL)
            child=root->children[index];
        else
            cout<<"There's no such word"<<endl;
            
        return deleteUtil(child, word.substr(1));

        if(isEmpty(root) && root->isTerminal==false)
        {
            delete(root);
            root=NULL;
        }

        return root;
    }

    void DeleteWord(string word)
    {
        deleteUtil(root,word);
    }
};

int main()
{
    Trie tr;
    tr.insertIntoTrie("time");
    tr.insertIntoTrie("hello");

    cout<<"word \"time\" is present "<<tr.searchInATrie("time")<<endl;
    cout<<"word \"helo\" is present "<<tr.searchInATrie("helo")<<endl;

    tr.DeleteWord("time");
    cout<<"word \"time\" is present "<<tr.searchInATrie("time")<<endl;

    return 0;
}