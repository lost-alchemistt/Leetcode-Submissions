class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int pf = 1;
        int sf = 1;
        int right = 0;
        int left = nums.size() - 1;
            prefix.push_back(pf);
            suffix.push_back(sf);
        while (left >= 0 ){
            pf = pf*nums[right];
            sf = sf*nums[left];
            right++;
            left--;
            prefix.push_back(pf);
            suffix.push_back(sf);
        }
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            nums[i] = prefix[i]*suffix[n-i-1];
        } 
        return nums;
    }
};