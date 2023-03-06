n=int(input())
a=[]
while not a:a=list(map(int,input().split()))
a.sort(reverse=True)
res=0
for i in range(n):
    res=res+a[i]*(1<<i)
print(res)
