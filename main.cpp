#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

// https://leetcode.com/problems/reverse-string-ii/

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    string reverseStr(string &s, int k) {
        auto len = static_cast<int>(s.length());
        auto i = s.begin();
        int c = 0;
        while (c < len - 2 * k) {
            reverse(i, i + k);
            i += 2 * k;
            c += 2 * k;
        }
        reverse(s.begin() + c, s.begin() + c + min(k, len - c));
        return s;
    }
};

void test1() {
    string s = "abcdefg";
    int k = 2;


    cout << "bacdfeg ? " << Solution().reverseStr(s, k) << endl;
    s = "123456789XA";
    cout << "21346578X9A ? " << Solution().reverseStr(s, k) << endl;
    s = "abcdefg";
    cout << "gfedcba ? " << Solution().reverseStr(s, 8) << endl;
    s = "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";
    k = 39;
    cout << "fdcqkmxwholhytmhafpesaentdvxginrjlyqzyhehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqllgsqddebemjanqcqnfkjmi ?\n"
         << Solution().reverseStr(s, k) << endl;

}

void test2() {

}

void test3() {

}