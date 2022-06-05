#include <iostream>
using namespace std;

// Adjacency Matrix Representation
// if the graph is dense graph then it is used mostly!


struct Graph
{
    // In a graph we have three informations
    int V;     // no of nodes/vertices
    int E;     // no of edges
    int **adj; // this is a pointer to a 2D array
    // it will store the info that from a vertex to other vertex there is present a direct path or not.
};

Graph *adjMatrixOFGraph()
{
    int u, v, i;
    Graph *G = new Graph(); // Dynamically creating a graph
    if (!G)
    {
        // if memory was not given
        cout << "Memory was not given in the heap" << endl;
        return NULL;
    }
    // User input for Nodes and Edges
    cout << "Enter Nodes of Graph " << endl;
    cin >> G->V;
    cout << "Enter Edges of Graph " << endl;
    cin >> G->E;

    // Dynamically making a 2D Matrix for storing the path info
    // The order of 2D matrix depends upon the vertices

    G->adj = (int **)malloc(sizeof(int) * (G->V * G->V)); // Dynamically Creating 2D array
    // G->adj = new int [G->V][G->V];

    for (int u = 0; u < G->V; u++)
    {
        for (int v = 0; v < G->V; v++)
        {
            // initially Zero will be allotted to the whole 2D Matrix
            G->adj[u][v] = 0;
        }
    }

    int firstNode, secondNode;

    for (int u = 0; u < G->V; u++)
    {
        cout << "Enter the Nodes in an ordered Pair which are directly connected " << endl;
        cout << "Enter first Node" << endl;
        cin >> firstNode;
        cout << "Enter Second Node" << endl;
        cin >> secondNode;

        // now as we got the ordered pair which are connected so we will mark them one
        G->adj[firstNode][secondNode] = 1;
        // As the graph is not directed so
        G->adj[secondNode][firstNode] = 1;
    }

    return G;
}

int main()
{

    return 0;
}