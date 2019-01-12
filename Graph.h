
//Description	: Design a graph and do some operations over it

#include <vector>
#include <iostream>
#include "__node__.h"

using namespace std;

class Graph {
	//Attributes
	vector<__node__> node;
	vector< vector<int> > edges;
	
	public:
		//Constructor
		
		/*
		 Description	: Constructor that uses every attribute defined in Graph class
		*/
		Graph( vector<__node__> n, vector< vector<int> > e );
		
		/*
		 Description	: Constructor without any attributes
		*/
		Graph();
		
		//Functions
		
		/*
		 Description	: save the information of our graph to a .txt file
		*/
		void saveToFile( string filename );
		
		/*
		 Description	: load information and insert them to our graph object from a .txt file
		*/		
		void loadFromFile( string filename );
		
		/*
		 Description	: Deletes a node
		*/		
		void deleteNode( int index );
		
		/*
		 Description	: Deletes an edge by setting edge[][] value to 0
		*/
		void deleteEdge( int node1, int node2 );
		
		/*
		 Description	: Add an edge between to node and sets the distance between them to 1
		*/		
		void addEdge(int node1 , int node2);
		
		/*
		 Description	: Adds a node
		*/
		void addNode(string label);
		
		/*
		 Description	: Find the degree of the node with given label
		*/		
		int degree( string nodeName );
		
		//Test Functions
		void displayNode() {
			for(int i = 0; i<node.size();i++) {
				cout<< node[i].label <<" "<< node[i].id <<endl;
		    }	
		}
		
		void displayEdges() {
			
			for(int i = 0; i<node.size();i++) {
				for(int j = 0; j<node.size();j++) {
					if(edges[i][j] != 0) {
						cout << "Node 1: " << i << " Node 2: " << j <<" Distance: " << edges[i][j] << endl;
					} 
				}
			}
		}
};


