#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol1209;
using namespace std;

/*takeaways
  - use stack
*/

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
  /* value to index */
  auto m = unordered_map<int, int>();

  for (auto i = 0; i < nums.size(); i++)
  {
    if (m.count(target - nums[i]) > 0)
      return {m[target - i], i};
    m[nums[i]] = i;
  }

  /* you should have exactly one solution and will never reach here */
  throw;
}