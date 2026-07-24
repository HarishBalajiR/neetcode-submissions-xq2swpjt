class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> umap;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            umap[temp].push_back(s);
        }
        for(auto val : umap){
            vector<string> res;
            for(string s: val.second){
                res.push_back(s);
            }
            ans.push_back(res);
        }
        return ans;
    }
};
