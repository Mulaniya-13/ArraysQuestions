#include<iostream>
using namespace std;

bool Distinct(int *nums,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[j]==nums[i]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int nums[]={1,2,3,4};
    int n=sizeof(nums)/sizeof(int);
    if(Distinct(nums,n)){
       cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}