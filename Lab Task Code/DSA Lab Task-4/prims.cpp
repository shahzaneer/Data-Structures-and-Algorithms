#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int vertices = 5;
const int infinity = INT_MAX;



int main(){
// making adjacency matrix representation of the graph
    int graph[vertices][vertices] = {
      // 0, 1, 2 ,3, 4
        {0, 4, 0, 5, 2}, //0
        {4, 0, 1, 3, 0}, //1
        {0, 1, 0, 8, 0}, //2
        {5, 3, 8, 0, 2}, //3
        {2, 0, 0, 2, 0}  //4
    };

    int totalCostOfMST = 0;

    // where there is a link we have mentioned the weight of that edge it also represents that there  a link is present

    // it will take the care of the visited array
    bool v_array[vertices];
    for(int i = 0; i < vertices; i++){
        v_array[i] = false;
        //initially the visited array is false
    }

    // now we have to select a node to start with
    int sourceNode = 0;
    v_array[sourceNode] = true; // marked it visited

    int n_edges = 0;
    while(n_edges < vertices -1){
        // as we know that in a minimum spanning tree the number of edges is vertices - 1

        int min_weight = infinity; // for getting the minimum weight
        int r = 0, c = 0; // they will display the edge in output

        // traverse the graph along the row to pick every vertex

        for (int i = 0; i < vertices;i++){
            // now check if the vertex is in the visited array or not. if yes then go forward
            if(v_array[i]){
                // now traversing in the columns
                for (int j = 0; j < vertices; j++)
                {
                    if(min_weight > graph[i][j] && graph[i][j] != 0 && !v_array[j]){
                        min_weight = graph[i][j]; // updating the minimum weight
                        r = i;
                        c = j;// this will change for the whole row if the condition is true
                    }


                }
            }
            
        }
        // displaying the edge with minimum value
        cout << "(" << r << "," << c << ") :" << graph[r][c]<< endl;
        totalCostOfMST += min_weight;
        v_array[c] = true; // mark the vertex as visited
        n_edges++;

        
    }

    cout << "Total Cost of MST is : " << totalCostOfMST << endl;

    return 0;
}