class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int num : nums) umap[num]++;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        for(pair<int,int> p : umap){
            int element = p.first, freq = p.second;
            minheap.push({freq,element});
            if(minheap.size() > k){
                minheap.pop();
            }
        }

        vector<int> ans;
        while(!minheap.empty()){
            pair<int,int> p = minheap.top();
            int elem = p.second;
            ans.push_back(elem);
            minheap.pop();
        }
        return ans;
    }
};
