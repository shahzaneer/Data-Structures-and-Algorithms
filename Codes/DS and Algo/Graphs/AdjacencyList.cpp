#include <iostream>
using namespace std;
// Vertex as a number + the pointer to that node to which it is connected
// Basically for a directed graph it gives a ordered pair
struct ListNode
{
    int vertexNo;
    ListNode *next = NULL;
};

ListNode *head = NULL; // global pointer to each sublist

struct Graph
{
    int V;
    int E;
    ListNode *adj; // array of nodes of types 'ListNode'
};

Graph *adjListGraph()
{
    int v, u;

    ListNode *temp = NULL;
    Graph *g = new Graph(); //Dynamically Declaring Graph in Memory
    // now taking user input for number of vertices and edges
    cout << "Enter the number of vertices" << endl;
    cin >> g->V;
    cout << "Enter the number of edges" << endl;
    cin >> g->E;

    g->adj = new ListNode[g->V]; // Graph Array with size of V

    for(int i = 0; i<g->V; i++)
    {
        g->adj[i].vertexNo = i;
        g->adj[i].next = g->adj + i; // pointing to itself
    }

    for (int i = 0; i < g->E; i++){
        cout << "Enter the edge (Source Node and Destination Node)" << endl;
        cin >> u >> v;
        temp = new ListNode();
        temp->vertexNo = v; // vertex main Destination node rkhni hai
        temp->next = g->adj[u].next; // destination node is pointing to the source node
        // now finding the lastpointer of the list of Source
        ListNode *last = g->adj[u].next; // initially it is first (Source Node itself)
        do{
            last = last->next;
        } while (last->next != g->adj + u);

        last->next = temp; // source node is pointing to the destination node
    }

    
    return g;
}

int main()
{
    Graph *g = adjListGraph();
    cout << " Pakistan Noor hai " << endl;

    return 0;
}