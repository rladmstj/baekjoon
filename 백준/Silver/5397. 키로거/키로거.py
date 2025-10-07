import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    keys = input().strip()
    left, right = [], []

    for k in keys:
        if k == '<':
            if left:
                right.append(left.pop())
        elif k == '>':
            if right:
                left.append(right.pop())
        elif k == '-':
            if left:
                left.pop()
        else:
            left.append(k)

    # 결과 합치기
    print(''.join(left + right[::-1]))
