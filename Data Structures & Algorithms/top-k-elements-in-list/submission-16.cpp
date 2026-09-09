class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> v(nums.size() + 1); // v é um vetor de arrays de int
        unordered_map<int, int> m;

        for (auto num : nums){
            m[num]++;
        }

        for (auto& par : m){
            v[par.second].push_back(par.first);
        }

        vector<int> saida;

        int counter;

        for (int i = nums.size(); i > 0; i --){
            if (v[i].size() > 0){
                for (int n : v[i]){
                    saida.push_back(n);
                }

                if (saida.size() == k){
                    return saida;
                }
            }
        }

        return saida;
    }
};
