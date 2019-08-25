#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;
string s1;
    cin >> tc;
    vector<char> seven;
     vector<char> sodd;
    for(int j=0;j<tc;j++)
    {
	getline(cin,s1);
	int k=0;
	for(;k<s1.length();k++)
   {	if(k%2==0)
      seven.push_back(s1[k]);
        else
	sodd.push_back(s1[k]);
   }
    }
for(int i=0;i<seven.size();i++)
cout<<seven[i];

cout<<" ";
for(int i=0;i<sodd.size();i++)
cout<<sodd[i];

    return 0;
}
