from collections import deque

# 입력
n, m = map(int, input().split())
maze = [list(map(int, input().strip())) for _ in range(n)]

# 이동 방향 (상, 하, 좌, 우)
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(x, y):
    q = deque()
    q.append((x, y))

    while q:
        x, y = q.popleft()

        # 4방향 탐색
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]

            # 범위 벗어나면 무시
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue

            # 벽(0)이면 무시
            if maze[nx][ny] == 0:
                continue

            # 처음 방문한 곳이면 거리 갱신
            if maze[nx][ny] == 1:
                maze[nx][ny] = maze[x][y] + 1
                q.append((nx, ny))

    return maze[n-1][m-1]

print(bfs(0, 0))
