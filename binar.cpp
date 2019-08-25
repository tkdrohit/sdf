#include <bits/stdc++.h>
#include<stack>
using namespace std;



int main()
{
    stack<int> s1;
    int n;
    vector<int> d;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n!=0)
    {
        s1.push(n%2);
        n=n/2;
    }
    while(!s1.empty())
   {
     d.push_back(s1.top());
     s1.pop();
   }
//for(int k=0;k<d.size();k++)
    //cout<<d[k]<<" ";
   int c=0,c1=0;
   for(int k=0;k<d.size();k++)
    {
        while(d[k]==1&&k<d.size())
        {c1++;k++;}
        if(c<c1)
        c=c1;
    }
    cout<<c;
    return 0;
}

