#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// priority Queue are of two types
// 1. Max Priority Queue (max priority is of greater elemeent)
// 2. Min Priority Queue (min priority is of lesser element)

//* they can be considered as maxHeap and minHeap respectively

// ! by default it is max priority Queue
// although we can make it min priority Queue by using compare




int main(){

    //! max priority queue
    // priority_queue<int> pq;
    // priority_queue <int, vector<int>, std::less<int>> pq;

    // vector<int> v {9,1,5,2,7,12,44};
    // for (int i = 0;i<v.size();i++){
    //     pq.push(v[i]);
    // }

    // while(!pq.empty()){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }


    //! min priority queue

    priority_queue <int, vector<int>, std::greater<int>> pqMin;
    vector<int> v2 {9,1,5,2,7,12,44};
    for (int i = 0;i<v2.size();i++){
        pqMin.push(v2[i]);
    }

    while (!pqMin.empty())
    {
        cout << pqMin.top() << " ";
        pqMin.pop();
    }

    return 0;
}