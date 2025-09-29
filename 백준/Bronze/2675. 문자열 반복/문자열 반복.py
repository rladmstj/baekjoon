n=int(input())
for i in range(n):
    len1,stri=input().split()
    len1=int(len1)
    s=''
    for j in range(len(stri)):
        s+=stri[j]*len1
    print(s)