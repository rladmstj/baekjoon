import sys
from collections import deque
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input())
graph = [[] for _ in range(n+1)]

# 그래프 입력
for _ in range(n-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

# 부모 저장용
parent = [0] * (n+1)

# BFS 탐색
def bfs(start):
    q = deque([start])
    while q:
        node = q.popleft()
        for nxt in graph[node]:
            if parent[nxt] == 0:  # 아직 부모가 없으면
                parent[nxt] = node
                q.append(nxt)

bfs(1)

# 2번 노드부터 출력
for i in range(2, n+1):
    print(parent[i])
