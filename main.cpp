#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1209;

/*
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

tuple<vector<int>, int, vector<int>>
testFixture1()
{
  auto nums = vector<int>{2, 7, 11, 15};
  auto output = vector<int>{0, 1};
  return make_tuple(nums, 9, output);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << Util::toString(get<2>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.twoSum(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  return 0;
}