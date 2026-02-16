#include <bits/stdc++.h>
using namespace std;


int main()
{
	string str; // nisha surwade
	cout << "Enter the stream of string : ";
	getline(cin, str); //

	map<char, int>mp;
	
	for(auto x : str)
	{	
		if(x == ' ')
			continue;
		else 
			mp[x]++;
	}

	for(auto x : mp)
		cout << x.first << " : " << x.second << endl;

	return 0;
}