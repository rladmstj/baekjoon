#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visited(n,false);
    
    for(int i=0;i<n;i++){
        if(!visited[i]){
            answer++;
            vector<int> stack;
            visited[i]=true;
            stack.push_back(i);
            while(!stack.empty()){
            int node=stack.back();
            stack.pop_back();
            for(int j=0;j<n;j++){
                if(computers[node][j]==1 && !visited[j]){
                    visited[j]=true;
                    stack.push_back(j);
                }
            }
        }}
    }
    return answer;
}