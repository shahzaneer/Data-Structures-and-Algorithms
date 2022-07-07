#include <iostream>
#include <bits/stdc++.h> // for importing complete STL Library
using namespace std;
// BFS Traversal
// BFS is Breadth first search traversal
// In BFS we maintain two things one is the visited array and other is the queue
// The queue will store the vertices which are not visited yet
// The visited array will store the vertices which are visited
// When the Vertex is visited and all other vertices related to it are also queued then we will dequeue the vertex
//! BFS Traversal is Never unique!!

int main()
{
    queue<int> q; // the size of STL queue is adjusted dynamically
    int node;
    int i = 1;                              // starting from 0
    int visited[7] = {0, 0, 0, 0, 0, 0, 0}; // visited array
    int adjacencyMatrix[7][7] =
        {{0, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0, 0},
        {0, 1, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}}; // See a graph and place 1 where there is an edge

    cout << i << " ";
    visited[i] = 1; // as we have visited our first node now!
    q.push(i); // enqueued the first node for exploration
    while(!q.empty())
    {
        node = q.front(); // dequeue the node
        q.pop();
        for (int j = 0; j < 7; j++){
            if(adjacencyMatrix[node][j] == 1 && visited[j] == 0)
            {
                cout << j << " ";
                visited[j] = 1;
                q.push(j);
            }
        }
    }
    return 0;
}