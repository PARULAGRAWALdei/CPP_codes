#include <iostream>
#include <vector>
#include <list> 
#include <iterator> 
class Graph
{
    int V;
    std::vector<std::vector<bool> > matrix;
    public:
       Graph(int n);
       void addEdge(int, int);
       void BFS(int s);
       
};
Graph::Graph(int n)
{
    V=n;
    matrix.resize(n, std::vector<bool>(n, false));
}
void Graph::addEdge(int a, int b)
{
    this->matrix[a][b] = true;
    this->matrix[b][a] = true;
}
void Graph::BFS(int s)
{
    std::vector<bool> visited(V,false);
    std::list <int> priorityQueue;
    priorityQueue.push_back(s);
    visited[s] = true;
    int first;
    
        while(!priorityQueue.empty())
        {
            first = priorityQueue.front();
                std::cout << first << std::endl;
                priorityQueue.pop_front();
                for(auto itr = matrix[first].begin();itr!=matrix[first].end(); ++itr)
                {
                    if(!visited[itr-(matrix[first].begin())])
                    {
                       // std::cout << "element added " << itr-(matrix[first].begin()) << std::endl;
                        priorityQueue.push_back(itr-(matrix[first].begin()));
                        visited[itr-(matrix[first].begin())] = true;
                    }
                }
            
        }
    
}
int main() 
{ 
    Graph g(5); 
    g.addEdge(0, 1); 
    g.addEdge(1, 4);
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(0, 3); 
    
    g.BFS(2); 
  
    return 0; 
} 
