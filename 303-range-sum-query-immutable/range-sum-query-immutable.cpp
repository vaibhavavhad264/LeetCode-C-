class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        int curr = 0;
        for(int num : nums){
            curr += num;
            prefixSum.push_back(curr);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return prefixSum[right];
        else return prefixSum[right] - prefixSum[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */