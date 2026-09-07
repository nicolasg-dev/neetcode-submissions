class Solution{
	public:
		vector<vector<string>> groupAnagrams (vector<string>& strs){
			unordered_map<string, vector<string>> res;
			for (auto& str : strs){
				string copy = str;
				sort(copy.begin(), copy.end());
				res[copy].push_back(str); // Acessa na tabela hash a posição com a chave 'copy' e coloca a string str na lista dessa chave.
			}

			vector<vector<string>> saida;
			for (auto& var : res){
				saida.push_back(var.second);
			}
			return saida;
		}
};
