
#include <iostream>
#include <vector>
#include "Graph.h"

using namespace std;


int main(int argc, char** argv) {

	
	vector<__node__> nv;
	
	vector< vector<int> > ev(3,vector<int>(3));
	
	Graph g(nv,ev);
	
	g.addNode("qwerty");
	g.addNode("asdfsghgafD");
	g.addNode("ghjkjytr");	
	
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,0);
//	g.deleteEdge(2,0);
	
//	g.displayNode();
//	g.displayEdges();

	cout << g.degree("asdfsghgafD")<< endl;
	
	//g.saveToFile("new_file.txt"); 	
	//g.loadFromFile("new_file.txt"); 
	
	return 0;
}
