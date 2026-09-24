class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        int length = 0;

        for (int n : nums){
            //Verificar se o elemento n é o início de uma sequência
            if (!numSet.count(n - 1)){ // Se o elemento anterior ñ está no set, ou seja é o início de uma sequência
                length = 0;
                while (numSet.count(n + length)){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
