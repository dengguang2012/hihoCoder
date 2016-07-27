#ifndef leecode17
#define leecode17
#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <string>
using namespace std;
namespace lee17{

	class Solution {
	public:
		vector<string> letterCombinations(string digits) {
			char phone[10][4]={
				{' ','\0','\0','\0'},
				{'\0','\0','\0','\0'},
				{'a','b','c','\0'},
				{'d','e','f','\0'},
				{'g','h','i','\0'},
				{'j','k','l','\0'},
				{'m','n','o','\0'},
			};
			vector<string> tt;
			tt.push_back("12");
			tt.push_back("23");
			return tt;
		}
	};
};
#endif