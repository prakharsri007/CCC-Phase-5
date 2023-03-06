#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x;
    cin>>x;
    vector<int> v(x);
    for (int i=0;i<x;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    cout<< (v[x-1]*v[x-2]*v[x-3]);
    return 0;
}
