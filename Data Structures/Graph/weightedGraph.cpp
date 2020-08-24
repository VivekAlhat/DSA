#include <bits/stdc++.h>
using namespace std;

class Graph {
	private:
		unordered_map<int,list<pair<int,int>>> l;
	public:
		void addEdge(int st, int en, int wt, bool isBidir){
			l[st].push_back(make_pair(en,wt));
			if(isBidir){
				l[en].push_back(make_pair(st,wt));
			}
		}

		void dfs(int s, bool visited[]){
			visited[s] = true;
			cout<<s<<endl;
			for(auto nbr: l[s]){
				if(!visited[nbr.first]){
					dfs(nbr.first, visited);
				}
			}
		}

		void dfsIterative(int s, bool visited[]){
			stack<int> st;
			visited[s] = true;
			st.push(s);
			while(!st.empty()){
				int v = st.top();
				st.pop();
				cout<<v<<endl;
				for(auto nbr: l[v]){
					if(!visited[nbr.first]){
						visited[nbr.first] = true;
						st.push(nbr.first);
					}
				}
			}
		}

		void bfs(int s, bool visited[]){
			queue<int> q;
			visited[s] = true;
			q.push(s);
			while(!q.empty()){
				int sv = q.front();
				cout<<sv<<endl;
				q.pop();
				for(auto nbr: l[sv]){
					if(!visited[nbr.first]){
						q.push(nbr.first);
						visited[nbr.first] = true;
					}
				}
			}
		}
};

int main(){
	Graph g;
	bool visited[4] = {false};
	g.addEdge(0,1,10,false);
	g.addEdge(0,2,10,false);
	g.addEdge(1,2,20,false);
	g.addEdge(2,0,10,false);
	g.addEdge(2,3,30,false);
	g.addEdge(3,3,10,false);
	g.dfsIterative(2, visited);
	return 0;
}
