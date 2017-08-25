#include<iostream>
#include<vector>

using namespace std;
int chck( vector<int>a )
{
	int  i = 0  ,n = a.size()-1 , cnt = 0 ,hash[7] = { } ;
	while( i <= n ){
		if(a[i] == a[n--] && a[i] <= 7 ){
			hash[a[i]-1] = 1;
			i++;	
		}
		else 
			return 0;
	}
	for(int i = 0 ;i < 7 ;i++)
		if(hash[i] == 0)
			return 0;
}

int main()
{
	int t,tmp ;
	cin>>t;
	int n;
	for(int  i= 0; i < t;i++)
		{
			cin>>n;
			vector<int>a;
			for(int j = 0 ; j < n ;j++)
				{
					cin>>tmp;
					a.push_back(tmp);
				}
			if(chck(a))
				cout<<"yes \n";
			else
				cout<<"no\n";
		}
}
