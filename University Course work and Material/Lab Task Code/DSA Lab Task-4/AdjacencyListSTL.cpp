#include <iostream>
#include <bits/stdc++.h> // for importing complete STL Library 
// here we will use the STL library to implement the Adjacency List
// we will use vector to store the vertices and vector of vectors to store the edges
using namespace std;


int main(){
    cout << "Enter the number of vertices" << endl;
    int vertices;
    cin >> vertices;

    cout << "Enter the number of edges" << endl;
    int edges;
    cin >> edges;

    // now declaring a 2D - vector for the vertices
    // vector<int> vertices_vector; //one D vector

    vector <int> vertices_vector[vertices + 1]; //one 2D vector //we have increased one here because our vertices are from 1 to n
    //now setting the edges in the vector
    for(int i = 1; i <= edges; i++){
        int first_vertex;
        cout << "Enter the first Vertex " << endl;
        cin>>first_vertex;

        int second_vertex;
        cout << "Enter the second Vertex " << endl;
        cin >> second_vertex;

        vertices_vector[first_vertex].push_back(second_vertex);
        // if the graph is indirected then we need to add the second vertex to the first vertex
        vertices_vector[second_vertex].push_back(first_vertex);
    }

    // it will make a shape like 1->2->3
    //                           2->3->73
    //                           3->7->8
    //                               etc  

    // now we will print the graph

    for (int i = 1; i <= vertices;i++)
    {
        cout << i << " -> ";
        for (auto e: vertices_vector[i]){
            cout << e << " ";
        }

        cout << endl;
    }

    return 0;
}