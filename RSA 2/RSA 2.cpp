#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int long Calculate_d(long m)
{
	long d = m-1 ;

	for (long i = 2; i <= m; i++)
		if ((m % i == 0) && (d % i == 0)) //если имеют общие делители
		{
			d--;
			i = 1;
		}

	return d-1;
}

int long Calculate_e(long d, long m)
{
	long e = 10;

	while (true)
	{
		if ((e * d) % m == 1)
			break;
		else
			e++;
	}

	return e;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	 long long p, q, n, e, f, c, m,  pick,m1,c1;
	 long long d = 0;
	 
	cout << "Выберите что вы хотите сделать:" << endl;
	cout << "1)Зашифровать сообщение" << endl;
	cout << "2)Расшифровать сообщение" << endl;
	cin >> pick;
	if (pick == 1) {
		cout << "q=" << endl;
		cin >> q;
		cout << "p=" << endl;
		cin >> p;
		cout << "m=" << endl;
		cin >> m;
		n = p * q;
		f = (p - 1) * (q - 1);
		e = f - 1;
		cout << "Открытый ключ= {" << e << " " << n << "}" << endl;
		d = Calculate_d(m);
		cout << "НИКОМУ НЕ ПОКАЗЫВАЙТЕ ЗАКРЫТЫЙ КЛЮЧ" << endl;
		cout << "Закрытый ключ= {" << d << " " << n << "}" << endl;
		c1 = pow(m, e) ;
		c = c1 % n;
		cout<<"Шифр=" << c << endl;
	}
	else {
		cout << "q=" << endl;
		cin >> q;
		cout << "p=" << endl;
		cin >> p;
		cout << "c=" << endl;
		cin >> c;
		cout << "d=";
		cin >> d;
		n = p * q;
		f = (p - 1) * (q - 1);
		e = f - 1;
		cout << "Открытый ключ= {" << e << " " << n << "}" << endl;
		cout << "НИКОМУ НЕ ПОКАЗЫВАЙТЕ ЗАКРЫТЫЙ КЛЮЧ" << endl;
		cout << "Закрытый ключ= {" << d << " " << n << "}" << endl;
		m1 = pow(c, d);
		m = m1 % n;
		cout << "Сообщение= " << m << endl;


	}

	return 0;
}