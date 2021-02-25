#include<iostream>
using namespace std;
int main()
{
	int l , f=0 , s=1 , next;
	cin>>l;
	
	for(int i=0;i<l;i++)
	{
		if(i<=1)
			next=i;
		else
		{
			next = f+s;
			f=s;
			s=next;
		}
		cout<<next<<" ";
	}
}
