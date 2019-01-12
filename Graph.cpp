// WARNING: this file is only function definition of the class declared in Graph.h


#include "Graph.h"
#include <fstream>

Graph :: Graph( vector<__node__> n , vector< vector<int> > e ) {
	node = n;
	edges = e;
	for(int i = 0; i<node.size();i++) {
		for(int j = 0;j<node.size();j++) {
			edges[i][j] = 0;
		}
	}
}

Graph :: Graph() {
	
}

void Graph ::saveToFile( string filename ) {
	Graph g;
	g.node = node;
	g.edges = edges;
	
	ofstream fileWrite;
	fileWrite.open(filename.c_str());
	fileWrite.write((char*)&g, sizeof(g));
	fileWrite.close();

	cout << "Success" <<endl;
}

void Graph ::loadFromFile( string filename ) {
	Graph h;
	
	ifstream myFile;
	myFile.open(filename.c_str());
	
	while(!myFile.eof()) {
		myFile.read((char*)&h, sizeof(h));
	}
	myFile.close();
	
	cout << "Success"<<endl;
}

void Graph ::deleteNode( int index ) {
	node.erase(node.begin() + index);
}

void Graph ::deleteEdge( int node1, int node2 ) {
	if(edges[node1][node2] != 0) {
		edges[node1][node2] =0;
	}
	else {
		cout << "There is no such edge." << endl;
	}
}

void Graph ::addEdge(int node1 , int node2) {
	if(edges[node1][node2] == 0 ) {
		edges[node1][node2] = 1 ;
	}
	else {
		cout << "There is already an edge between those nodes." << endl;
	}
}

void Graph ::addNode(string label) {
	__node__ n;
	n.label = label;
	n.id = node.size();
	node.push_back(n);
}

int Graph ::degree( string nodeName ) {
	int count = 0;
	
	for (int i = 0; i<node.size();i++) {
  		for (int j = 0; j<node.size();j++) {
			if(node[i].label == nodeName) {
			    if(edges[i][j] !=0) {
    				if(node[i].id == i ) {
    					count++;
					}
					else if(node[i].id== j) {
						count++;
					}
				}
			}	    
  	    }
  	    return count;
	}
}
