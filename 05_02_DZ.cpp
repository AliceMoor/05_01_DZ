# include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int dz = 0;

	while (dz < 4)
	{
		cout << "������� � ������� " << endl;
		cin >> dz;

		switch (dz)
		{
		case 1: 
		{
			cout << "������� �1: " << endl;
			cout << "������������ ������ � ���������� ������." << endl;
			cout << "����������, ����� ��� ������: �����, �����, ���� ���������� ��� ������." << endl;

			char char_symbol=0;
			int code=0;

			code = (int)char_symbol;
			cout << "������� ���� ������" << endl;
			cin >> char_symbol;

			if ((char_symbol >= 33 && char_symbol <= 47) 
							|| (char_symbol >= 58 && char_symbol <= 64) 
									|| (char_symbol >= 91 && char_symbol <= 96) 
											|| (char_symbol >= 123 && char_symbol <= 191  ))
			{
				cout << "�� ����� ������." << endl;
			}

			if (char_symbol >= 48 && char_symbol <= 57)
			{
				cout << "�� ����� �����." << endl;
			}

			if ((char_symbol >= 65 && char_symbol <= 90) || (char_symbol >= 97 && char_symbol <= 122))
			{
				cout << "�� ����� ��������� �����." << endl;
			}

			if (char_symbol >= 192 && char_symbol <= 255)
			{
				cout << "�� ����� ����� �������� ��������." << endl; // ������� ����� �� ������������
			}

			/*for (int i=0; i<=255; i++)
			{
				cout << " ��� " << i << "char =   "<<(char)i  << endl;
			}*/

			system ("pause");
			system ("cls");
		} 
		break;
























		case 2: 
		{
			cout << "������� �2: " << endl;
			cout << "�������� ��������� �������� ��������� ��������� ��� ������ ��������� ����������." << endl;
			cout << "������������ ������ ������������ ��������� � �������� � ������ �� ����� �������� �� ������." << endl;
			cout << "������� ��������� �� �����." << endl;

			int seconds;
			double Megafon_Beeline=0.5;
			double Megafon_MTS=0.3;
			double Beeline_MTS=0.46;
			int operation=0;
			

			cout << "�������� ��� �����: " << endl;
			cout << "1 - ������� - ������ " << endl;
			cout << "2 - ������ - ��� " << endl;
			cout << "3 - ��� - ������� " << endl;
			cout << "4 - ������ ���� " << endl;
			cin >> operation;

			cout << "������� ������������ ��������� � �������� - " << endl;
			cin >> seconds;

			
			if (operation == 1)
			{
				cout << "��������� ������ = " << (seconds * Megafon_Beeline) <<" ������." << endl;
			}
			
			if (operation == 2)
			{
				cout << "��������� ������ = " << (seconds * Beeline_MTS) << " ������." << endl;
			}

			if (operation == 3)
			{
				cout << "��������� ������ = " << (seconds * Megafon_MTS) << " ������." << endl;
			}

			if (operation == 4)
			{
				cout << "���� ������ ����� ����������." << endl;
			}

			system("pause");
			system("cls");
		}
		break;


































		case 3: 
		{
			cout << "������� �3: " << endl;
			cout << "���� �������� ������������� � �������� 50$ �� ������ 100 ����� ����." << endl;
			cout << "�� ������ ������ ��������� �� ������ ���� �������� �� 20$. ����������� ����: " << endl;
			cout << "1. ������������ ������ �������� ����� ���� � ���������� ���������, ���������, ������� ����� ���� ��� ���� ��������." << endl;
			cout << "2. ������������ ������ ���������� ����� ����, ���������� ����� � �������� ����� ��������. ���������, ������� ��� ���� ����� ��������." << endl;
			cout << "3. ������������ ������ ���������� ����� ���� � ���������� ���������, ����������, ������� ����� �������� ���� � �������� �� ������." << endl;
			
			int menu = 0;
			
			double zp_100 = 50; // �� �� 100 ����� - 50 ����.
			double zp=0; //�������� ��
			int stroki = 0;
			double zp_miss = 20; // ���������
			int miss; //���������� ���������

			cout << "�������� ������� ��������: " << endl;

			cin >> menu;

			switch (menu)
			{
			case 1: 
			{
				cout << "������� �������� �����, $ - "; cin >> zp;
				cout << "������� ���������� ��������� - "; cin >> miss;

				stroki = (zp * 100/zp_100 - miss * zp_miss) ;
				cout << "���������� �������� - " << stroki << " �����" << endl;
			}
			break;

			case 2: 
			{
				cout << "������� �������� �����, $ - "; cin >> zp;
				cout << "������� ���������� ����� - "; cin >> stroki;

				miss = ((stroki / 100 * zp_100) -zp) / zp_miss;
				cout << "����� �������� - " << miss << " ���" << endl;
			}
			break;

			case 3: 
			{
				cout << "������� ���������� ��������� - "; cin >> miss;
				cout << "������� ���������� ����� - "; cin >> stroki;
			
				zp = stroki * zp_100 / 100 - zp_miss * miss;
				cout << "��� �������� - " << zp << " ������" << endl;
			}
			break;

			default: cerr << "������ ������ ����."<< endl;
				break;
			}

			system("pause");
			system("cls");
		}
		break;
		



























		default:cerr << "\t\t\t\t������ ������ �������." << endl;
			break;
		}
		
	}
	






	return 0;
}