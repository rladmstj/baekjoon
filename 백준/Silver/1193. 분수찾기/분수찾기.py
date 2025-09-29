n = int(input())
s = 0
for i in range(1, n+1):

    if n <= s+i:
        if i % 2 == 1:
            print(str(i+1-(n-s))+"/"+str(1-1+(n-s)))
        else:
            print(str(1-1+(n-s))+"/"+str(i+1-(n-s)))
        break
    s += i
