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
		void printVector(vector<string> ss)
		{
			cout<<",";
			for(int i=0;i<ss.size();i++)
			{
				cout<<",";
				cout<<ss[i];
			}
		}
		bool isdigits(char a)
		{
			if (a>='0' && a<='9')
				return true;
			else
				return false;
		}
		vector<string> letterCombinations(string digits) {
			char phone[10][4]={
				{' ','\0','\0','\0'},
				{'\0','\0','\0','\0'},
				{'a','b','c','\0'},
				{'d','e','f','\0'},
				{'g','h','i','\0'},
				{'j','k','l','\0'},
				{'m','n','o','\0'},
				{'p','q','r','s'},
				{'t','u','v','\0'},
				{'w','x','y','z'}
			};
			vector<string> result;
			if(digits.size()<=0){
				vector<string> tt;
				tt.push_back("");
				return tt;
			}
			for(int i=0;i<digits.size();i++){
				if(!isdigits(digits[i]))
				{
					vector<string> t1;
					return t1;
				}
				int d=(int)(digits[i]-'0');
				vector<string> t2;
				if(result.size()<=0)
				{
					string s;
					for(int j=0;j<4;j++)
					{
						if(phone[d][j]=='\0')
							break;
						s="";
						s=s+phone[d][j];
						result.push_back(s);
					}
				}
				else
				{
					t2=result;
					result.clear();
					for(int j=0;j<t2.size();j++)
					{
						string t3=t2[j];
						for(int k=0;k<4;k++)
						{
							t3=t2[j];
							if(phone[d][k]=='\0')
								break;
							t3=t3+phone[d][k];
							result.push_back(t3);
						}
					}
				}
			}
			return result;
		}
	};
};
#endif