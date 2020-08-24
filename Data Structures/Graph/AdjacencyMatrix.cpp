#include <bits/stdc++.h>
using namespace std;


void bfs(int graph[][5], int size, int sv, bool visited[]){
	list<int> qu;
	visited[sv] = true;
	qu.push_back(sv);
	
	while(!qu.empty()){
		sv = qu.front();
		cout<<sv<<endl;
		qu.pop_front();

		for(int i = 0;i<size;++i){
			if(!visited[i]){
				visited[i] = true;
				qu.push_back(i);
			}
		}
	}
}

void dfs(int graph[][5], int size, int sv, bool visited[]){
	cout<<sv<<endl;
	visited[sv] = true;
	for(int i=0;i<size;++i){
		if(i==sv){
			continue;
		}

		if(graph[sv][i] == 1 && !visited[i]){
			dfs(graph, size, i, visited);
		}
	}
}

void addEdge(int graph[][5], int start, int end)
{
    graph[start][end] = 1;
    //graph[end][start] = 1;
}

void print(int graph[][5], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int graph[5][5];
    bool visited[5];

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            graph[i][j] = 0;
        }
	visited[i] = false;
    }

    cout << "Graph with no edges" << endl;
    print(graph, 5);
    cout << "Graph after adding edges" << endl;
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);
    print(graph, 5);

    cout<< "Graph Using DFS" <<endl;
    bfs(graph, 5, 2, visited);
    return 0;
}
