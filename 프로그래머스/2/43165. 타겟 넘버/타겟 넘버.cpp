#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int answers=0;
void bfs(vector<int> &numbers, int target, int i,int isadd,int sum){
    if(i==numbers.size()-1){
         if(isadd){
        sum+=numbers[i];
        if(sum==target)
            answers++;
        
    }else{
        sum-=numbers[i];
        if(sum==target)
            answers++;
    }
    }
    else if(isadd){
        sum+=numbers[i];
        bfs(numbers,target,i+1,1,sum);
        bfs(numbers,target,i+1,0,sum);
    }else{
        sum-=numbers[i];
        bfs(numbers,target,i+1,1,sum);
        bfs(numbers,target,i+1,0,sum);
    }
}
int solution(vector<int> numbers, int target) {
    int answer = 0;
    bfs(numbers,target,0,1,0);
    bfs(numbers,target,0,0,0);
    answer=answers;
    return answer;
}