#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> s1={1,2,3,4,5};
    vector<int> s2={2,1,2,3,2,4,2,5};
    vector<int> s3={3,3,1,1,2,2,4,4,5,5};
    int ns1=0,ns2=0,ns3=0;
    for(int i=0;i<answers.size();i++){
        if(s1[i%5]==answers[i])
           ns1+=1;
        if(s2[i%8]==answers[i])
           ns2+=1;
        if(s3[i%10]==answers[i])
           ns3+=1;
        
    }
    if(ns1==ns2 && ns1==ns3){
        return {1,2,3};
    }else if(ns1==ns2 && ns1>ns3)
        return {1,2};
    else if(ns1==ns3 &&ns1>ns2)
        return {1,3};
    else if(ns2==ns3 && ns2>ns1)
        return {2,3};
    else if(ns1>ns2 && ns1>ns3)
        return {1};
    else if (ns2>ns3)
        return {2};
    else
        return {3};
    return answer;
}