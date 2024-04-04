#include <iostream>

using namespace std;

void Perimetr(float a, float b, float c) {
    float P = a + b + c;//Периметр треугольника
    cout << "Периметр треугольника равен " << P << endl;
}

void PloshadGERONa(float a, float b, float c) {
    float p = (a + b + c) / 2;//Периметр деленый на 2
    float S = sqrt(p * (p - a) * (p - b) * (p - c));//Площадь треугольника
    cout << "Площадь треугольника равна " << S << endl;
}

void Ravnobedrennost(float a, float b, float c) {
    if (a == b || b == c || a == c) {//Проверка на равнобедренность
        cout << "Треугольник является равнобедренным" << endl;
    }
    else {
        cout << "Треугольник не является равнобедренным" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    float a, b, c;
    cout << "Введите стороны треугольника: " << endl;
    cin >> a >> b >> c;
    Perimetr(a, b, c);
    PloshadGERONa(a, b, c);
    Ravnobedrennost(a, b, c);

    return 0;
}