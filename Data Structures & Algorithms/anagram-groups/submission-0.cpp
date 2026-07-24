class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            bool flag = false;
            for(vector<string> &vec : ans){
                string target = vec[0];
                sort(target.begin(),target.end());
                //cout << temp << " " << target << endl;
                if(target == temp){
                    vec.push_back(s);
                    flag = true;
                    break;
                }
            }
            if(!flag) ans.push_back({s});
        }
        return ans;
    }
};
