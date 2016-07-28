#ifndef leecode349
#define leecode349
#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <string>
using namespace std;
namespace lee349{
	class Solution {
	public:
		set<int> it1,it2;
		vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
			int lens1=0,lens2=0;
			lens1=nums1.size();
			lens2=nums2.size();
			for(int i=0;i<lens1;i++)
			{
				it1.insert(nums1[i]);
			}
			for(int i=0;i<lens2;i++)
			{
				it2.insert(nums2[i]);
			}
			int lenit2=0,lenit1=0;
			lenit2=it2.size();
			lenit1=it1.size();
			vector<int> sol;
			for(set<int>::iterator i=it2.begin();i!=it2.end();i++)
			{
				if(it1.find((*i))!=it1.end())
				{
					sol.push_back(*i);
				}
			}
			return sol;
		}
	};
};
#endif