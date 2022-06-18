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
  - scan the array exactly once
  - use a hash table with the key being
    the value of the element and value
    being the index of the element
*/

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
  /* value to index */
  auto m = unordered_map<int, int>();

  for (auto i = 0; i < nums.size(); i++)
  {
    /* since there will be exactly one solution
       - {a,b}
       - one of them will get inserted first
         let's say it's a
       -  when we scan in b, we can then
         exit as a+b = target or [target-b]
         exists in the hash table
    */
    if (m.count(target - nums[i]) > 0)
      return {m[target - i], i};
    m[nums[i]] = i;
  }

  /* you should have exactly one solution and will never reach here */
  throw;
}