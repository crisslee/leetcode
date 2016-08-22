#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
	int firstuniqChar(string s){
		int n = s.length();
		int sta[26] = { 0 };
		for (int i = 0; i < n; i++)
		{
			sta[s[i] - 'a']++;
		}
		for (int i = 0; i < n; i++)
		{
			if (sta[s[i]-'a'] == 1)
				return i;
		}
		return -1;

		
	}
};