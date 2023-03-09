n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
for i in  b:
    c=0
    for j in a:
        if j<=i:c+=1
    print(c,end=' ')
