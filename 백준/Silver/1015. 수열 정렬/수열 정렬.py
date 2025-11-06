n=int(input())
s=input().split()
lis=[(i,int(x)) for i,x in enumerate(s)  ]
lis.sort(key=lambda x:x[1])
num=0
ans={}
for ni,(i,x) in enumerate(lis):
    ans[i]=ni
    
    
for x in range(len(ans)):
    print(ans[x],end=" ")