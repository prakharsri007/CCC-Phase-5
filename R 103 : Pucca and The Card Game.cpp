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
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[n];
    }
    int pucca,garu=0;
    int x=0;
    int y=n-1;
    for(int j=0;j<n;j++){
        if(A[x]>A[y]){
            x=x+1;
            pucca=pucca+A[x];
        }
        else{
            y=y-1;
            pucca=pucca+A[y];
        }
        if(A[x]>A[y]){
            x=x+1;
            garu=garu+A[x];
        }
        else{
            y=y-1;
            garu=garu+A[y];
        }
    }
    if(pucca>garu) 
        cout<<"Pucca";
    else if(pucca=garu) 
        cout<<"Pucca";
    else 
        cout<<"Garu";
    return 0;
}
