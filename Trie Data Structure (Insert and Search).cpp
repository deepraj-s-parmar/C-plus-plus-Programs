#include <iostream>
using namespace std;

class TrieNode {

public:
    TrieNode* child[26];
    bool isEnd;

    TrieNode() {

        isEnd = false;

        for (int i = 0; i < 26; i++)
            child[i] = NULL;
    }
};

class Trie {

public:

    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {

        TrieNode* temp = root;

        for (char ch : word) {

            int index = ch - 'a';

            if (temp->child[index] == NULL)
                temp->child[index] = new TrieNode();

            temp = temp->child[index];
        }

        temp->isEnd = true;
    }


    bool search(string word) {

        TrieNode* temp = root;

        for (char ch : word) {

            int index = ch - 'a';

            if (temp->child[index] == NULL)
                return false;

            temp = temp->child[index];
        }

        return temp->isEnd;
    }
};

int main() {

    Trie t;

    t.insert("apple");
    t.insert("ball");

    cout << t.search("apple");

    return 0;
}
