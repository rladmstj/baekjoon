#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
    const int INF = 1e9;
    vector<int> dp(m, INF); // dp[b] = B가 흔적 b개일 때 A의 최소 흔적
    dp[0] = 0; // 시작: 둘 다 흔적 0

    for (auto &item : info) {
        int Atrace = item[0];
        int Btrace = item[1];
        vector<int> next(m, INF);

        for (int b = 0; b < m; b++) {
            if (dp[b] == INF) continue; // 불가능한 상태 건너뜀

            // ① A가 훔침
            int newA = dp[b] + Atrace;
            if (newA < n) // A가 잡히지 않으면
                next[b] = min(next[b], newA);

            // ② B가 훔침
            int newB = b + Btrace;
            if (newB < m) // B가 잡히지 않으면
                next[newB] = min(next[newB], dp[b]);
        }
        dp = next; // 갱신
    }

    // 결과 찾기
    int answer = INF;
    for (int b = 0; b < m; b++)
        if (dp[b] < n) answer = min(answer, dp[b]);

    return (answer == INF) ? -1 : answer;
}