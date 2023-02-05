#include <iostream>
#include<vector>

using namespace std;

int ceiling(vector<int> nums,int target){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    
    bool isAsc=nums[s]<nums[e];

    while(s<=e){
        mid=s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(isAsc){
            if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(nums[mid]>target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return mid;
}

int main(){
    vector<int> nums={12,34,211,634,7896};
    int v;
    int target=8000;
    v=ceiling(nums,target);
    
    if(nums[v]==target){
        cout<<nums[v];
    }
    else if(nums[v]>target){
        cout<<nums[v];
    }
    else{
        cout<<nums[v+1];
    }
return 0;
}