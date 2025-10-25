#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for (auto x:scoville)
        minHeap.push(x);
    int f=minHeap.top();
    minHeap.pop();
    int n,s;
    if(f>=K)
        return 0;
    while(true){
        if(minHeap.empty())
            return -1;
        s=minHeap.top();
        minHeap.pop();
        n=f+s*2;
         
        answer++;
        minHeap.push(n);
        f=minHeap.top();
        minHeap.pop();
        if(f>=K)
            return answer;
    }
    return answer;
}