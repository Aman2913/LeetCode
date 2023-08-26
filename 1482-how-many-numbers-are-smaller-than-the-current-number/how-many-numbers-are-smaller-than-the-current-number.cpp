class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n =nums.size();
        vector<int>v;
        for(auto it:nums)
        {
            int count =0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]<it)
                {
                    count++;
                    
                }
            }
            v.push_back(count);
        }
        return v;
        
    }
};