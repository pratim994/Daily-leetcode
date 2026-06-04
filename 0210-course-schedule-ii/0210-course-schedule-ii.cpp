class Solution {
public:

    vector<int> topological_sort(unordered_map<int, vector<int>> adj, int n , vector<int> indegree){

        queue<int> que;

        vector<int> result;

        int count = 0;

        for(int i = 0 ; i < n; i++){

                if(indegree[i] == 0)
                {
                    count++;

                    result.push_back(i);
                                    que.push(i);

                }
            
        }

        while(!que.empty()){
            int u = que.front();

            que.pop();

            for(int &v : adj[u]){

                indegree[v]--;

                if(indegree[v] == 0){
                    count++;

                    que.push(v);
                    result.push_back(v);
                }
            }
        }

        if(count == n)
            return result;

        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {

        unordered_map<int, vector<int>> adj;

        vector<int> indegree(numCourses, 0);

        for(auto &p : pre){

            int a = p[0];

            int b = p[1];

            adj[b].push_back(a);

            indegree[a]++;
        }

        return topological_sort(adj, numCourses, indegree);
        
    }
};