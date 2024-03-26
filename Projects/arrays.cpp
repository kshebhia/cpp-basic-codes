#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n; //number of integers
    int a[n];
    for(int i=0; i<=n; i++){
        cin>>a[i];
    }
    int rev_arr[n];
    for(int j=0; j<n; j++){
        rev_arr[j]=a[n-j-1];
    }
    
    for(int j=0; j<n; j++){
        cout<<rev_arr[j]<<" ";
    }
    
    return 0;
}
