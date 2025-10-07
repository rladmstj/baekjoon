from collections import deque

n, m, v = map(int, input().split())
graph = [[] for _ in range(n+1)]

# 그래프 입력
for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

# 각 정점의 인접 리스트를 오름차순 정렬
for g in graph:
    g.sort()

# DFS (재귀)
def dfs(node, visited):
    visited[node] = True
    print(node, end=' ')
    for nxt in graph[node]:
        if not visited[nxt]:
            dfs(nxt, visited)

# BFS (큐)
def bfs(start):
    visited = [False]*(n+1)
    q = deque([start])
    visited[start] = True
    while q:
        cur = q.popleft()
        print(cur, end=' ')
        for nxt in graph[cur]:
            if not visited[nxt]:
                visited[nxt] = True
                q.append(nxt)

# 실행
visited = [False]*(n+1)
dfs(v, visited)
print()
bfs(v)
