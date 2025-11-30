#include<iostream>
#include<set>
using namespace std;
int main()
{

set<int,greater<int>>s;
s.insert(123);
s.insert(23);
s.insert(56);
// iterating of the value 
// store in the sorted order 
// using the red black tree to perform the 
// operation 
for(int x:s)
{
    cout<<x<<" ";
}
// searching of the element 
cout<<endl;
if(s.find(56)!=s.end())
cout<<"present"<<" ";
else
cout<<"not present";

    return 0;
}