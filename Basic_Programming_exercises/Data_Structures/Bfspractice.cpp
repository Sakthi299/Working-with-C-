#include<iostream> 
#include <list> 
using namespace std; 
class Graph 
{ 
    int V;
    list<int> *adj;    
public: 
    Graph(int V);  
    void addEdge(int v, int w);  
    void BFS(int s);   
};   
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
} 
  
void Graph::BFS(int s) 
{ 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
    list<int> queue; 
    visited[s] = true; 
    queue.push_back(s); 
    list<int>::iterator i; 
    while(!queue.empty()) 
    { 
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
} 
int main() 
{
int q,ch;int x,y;char a; 
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
cout<<"Breadth First Traversal: ";
g.BFS(0);
break;  		
	} 
}while(ch!=-1);
   return 0; 
} 
