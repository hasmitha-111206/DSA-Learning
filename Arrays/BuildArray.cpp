#include <vector>
using namespace std;
class solution
{
public:
    vector<int> Build(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
