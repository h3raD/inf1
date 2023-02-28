#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	int cycle = 1, button = 0;

	int a = 19 , b =12 , c = 12;
	double m = 1.58 , n = 3.46 , abp1 = 0, abp2 = 0;

	double as1 = 4.88445, as2 = 0.00052 /*, drob = 0, ma = 0, ms = 0*/;
	
	double x = 4.633, predotn = 0, abp = 0.0015;

	setlocale(LC_ALL, "RUS");

	double ch = 23.3748, syq = 0.27 / 100, drob, abp11 = 0; //������������� ����������; ����� �������� ����� � ���������� ���� ��� �������� �����
	double am = modf(ch, &drob); //����� �������, ���������� ������� ����� �� ����� �����
	abp11 = syq * fabs(ch);//���������� ����������� ����� 
	cout << "���������� ����������� ����� �����: " << fixed << setprecision(4) << abp11 << endl; //����� ���������� ����������� �� �����
	cout << "������� �����: " << setprecision(4) << fixed << am << endl; //����� ������� ����� �� �����
	if (0.1 > abp11 && 0.01 < abp11 && 0.001 < abp11 && 0.0001 < abp11)//������� ��� ����������� ������ ����
	{
		cout << "������ ����� 3 - ������; 7, 4, 8 - ������������" << endl;
		cout << "������ �����: 23.3" << endl;
		cout << "���������� ����������� ���������� �����: " << setprecision(4) << fixed << 23.3 * syq << endl << endl << endl;
	}
	else
	{
		cout << "���������� �������" << endl << endl << endl;
	}


	while (cycle) {
		system("cls");
		
		cout << "������������ ������ �1"s << endl;
		cout << "��������: ����������� �.�."s << endl;
		cout << "������� 12"s << endl << endl;

		cout << "�������� ������� (1-3)"s << endl << endl;
		
		cin >> button;

		switch (button) {

		case 1:

			cout << "������� �1 - ����������, ����� ��������� ������"s << endl;
			cout << "�������:"s << endl;
			cout << "1)19/12=1.58                2)sqrt(12)=3.46"s << endl << endl;
			cout << "�������:"s << endl;
			cout << "�������� ��������� � ������� ����������� ���������� ���-���:" << endl;
			cout << "1)" << a << "/" << b << " = " << fixed << setprecision(6) << (double)(a) / (double)(b) << endl; //������� �� ����� ����� � ������������� ����������� ������(6) ����� �������
			cout << "2) sqrt(" << c << ") = " << fixed << setprecision(6) << sqrt(c) << endl;
			cout << "���������� ���������� �����������, �������� �� � �����-���:" << endl;
			abp1 = fabs(((double)(a) / (double)(b)) - m); //������� ���������� ����-������ ����������� ��� ������� ���������
			abp2 = fabs(sqrt(c) - n);
			cout << "1) " << abp1 << endl;
			cout << "2) " << abp2 << endl;
			cout << "���������� ���������� ����������� ���������� � %:" << endl;
			cout << "1)" << fixed << setprecision(6) << abp1 / m << endl;
			cout << "2)" << fixed << setprecision(6) << abp2 / n << endl;
			if (abp1 < abp2)//���� ����������� ������� ��������� ������, ������ ��� ������
			{
				cout << "������, ����� ������ ���������: 19/12=1.58" << endl << endl << endl;
			}
			else {
				cout << "������, ����� ������ ���������: sqrt(12)=3.46" << endl << endl << endl;
			}
			system("pause");
			break;
			
		case 2:
			
			cout << "������� �2 - ��������� ������������ ����� �����, ������� ������ �����. ���������� ���������� ����������� ����������"s << endl;
			cout << "�������:"s << endl;
			cout << "4.88445+-0.00052"s << endl << endl;
			cout << "�������:"s << endl;
			cout << "� ������ ������������� �������� ����� ����� 5 ��������� � ������� ������� (0,00001)"s << endl;
			cout << "������� ���������� ����������� h = 0,00052 ����������� 0,00001, �������������, 5 � ������ �����"s << endl;
			cout << "h = 0,00052 �� ����������� 0,00001 -> 4 ������ �����."s << endl;
			cout << "���� � ������ ������������� �������� ����� �����-�� ����� � ������, �� � ��� �������������� �� ����� ��� �� �������� �������." << endl;
			cout << "�� ������� ����������, ��������� ������������� ����� = 5, ������������� ����������� ��������� ������ ����� �� 1"s << endl;
			cout << "���������� ����������� = |4.88445 - 4.8845| = |-0,00005| = 0,00005"s << endl;

			system("pause");
			break;
			
		case 3:
			
			cout << "������� �3 - ����� ���������� ���������� � ������������� ����������� ������������� �����, ��� ����� �������� �� ��������� ������."s << endl;
			cout << "�������:"s << endl;
			cout << "4.633"s << endl << endl;
			cout << "�������:"s << endl;
			predotn = abp / x; //������������� ����������� ����� ��������� ���������� ����������� � ������ �����
			cout << "���������� ���������� ����������� �����: " << abp << endl;
			cout << "���������� ������������� ����������� �����: " << setprecision(4) << fixed << predotn << endl << endl << endl;
			system("pause");
			
			
			system("pause");
			break;

		default:

			cycle = 0;
			system("pause");
			break;

		}
	}
	return 0;
	
}



