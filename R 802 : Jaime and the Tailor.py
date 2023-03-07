import math
n,m=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
for i in range(n):
    a[i]=math.ceil(a[i]/m)
for i in range(1,n):
    if a[i]<=a[i-1]:a[i]=a[i-1]+1
print(sum(a))
