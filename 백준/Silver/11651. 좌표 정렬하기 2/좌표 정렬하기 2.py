n = int(input())
lis = []
for i in range(n):
    (a, b) = map(int, input().split())
    lis.append((a, b))
sor = sorted(lis,key=lambda x: (x[1], x[0]))
for i in sor:
    print(i[0], i[1])
