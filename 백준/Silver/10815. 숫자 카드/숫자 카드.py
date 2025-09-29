n = int(input())
lis = set(map(int, input().split()))   # 리스트 대신 집합으로

soln = int(input())
sola = list(map(int, input().split()))

for i in sola:
    if i in lis:
        print(1, end=' ')
    else:
        print(0, end=' ')
