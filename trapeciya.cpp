#include<iostream>
using namespace std;
void perimetr(float a, float b, float c, float d) {
	float p; //периметр
	p = a + b + c + d; //вычисление периметра
	cout << "периметр трапеции = " << p << endl; //вывод
}
void ploshad(int a, int b, int c, int d) {
	float s; //площадь
	float h; //высота
	h = sqrt(c ^ 2 - (((a - b) ^ 2 + c ^ 2 - d ^ 2) / 2 * (a - b)) ^ 2); //вычисление высоты
	s = ((static_cast<float>(a) + static_cast<float>(b)) / 2) * h; //вычисление площади
	cout << "площадь трапеции = " << s << endl; //вывод
}
void srednyaya(float a, float b) {
	float l; //средняя линия
	l = (static_cast<float>(a) + static_cast<float>(b)) / 2; //вычисление средней линии
	cout << "средняя линия трапеции = " << l << endl; //вывод
}
int main() {
	setlocale(LC_ALL, "RU");
	float a;
	float b;
	float c;
	float d;
	cout << ("введите нижнее основание: ");
	cin >> a;
	cout << ("введите верхнее основание: ");
	cin >> b;
	cout << ("введите боковую сторону: ");
	cin >> d;
	cout << ("введите боковую сторону: ");
	cin >> c;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		cout << "введено недопустимое значение длиных!";
	}
	else {
		perimetr(a, b, c, d);
		ploshad(a, b, c, d);
		srednyaya(a, b);
	}
	return 0;
}
