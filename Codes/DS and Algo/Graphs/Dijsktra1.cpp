#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int infinity = INT_MAX;

int main(){
    cout << "Enter the number of vertices" << endl;
    int vertices;
    cin >> vertices;

    cout << "Enter the number of edges" << endl;
    int edges;
    cin >> edges;

    vector < pair <int , int> > vertices_vector[vertices + 1];
    // we have made a vector of type pair and the type of pair is int int the first int is the weight and the second int is the vertex


    // weighted Graph Implementation

    for (int i = 1; i <= edges; i++)
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

        pair <int , int> edge = make_pair(weight, second_vertex);
        pair<int, int> edge2 = make_pair(weight, first_vertex);

        vertices_vector[first_vertex].push_back(edge);
        vertices_vector[second_vertex].push_back(edge);
        
    }

    // Dijsktra's Algorithm Implementation
    // now as we have a weighted graph for now
    vector<int> dist(vertices + 1, infinity); // initially distances for all the vertices are infinity

    set<pair<int, int>> st;

    int source = 1;
    dist[source] = 0; // source node ka minimunm distance apne app se 0 hi hai!

    st.insert(make_pair(0, source)); // source node ka minimum distance apne app se 0 hi hai!

    while(!st.empty()){
        // fetch top record
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

        st.erase(st.begin()); // jo top per tha remove krdia!
        
        // traverse on neighbours
        for (auto neighbour: vertices_vector[topNode]){

            if(nodeDistance + neighbour.second < dist[neighbour.first]){

                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));

                if(record != st.end()){
                    st.erase(record);
                }

                //update distance
                dist[neighbour.first] = nodeDistance + neighbour.second;
                // record push in set
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
    }
}

    // print the distances
    for (auto distance : dist){
        cout << distance << " ";
    }
    cout << endl;

    return 0;
}