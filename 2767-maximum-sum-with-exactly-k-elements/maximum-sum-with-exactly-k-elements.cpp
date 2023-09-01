class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int ans=maxi*k+(k*(k-1)/2);
        return ans;
        
    }
};