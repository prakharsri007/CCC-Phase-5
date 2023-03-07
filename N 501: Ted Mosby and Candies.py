def bs(a,k):
    l=0;h=len(a)-1
    while l<=h:
        m=(l+h)//2
        if a[m]==k: return 1
        elif a[m]<k:l=m+1
        else: h=m-1
    return 0
n=int(input())
a=list(map(int,input().split()))
m=int(input())
b=list(map(int,input().split()))
for i in b:
    if bs(a,i):print ('Happy Halloween!')
    else: print('Tricky!')
