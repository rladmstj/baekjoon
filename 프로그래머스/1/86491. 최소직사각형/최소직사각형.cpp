#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int tmp;
    int mr=0,ml=0;
    //한쪽 열로 최대 다 몰기
    for (auto &x:sizes){
        if(x[0]<x[1]){
            tmp=x[0];
            x[0]=x[1];
            x[1]=tmp;
        }
        if(x[0]>mr)
            mr=x[0];
        if(x[1]>ml)
            ml=x[1];
    }
    answer=mr*ml;
    return answer;
}