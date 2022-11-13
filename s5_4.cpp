#include<iostream>
using namespace std;
int main()
{
	cout << "input x&n\n";
	double x, s=0,t;
	int n,i=1;
	cin >> x >> n;
	t = x;
	 while(i<=2*n-1)
	{
		
		s += t;
		i += 2;
		t = -1*x*x * t / (i * (i - 1));
		
	}

	cout << "y=" << s;
	return 0;
}