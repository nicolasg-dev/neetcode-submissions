class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {;
        int mult = 1;

        vector<int> out;
        out.push_back(mult);

        for (int i = 1; i < nums.size(); i++){
            mult *= nums[i-1];
            out.push_back(mult);
        }
        mult = 1;

        for (int i = nums.size() - 2; i >= 0; i--){
            mult *= nums[i+1];
            out[i] *= mult;
        }
        

        return out;
    }
};