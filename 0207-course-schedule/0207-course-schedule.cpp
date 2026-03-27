#pragma GCC optimize (-O3, -flto, -ffast-math, -march=native, -mtune=native)

class Solution {
public:

  constexpr  bool topologicalSort( unordered_map<int , vector<int>>& adj, int n, vector<int>& visited)
        {
                queue<int> q;

                int count = 0;

                for(int i = 0; i <n ; i++){
                    if(visited[i] == 0)
                    {
                        count++;
                        q.push(i);
                    }

                }


    while(!q.empty()){

        int u = q.front();

            q.pop();

            for(int &v : adj[u])
            {
                visited[v]--;

                if(visited[v] == 0){

                        count++;

                        q.push(v);
                }
            }
    }
        return count == n ?  true : false;
        }

  constexpr  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        if(prerequisites.size() == 0) return true;

            vector<int> visited(numCourses, 0);

            unordered_map<int , vector<int>> adj;

            for(auto &it  : prerequisites){

                int u = it[0];

                int v = it[1];

                adj[v].push_back(u);

                visited[u]++;
            }


            return topologicalSort(adj, numCourses, visited);


    }
};

// kahn's algo for finding cycle / topological sort

auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();