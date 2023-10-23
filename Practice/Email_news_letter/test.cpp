class Solution
{
public:
    int minSizeSubarray(vector<int> &nums, int target)
    {
        int n = nums.size();
        long long int c = 0;
        for (int i = 0; c <= target; i++)
        {
            c += nums[1 % (n)];
            nums.push_back(nums[1 % (n)]);
        }
        map<long long int, int> map;
        long long int cs = 0;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            cs += nums[i];
            if (map.find(cs - target) != map.end())
            {
                ans = min(ans, i - map[cs - target]);
            }
            map[cs] = 1;
        }

        if (ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};