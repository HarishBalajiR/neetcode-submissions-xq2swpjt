class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxheap;
        for(int num : nums) maxheap.push(num);
        int top = 0;
        while(k>0){
            top = maxheap.top();
            maxheap.pop();
            k--;
        }
        return top;
    }
};
