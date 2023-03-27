#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        ans=ans+(n%2);
        n=n/2;
    }
    cout<<ans;
    return 0;
}
