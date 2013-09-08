/*
ID: veenus.1
PROG: crypt1
LANG: C++
*/
#include <iostream>
#include <cassert>
#include <cmath>
#include <cstring>
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>

using namespace std;

int main()
{
	freopen("crypt1.in","r", stdin);
	freopen("crypt1.out","w", stdout);
	int N,temp;
	vector<int>arr;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	vector<int> dig3,dig2;

	for(int i=10;i<100;i++)
	{
		int a,b,n=i;
		a= n%10;b=n/10;
		if((find(arr.begin(),arr.end(), a) != arr.end()) && (find(arr.begin(),arr.end(), b) != arr.end()))
		{
			dig2.push_back(i);
		}
	}
	// for(int i=0;i<N;i++)
	// {
	// 	for(int j=0;j<dig2.size();j++)
	// 	{
	// 		dig3.push_back(dig2[j]*10+arr[i]);
	// 	}
	// }
	// int result = 0;
	// for(int i=0;i<dig3.size();i++)
	// {
	// 	for(int j=0;j<dig2.size();j++)
	// 	{
	// 		int n = dig3[i]*dig2[j];
	// 		int x,y;
	// 		x=dig2[j]%10,y=dig2[j]/10;
	// 		if(find(dig3.begin(),dig3.end(),x*dig3[i]) != dig3.end() && find(dig3.begin(),dig3.end(),y*dig3[i]) != dig3.end())
	// 		{
	// 			if(n <10000)
	// 			{
	// 				int a,b,c,d;
	// 				a=n%10;n /=10;b = n%10;
	// 				n /=10;c=n%10;d=n/10;
	// 				if((find(arr.begin(),arr.end() , a) != arr.end()) && (find(arr.begin(),arr.end(), b) != arr.end()) && (find(arr.begin(),arr.end(), c) != arr.end()) && (find(arr.begin(),arr.end() , d) != arr.end()))
	// 					result++;
	// 			}
	// 	    }
	// 	}
	// }
	// cout<<result<<"\n";
	// return 0;
	return 0;
}