#ifndef leecode345
#define leecode345
#include <iostream>
#include <set>
#include <list>
using namespace std;
namespace lee345{
	class Solution {
public:
    string reverseVowels(string s) {
        set<char> Vowels;
        list<char> listVowels;
        Vowels.insert('a');
        Vowels.insert('A');
        Vowels.insert('e');
        Vowels.insert('E');
        Vowels.insert('i');
        Vowels.insert('I');
        Vowels.insert('o');
        Vowels.insert('O');
        Vowels.insert('u');
        Vowels.insert('U');
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(Vowels.find(s[i])!=Vowels.end()){
				listVowels.push_back(s[i]);
            }
        }
        string result;
        for(int i=0;i<len;i++)
        {
            if(Vowels.find(s[i])!=Vowels.end()){
                result.push_back(listVowels.back());
                listVowels.pop_back();
            }
            else
            {
                result.push_back(s[i]);
            }
        }
        return result;

    }
};
};

#endif