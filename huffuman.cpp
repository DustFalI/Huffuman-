#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,sum=0;
	int arr[2000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(n > 1)
	{
		sort(arr,arr+n);
		sum = sum + arr[0] + arr[1];
		arr[n] = arr[0] + arr[1];
		n--;
		for(int i=0;i<n;i++)
		{
			arr[i] = arr[i+2];
		}
	}
	cout<<sum;
	return 0;
}
