#include <bits/stdc++.h>

using namespace std;

class Graph {
	private:
		int v;
		list <int> *l;

	public:
		Graph(int v){
			this->v = v;
			l = new list<int>[v];
		}

		void addEdge(int x, int y){
			l[x].push_back(y);
			l[y].push_back(x);
		}

		void printList(){
			for(int i=0;i<v;++i){
				cout<<"Vertex "<< i;
				for(auto nbr: l[i]){
					cout<<" --> "<< nbr;
				}
				cout<<endl;
			}
		}

		void bfs(int vtx){
			bool visited[v] = { false };
			queue <int> q;
			visited[vtx] = true;
			q.push(vtx);
			while(!q.empty()){
				int v = q.front();
				q.pop();
				cout<<v<<" ";
				for(auto n: l[v]){
					if(!visited[n]){
						visited[n] = true;
						q.push(n);
					}
				}
			}
			cout<<endl;
		}

		void dfs(int start, bool visited[]){
			visited[start] = true;
			cout<<start<<endl;
			for(auto nbr: l[start]){
				if(!visited[nbr]){
					dfs(nbr, visited);
				}
			}
		}

		void dfsIterative(int start, bool visited[]){
			stack<int> st;
			visited[start] = true;
			st.push(start);
			while(!st.empty()){
				int s = st.top();
				cout<<s<<endl;
				st.pop();
				for(auto nbr: l[s]){
					if(!visited[nbr]){
						st.push(nbr);
						visited[nbr] = true;
					}
				}
			}
		}
};	

int main(){
	Graph g(5);
	bool visited[5] = {false};
	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(1,3);
	g.addEdge(1,2);
	g.addEdge(2,4);
	//g.printList();
	g.dfs(0, visited);
	//g.dfsIterative(0, visited);
	return 0;
}
