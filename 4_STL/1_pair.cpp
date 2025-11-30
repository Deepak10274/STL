#include<iostream> 
#include <utility> 
using namespace std;
int main() {
    pair<int,int> p = {1,2};
    cout << p.first << " " << p.second << endl;
    pair<string,int>deepak;
    deepak.first="deepak";
    deepak.second=13;
    cout<<deepak.first<<" "<<deepak.second<<" ";
    //we can print the multiple pair at a time 
    cout<<endl;
    pair<string,pair<string,int>>p1;
    p1.first="aman";
    p1.second.first="rahul";
    p1.second.second=123;
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<" "; 
    return 0;
}
