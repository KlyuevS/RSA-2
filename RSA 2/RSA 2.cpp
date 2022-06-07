#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	 long long p, q, n, e, f, c, m, d, pick,m1,c1;
	 long long d1;
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
		d1 = 1/e ;
		d = d1 % f;
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
		n = p * q;
		f = (p - 1) * (q - 1);
		e = f - 1;
		cout << "Открытый ключ= {" << e << " " << n << "}" << endl;
		d1 = pow(e, -1) ;
		d = d1 % f;
		cout << "НИКОМУ НЕ ПОКАЗЫВАЙТЕ ЗАКРЫТЫЙ КЛЮЧ" << endl;
		cout << "Закрытый ключ= {" << d << " " << n << "}" << endl;
		m1 = pow(c, d);
		m = m1 % n;
		cout << "Сообщение= " << m << endl;


	}

	return 0;
}