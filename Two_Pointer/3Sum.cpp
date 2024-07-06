class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i = 0; i < nums.size() - 2; i++){
          if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
          }  
          if(nums[i] > 0) break;
          else {
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k) {
              int sum = nums[i] + nums[j] + nums[k];
              if(sum > 0) {
                k--;
              } else if(sum < 0) {
                j++;
              } else {
                res.push_back({nums[i], nums[j], nums[k]});
                while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    j++;
                    
                    while (j < k && nums[k - 1] == nums[k]) {
                        k--;
                    }
                    k--;
              }
            }
          }
        }
        return res;
    }
};