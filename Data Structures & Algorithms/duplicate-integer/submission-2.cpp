#include <iostream>
#include <vector>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        int achou = 0;

        for (int i = 0; i < nums.size(); i ++){
            if (achou >= 2){
                return true;
            }
            achou = 0;
            for (int j = 0; j < nums.size(); j ++){
                if (nums[i] == nums[j]){
                    achou ++;
                }
            }
        }
        return false;
    }
};
