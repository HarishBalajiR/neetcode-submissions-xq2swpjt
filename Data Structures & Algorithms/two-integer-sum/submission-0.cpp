class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int index = 0 ; index < nums.size() ; index++){
            int val = target - nums[index];
            if(umap.count(val)){
                return vector<int>{umap[val],index};
            }
            umap[nums[index]] = index;
        }
    }
};
