class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();

        vector<int> col(n);

           for(int i = 0; i < n; i++){

                if(col[i]) continue;


            col[i] = 1;

            queue<int> q;

            for(q.push(i);!q.empty(); q.pop()){

                int curr = q.front();

                for(int nbr : graph[curr]){

                    if(!col[nbr]) {

                        col[nbr] = -col[curr];

                        q.push(nbr);

                    }

                    else if (col[nbr] == col[curr])

                            return false;
                }
            }
           }

           return true;
    }
};

