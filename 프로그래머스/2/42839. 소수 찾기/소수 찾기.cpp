#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int is_sosu(int n, unordered_map<int,bool> &sosus){
    if(n==0){
        sosus[n]=false;
        return false;
    }else if(n==1){
        sosus[n]=false;
        return false;
    }else if(n==2){
        sosus[n]=true;
        return true;
    }else if(n==3){
        sosus[n]=true;
        return true;
    }else if(n==4){
        sosus[n]=false;
        return false;
    }
    if(sosus.count(n)){
        return sosus[n];
    }
    for (int i=2;i<n/2;i++){
        if(n%i==0){
            sosus[n]=false;
            return false;
        }
    }
    sosus[n]=true;
    return true;
}
int solution(string numbers) {
    int answer = 0;
    unordered_map<int,bool> sosus;
    vector<int> answerint;
    vector<int> result;

    // 문자열 정렬 (permutation 함수는 정렬된 상태에서 시작해야 함)
    sort(numbers.begin(), numbers.end());
    for (int len = 1; len <= numbers.size(); len++) {
        string t = numbers;
        do {
            int ss=stoi(t.substr(0, len));
            if(!sosus.count(ss)){
                if(is_sosu(ss,sosus)){
                    answer++;
                }
            }
        } while (next_permutation(t.begin(), t.end())); // 순서를 계속 바꿈
    }
  
    
    
    return answer;
}