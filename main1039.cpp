/*
http://hihocoder.com/problemset/problem/1039
字符消除
*/
#include <iostream>
#include <string>
using namespace std;
int calculate(string s)
{
	string st="";
	int len=s.length();
	int count=0;
	int count2=0;
	int flag=0;
	int flag2=0;
	for(int i=1;i<len;i++)
	{
		if(s[i]==s[i-1])
		{
			flag2=1;
			if(flag==0)
				count2=2;
			else
				count2++;
			flag=1;
		}
		else
		{
			if(flag==0)
			{
				st=st+s[i-1];
				
			}
			if(i==len-1)
					st+=s[i];
			flag=0;
			count+=count2;
			count2=0;
		}
		
	}
	count+=count2;
	if(flag2==0)
		return 0;
	return count+calculate(st);
}

int main()
{
    int cases;
    string t;
    cin>>cases;
    while(cases--)
    {
        cin>>t;
        //cout<<t<<endl;
        string temp;
		int len=t.length();
		int ans=0;
		ans=0;
		for(int i=0;i<=len;i++)
		{
			temp=t;
			temp.insert(i,"A");
			ans =max(ans,calculate(temp));

			temp=t;
			temp.insert(i,"B");
			ans =max(ans,calculate(temp));

			temp=t;
			temp.insert(i,"C");
			ans =max(ans,calculate(temp));


		}
		cout<<ans<<endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
