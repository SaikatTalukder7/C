#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >q;

    q.push({4,-4});
    q.push({10,-10});
    q.push({-2,2});
    q.push({1,-1});
    q.push({3,-3});
    q.push({3,-4});
    q.push({-6,6});  //When 1st elements are same from two or three comp 2nd value.
    q.push({-6,5});
    q.push({-6,1});


    while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second<<"   ";
        q.pop();
    }
}
