#include <iostream>
#include <locale.h>

#define N 20
using namespace std;
//����� ������������� ������ X �� 20 ���������. �� ����� �������
//���������� � ������ Y �� ������������������, ������� �������� ��������������
//���������� ��� ������� �� ���� ������. ������ ��������������� ���������,
//���� ����� ������������������� ���.


int main()
{
	setlocale(LC_ALL, "rus");
	int choose;
	int arr[N] = { 4,4,54,-4,5,7,1,2,3,4,5,6,7,8,9,10,7,8,9 }; // �������� ������, ���� ������������ �� ������� �������
	int resArr[N]; // �������������� ������
	cout << "���� ������ ������ ����e��� ������� ������� 1, ���� ������ ����� ��� ������������� ���������: " << '\n';
	cin >> choose; // ����� ������������

	if (choose == 1)
	{
		cout << "������� " << N << " ��������� ������ �������" << '\n';
		for (int i = 0; i < N; i++)
		{
			cout << "������� ����� " << i + 1 << " �������: ";
			cin >> arr[i];
		}
	}


	// ����� ������� ���� ����� ������������������
	cout << "�������� ������: " << '\n';
	for (int i = 1; i <= N; i++)
	{
		cout.width(6);
		cout << arr[i - 1] << " ";
		if (i % 5 == 0)
			cout << '\n';
	}
	int i = 0;
	int counter = 5; // ������� ��������� �������� � ������������������
	int a1, a2, a3, a4;
	int znam = 0;
	bool fl = false;
	int k = 0; // ������� ���������, ������� �������
	while (i <= N - 4 && fl == false)
	{
		a1 = arr[i] - arr[i + 1];
		a2 = arr[i + 1] - arr[i + 2];
		a3 = arr[i + 2] - arr[i + 3];
		a4 = arr[i + 3] - arr[i + 4];

		if ((a1 == a2) && (a2 == a3) && (a3 == a4)) // ����� ������ ������ ������������������
		{
			znam = a1; // ������ �����������

			fl = true;
			while (k != 5)
			{
				resArr[k] = arr[i];
				i++;
				k++;
			}
		}
		else
			i++;
	}

	int curr = arr[i - 1] - arr[i];
	while ((arr[i - 1] - arr[i] == znam) && i < N)
	{
		counter++;
		resArr[k] = arr[i];
		i++;
		k++;
	}



	if (fl == false)
	{
		cout << "������������������ �� ����������!";
	}
	else
	{
		cout << "���������: " << '\n';
		for (i = 0; i < counter; i++)
		{
			cout << resArr[i] << " ";
		}
	}


}