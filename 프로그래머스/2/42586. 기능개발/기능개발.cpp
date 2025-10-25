#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n=0;
    int j=0;
    int sum=0;
    while(true){
        if(n>progresses.size()-1)
            break;
        for(int i=0;i<progresses.size();i++){
            progresses[i]+=speeds[i];
        }
        while (progresses[n+j]>=100 && (n+j)<=progresses.size()-1){
            sum+=1;
            j+=1;
        }
        if(sum!=0){
        n=n+j;
        j=0;
        answer.push_back(sum);
        sum=0;}
    }
    return answer;
}