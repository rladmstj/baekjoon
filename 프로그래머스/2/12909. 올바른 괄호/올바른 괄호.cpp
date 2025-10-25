// #include<string>
// #include <iostream>

// using namespace std;

// bool solution(string s)
// {
//     bool answer = true;

//     // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//     cout << "Hello Cpp" << endl;

//     return answer;
// }

#include <bits/stdc++.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
using namespace std;
bool solution(string s) {
    bool answer = true;
    stack<char> st;
    if(s[0]=='(')
        st.push(s[0]);
    else
        return false;
    for(int i=1;i<s.size();i++){
        if (s[i]==')'){
            if(st.empty())
                return false;
            if(st.top()=='(')
                st.pop();
            else
                st.push(s[i]);
        }else
            st.push(s[i]);
    }
    if(st.empty())
        answer=true;
    else 
        answer=false;
    return answer;
}