#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits=0;
        int count=0;
        int j=0;

        for(int i=0;i<nums.size();i++){
            j=nums[i];
            while(j>0){
                j=j/10;
                digits++;
            }

            if(digits%2==0){
                count++;
            }
            digits=0;
        }
        return count;
    }
};

int main(){
    vector<int> nums={12,345,2,6,7896};
    Solution s;
    cout<<s.findNumbers(nums);
return 0;
}