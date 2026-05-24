#include<iostream>
using namespace std;

int answer(int *nums,int n,int target){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]){
            if(nums[mid]>=target && target>=nums[st]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
        if(nums[mid]<=target && target>=nums[end]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
}
    return -1;
}

int main(){
    int nums[]={4,5,6,7,0,1,2};
    int target=3;
    int n=sizeof(nums)/sizeof(int);
    
    cout<<answer(nums,n,target);
    return 0;
}