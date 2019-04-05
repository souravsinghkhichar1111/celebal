//Write a program to print sum of the following series:1 3 5 7 9 11......
#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;                                      
	cout<<"enter the value\n";                          
	cin>>n;
	for(i=1;i<=n;i=i+2)	                           
	    {
	        sum=sum+i;
	    }
	cout << "sum of is number: "<<sum<< endl;
	return 0;
}
