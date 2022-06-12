#include <iostream>
#include <bits/stdc++.h>
const int infinity = INT_MAX;
const int N = 100;
using namespace std;

// Prims is greedy algorithm used to find the minimum spanning tree for a graph
// normal intuition says that if there are n vertices then the total number of minimum spanning trees are
// ! n^n-2;
// then we  calculate the cost of each spanning tree and the tree with minimum cost is the minimum spanning tree
// but here in greedy algorithm we don't need to calculate the cost of each spanning tree
// we will traverse only once and then we will find the minimum spanning tree and its cost!

vector <pair <int , int> > graph[N];

int prims(){

    cout << "Enter the number of vertices" << endl;
    int vertices;
    cin >> vertices;

    cout << "Enter the number of edges" << endl;
    int edges;
    cin >> edges;

    // for edges

    for (int i = 0; i < edges; i++)
    {
        int first_vertex;
        cout << "Enter the first Vertex " << endl;
        cin >> first_vertex;

        int second_vertex;
        cout << "Enter the second Vertex " << endl;
        cin >> second_vertex;

        int weight;
        cout << "Enter the weight of this edge " << endl;
        cin >> weight;

        // making of the graph
        // undirected graph
        graph[first_vertex].push_back(make_pair(second_vertex, weight));
        graph[second_vertex].push_back(make_pair(first_vertex, weight));
    }

    // Prims algorithm for minimum spannig tree
    vector <int> key(vertices + 1);
    vector <bool> mstSet(vertices + 1);
    vector<int> parent(vertices + 1);
    
    // initializing the key and mstSet and parent
    for (int i = 1; i <= vertices; i++)
    {
        key[i] = infinity;
        mstSet[i] = false;
        parent[i] = -1;
    }

    int sourceNode = 1; // source node is 1

    key[sourceNode] = 0;
    parent[sourceNode] = -1;

    for (int i = 1; i < vertices; i++){
        int mini = INT_MAX;
        int u;

        // finding the minimum node vertex
        for (int v = 1; v <= vertices; i++){
            if(mstSet[v] == false && key[v] < mini){
                u = v;
                mini = key[v];
            }
        }


        // mark min mode as true
        mstSet[u] = true;

        // check adjacent nodes
        for(auto it : graph[u]){
            int v = it.first;
            int w = it.second;
            if(mstSet[v] == false && weight < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    


    
}


int main(){

return 0;
}