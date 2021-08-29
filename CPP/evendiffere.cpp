#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	 int n;
	 cin>>n;
	 int even=0,odd=0,a=0;
	 for(int i=0;i<n;i++){
	     cin>>a;
	     if(a%2==0)
	     even++;
	     else
	     odd++;
	 }
	 cout<<min(even,odd)<<endl;
	}
	return 0;
}
