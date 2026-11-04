#include<iostream>
#include<vector>
using namespace std;

class JumpGame{
public:
    bool canJump(vector<int>& nums){
        int j = 0;

        for(int i = 0; i < nums.size(); i++){
            if(i > j) return false;
            if(i + nums[i] > j) j = i + nums[i];
            if(j >= nums.size() - 1) return true;
            
        }
        return true;
    }
};


int main(){
    JumpGame JG;
    vector<int> nums = {3,2,0,1,4};
    cout << boolalpha << JG.canJump(nums) << endl;

    return 0;
}