#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    int data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            this->children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';

        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    bool spellCheck(string word)
    {
        return searchWord(word);
    }

    void buildDictionary(vector<string> &dictionary)
    {
        for (string word : dictionary)
        {
            insertWord(word);
        }
    }
};

int main()
{
    Trie *t = new Trie();

    vector<string> dictionary = {"apple", "banana", "orange", "grape", "pear"};
    t->buildDictionary(dictionary);

    string inputWord;
    cout << "Enter a word to check its spelling: ";
    cin >> inputWord;

    if (t->spellCheck(inputWord))
    {
        cout << "Correct spelling!" << endl;
    }
    else
    {
        cout << "Incorrect spelling!" << endl;
    }

    return 0;
}