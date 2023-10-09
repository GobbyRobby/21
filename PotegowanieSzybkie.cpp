#include<iostream>
using namespace std;
int pot_szybkie(int a, unsigned int n)

{
	int w = 1;
	while (n > 0)
	{

		if (n % 2 == 1) 

			w *= a;
		a *= a;

		n /= 2; 

	}
	return w;
}
int main()
{
	unsigned int n;
	int a;
	cout << "Podaj podstawe: ";
	cin >> a;
	cout << "Podaj wykladnik: ";
	cin >> n;
	cout << a << " do potegi " << n << " wynosi " << pot_szybkie(a, n);
	return 0;
}

 

 