#include <iostream>
#include <list>
using namespace std;

class HashTable {
    int size;
    list<int>* table;

public:
    HashTable(int size) {
        this->size = size;
        table = new list<int>[size];
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (auto x : table[index]) {
            if (x == key) return true;
        }
        return false;
    }
};
