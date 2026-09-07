class Solution{
	public:
		vector<vector<string>> groupAnagrams (vector<string>& strs){
			unordered_map<string, vector<string>> res;
			for (auto& str : strs){
				string copy = str;
				sort(copy.begin(), copy.end());
				res[copy].push_back(str);
			}

			vector<vector<string>> saida;
			for (auto& var : res){
				saida.push_back(var.second);
			}
			return saida;
		}
};
