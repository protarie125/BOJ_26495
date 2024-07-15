#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

vector<string> nums = {
    R"(0000
0  0
0  0
0  0
0000)", R"(   1
   1
   1
   1
   1)", R"(2222
   2
2222
2
2222)", R"(3333
   3
3333
   3
3333)", R"(4  4
4  4
4444
   4
   4)",
    R"(5555
5
5555
   5
5555)", R"(6666
6
6666
6  6
6666)", R"(7777
   7
   7
   7
   7)", R"(8888
8  8
8888
8  8
8888)", R"(9999
9  9
9999
   9
   9)",
};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string s;
  cin >> s;

  for (const auto& x : s) {
    cout << nums[x - '0'] << "\n\n";
  }

  return 0;
}