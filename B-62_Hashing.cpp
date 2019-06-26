#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<char>arr;
   string arr1 = "0123456789qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
   int n;
   cin>>n;
   while(n>0)
   {
   arr.push_back(arr1[n%62]);
   n/=62;
   }
   for(int i=0;i<arr.size();i++)
   {
   	cout<<arr[arr.size()-i-1];
   }
   return 0;
}
