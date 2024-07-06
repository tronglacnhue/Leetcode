class Solution
{
public:
  int rob(vector<int> &nums)
  {
    int ans[nums.size()][2];
    ans[0][1] = nums[0];
    ans[0][0] = 0;
    ans[1][1] = nums[1];
    ans[1][0] = nums[0];
    int res = max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++)
    {
      ans[i][1] = ans[i - 1][0] + nums[i];
      ans[i][0] = max(ans[i - 1][1], ans[i - 1][0]);
      res = max(res, max(ans[i][1], ans[i][0]));
    }
    return res;
  }
};