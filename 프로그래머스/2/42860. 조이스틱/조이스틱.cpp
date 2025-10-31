#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string name) {
    int answer = 0;
    int len = name.size();

    // 1️⃣ 상하 이동 계산
    for (int i = 0; i < len; i++) {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
    }

    // 2️⃣ 좌우 이동 계산
    int move = len - 1; // 기본은 끝까지 이동하는 경우
    for (int i = 0; i < len; i++) {
        int next = i + 1;
        // 연속된 A 찾기
        while (next < len && name[next] == 'A')
            next++;
        // 왼쪽으로 돌아가거나 오른쪽으로 가는 최소 이동 계산
        move = min(move, i + len - next + min(i, len - next));
    }
    answer += move;

    return answer;
}
