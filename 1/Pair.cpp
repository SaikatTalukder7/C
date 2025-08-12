#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int>p;  //Pair two number
    p.first=12;
    p.second=1.2;

    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int> >pp;   //Pair three number
    pp.first=12;
    pp.second.first=-2;
    pp.second.second=44;

    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<endl;
}
