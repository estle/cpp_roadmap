#include<bits/stdc++.h>

using namespace std;

int main() {
    // Sequence Containers: These are linear data structures that store elements in a sequential manner. Examples include:
    // A dynamic array that grows and shrinks at runtime.
    vector<int> my_int;

    // A doubly linked list.
    list<int> my_list;

    // A double-ended queue allowing insertion and deletion at both ends.
    deque<int> my_deque;

    // Associative Containers: These containers store data in a sorted manner with unique keys. Examples include:
    // A collection of unique elements sorted by keys.
    set<int> my_set;

    // A collection of key-value pairs sorted by keys.
    map<string, int> my_map;

    // Unordered Associative Containers: These containers store data in an unordered manner using hash tables. Examples include:
    // A collection of unique elements in no specific order.
    unordered_set<int> my_unordered_set;

    // A collection of key-value pairs in no specific order.
    unordered_map<string, int> my_unordered_map;

    // Container Adaptors: These are containers based on other existing containers. Examples include:
    // A LIFO data structure based on deque or list.
    stack<int> my_stack;

    // A FIFO data structure based on deque or list.
    queue<int> my_queue;

    // A sorted queue based on vector or deque.
    priority_queue<int> my_priority_queue;
}