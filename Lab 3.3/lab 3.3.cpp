// Lab_03_3.cpp
// < ����� , ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 25

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������

	double R; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ������ ����
	if (x <= -2)
		y = x + 3;
	else
		if (-2 < x && x <= 4)
			y = (10 - R * x + 4 * R - x) / 6;
		else
			if (4 < x && x <= 8 - R)
				y = -R;
			else
				if (8 - R < x && x <= 8 + R)
					y = sqrt(R * R - x * x + 16 * x - 64 - R);

				else
					y = -R;
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}

