#include<bits/stdc++.h>

#include <iostream>
using namespace std;

void replaceChar(int i,string &s)
{
    if(s[i-1] != 'a' and s[i+1] != 'a')
        s[i] = 'a';
    else
        s[i] = 'b';
    
}

int main() {
	string s;
	cin >> s;	// Reading input from STDIN
	for(int i=0;s[i];i++)
	{
	    if(s[i]=='?')
	       replaceChar(i,s);
	       
	}
	cout << s << endl;		// Writing output to STDOUT
	return 0;
}
