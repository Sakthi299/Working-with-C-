
#include<iostream> 
#include<list> 
using namespace std; 
class Graph 
{ 
	int V; 
	list<int> *adj; 
	void DFSUtil(int v, bool visited[]); 
public: 
	Graph(int V); 
	void addEdge(int v, int w);
	void DFS(int v); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); // Add w to v’s list. 
} 

void Graph::DFSUtil(int v, bool visited[]) 
{ 	visited[v] = true; 
	cout << v << " "; 
	list<int>::iterator i; 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
		if (!visited[*i]) 
			DFSUtil(*i, visited); 
} 
void Graph::DFS(int v) 
{ 	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 
	DFSUtil(v, visited); 
} 
int main()  
{int q,ch;int x,y;char a; 
cout<<"Enter the no.of vertices: ";
cin>>q;
    Graph g(q);
do{
  cout<<"Enter your choice(1.Insert/2.Display): ";
    cin>>ch;
	switch(ch)
	{
	case 1:	
cout<<"Enter the vertices and direct edges\n ";
cout<<"-----------------------------------\n";
cout<<"Enter v: ";
cin>>x;
cout<<"Enter w: ";
cin>>y;  
g.addEdge(x, y);
	break;
	case 2:
	cout << "\nDepth First Traversal:  ";
	g.DFS(0);
	break;  		
	} 
}while(ch!=-1);
	return 0; 
} 
