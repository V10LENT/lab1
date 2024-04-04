#include <iostream>

using namespace std;

void Perimetr(float a, float b, float c) {
    float P = a + b + c;//��������
    cout << "�������� ������������ ����� " << P << endl;
}

void PloshadGERONa(float a, float b, float c) {
    float p = (a + b + c) / 2;//������� ������� �� 2
    float S = sqrt(p * (p - a) * (p - b) * (p - c));//������� ������������
    cout << "������� ������������ ����� " << S << endl;
}

void Ravnobedrennost(float a, float b, float c) {
    if (a == b || b == c || a == c) {//�������� �� ����������������
        cout << "����������� �������� ��������������" << endl;
    }
    else {
        cout << "����������� �� �������� ��������������" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    float a, b, c;
    cout << "������� 3 ������� ������������:" << endl;
    cin >> a >> b >> c;
    Perimetr(a, b, c);
    PloshadGERONa(a, b, c);
    Ravnobedrennost(a, b, c);

    return 0;
}