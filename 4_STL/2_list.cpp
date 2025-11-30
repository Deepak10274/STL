#include<iostream>
#include<list>
using namespace std;
int main()
{

list<int>l;
l.push_front(12);
l.push_back(123);
cout<<l.front();
cout<<endl;
cout<<l.back();
l.push_back(1234);
l.push_back(1234);
l.push_back(13);
l.push_back(34);
// for printing all the value 
for(int x:l)
{
    cout<<x<<" ";
}
cout<<endl;
// for size
cout<<l.size();
l.pop_front();
l.pop_back();
for(int x:l)
{
    cout<<x<<" ";
}
// for the removing the valure of the perticular index 
// cout<<l.remove(13);

cout<<endl;
l.sort();
for(auto it=l.begin();it!=l.end();it++)
{
    cout<<*it<<" ";
}
// reverse of the order we can use the iterator also 
cout<<endl;
l.reverse();
for(auto it=l.begin();it!=l.end();it++)
{
    cout<<*it<<" ";
}


    return 0;
}