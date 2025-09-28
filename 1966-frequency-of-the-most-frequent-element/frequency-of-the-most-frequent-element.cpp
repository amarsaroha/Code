class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       long sum =0;
       int left =0, res =1;
       for(int right = 0; right<nums.size(); ++right) {
        sum += nums[right];
        while ((long)nums[right] * (right - left + 1) - sum > k)
            sum -= nums[left++];
        res = max(res, right - left + 1);
       }
       return res;
    }
};