#include<bits/stdc++.h>
using namespace std;
bool SubArray(int *arr,int n){
    unordered_map<int,bool>mpp;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum==0 || arr[i]==0 || mpp[sum]){
            return true;
        }
        else{
            mpp[sum] = 1;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SubArray(arr,n);
    return 0;
}