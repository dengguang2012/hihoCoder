#ifndef leecode350
#define leecode350
#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
namespace lee350{
	class Solution {
	public:
		vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
			sort(nums1.begin(),nums1.end());
			sort(nums2.begin(),nums2.end());
			int lens1=0,lens2=0;
			lens1=nums1.size();
			lens2=nums2.size();
			vector<int> sol;
			int i=0,j=0;
			for(;i<lens1 && j<lens2;)
			{
				if(nums1[i]==nums2[j])
				{
					sol.push_back(nums1[i]);
					i++;
					j++;
				}
				else if(nums1[i]<nums2[j])
				{
					i++;
				}
				else if(nums1[i]>nums2[j])
				{
					j++;
				}
			}
			return sol;
		}
	};
};
#endif