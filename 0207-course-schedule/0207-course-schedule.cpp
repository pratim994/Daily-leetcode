class Solution {
public:

bool topo_sort(unordered_map<int , vector<int>> &adj, int n , vector<int> &degree){

        queue<int> que;

        int count = 0;

        for(int i = 0 ; i < n; i++){

            if(degree[i] == 0){
                count++;
                que.push(i);
            }
        }

        while(!que.empty()){

            int u = que.front();

            que.pop();

            for(int &v : adj[u]){

                degree[v]--;

                if(degree[v] == 0){
                    count++;
           
                     que.push(v);
                }
            }

        }

        if(count == n)
            return true;
         return false;


}
    bool canFinish(int numCourses, vector<vector<int>>& pre) {

        unordered_map<int, vector<int>> adj;

        vector<int> degree(numCourses, 0);

        for(auto &vec : pre){

            int a = vec[0];

            int b = vec[1];

                        adj[b].push_back(a);


            degree[a]++;

        }


        return topo_sort(adj, numCourses, degree);
         
    }
};