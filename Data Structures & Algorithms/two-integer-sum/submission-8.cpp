#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() >= 2){
            vector<int> saida;// não precisa, basta sair com return {i, j}
            for (int i = 0; i < nums.size(); i++){
                for (int j = 0; j < nums.size(); j++){
                    if (j != i){
                        if ((nums[j] + nums[i]) == target){
                            saida.push_back(i);  
                            saida.push_back(j);
                            return saida; // return {i, j}
                        }
                    }
                }            
            }
        }
    }
};
