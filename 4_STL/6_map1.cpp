#include<iostream>
#include<map>
using namespace std;
int main()
{

map<int,int>m;
m.insert({2,12});
m.insert({3,45});
m.insert({21,12});
m.insert({32,45});

for(auto x:m)
{
    cout<<x.first<<" -> "<<x.second<<" ";
    cout<<endl;
}
cout<<endl;
m[21]=100;
for(auto x:m)
{
    cout<<x.first<<" -> "<<x.second<<" ";
    cout<<endl;
}

// erase the value on the using the key 
m.erase(2);
cout<<endl;
m[21]=100;
for(auto x:m)
{
    cout<<x.first<<" -> "<<x.second<<" ";
    cout<<endl;
}
    return 0;
}