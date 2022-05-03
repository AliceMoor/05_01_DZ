# include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int dz = 0;

	while (dz < 4)
	{
		cout << "Введите № задания " << endl;
		cin >> dz;

		switch (dz)
		{
		case 1: 
		{
			cout << "Задание №1: " << endl;
			cout << "Пользователь вводит с клавиатуры символ." << endl;
			cout << "Определить, какой это символ: буква, цифра, знак препинания или другое." << endl;

			char char_symbol=0;
			int code=0;

			code = (int)char_symbol;
			cout << "Введите один символ" << endl;
			cin >> char_symbol;

			if ((char_symbol >= 33 && char_symbol <= 47) 
							|| (char_symbol >= 58 && char_symbol <= 64) 
									|| (char_symbol >= 91 && char_symbol <= 96) 
											|| (char_symbol >= 123 && char_symbol <= 191  ))
			{
				cout << "Вы ввели символ." << endl;
			}

			if (char_symbol >= 48 && char_symbol <= 57)
			{
				cout << "Вы ввели цифру." << endl;
			}

			if ((char_symbol >= 65 && char_symbol <= 90) || (char_symbol >= 97 && char_symbol <= 122))
			{
				cout << "Вы ввели латинскую букву." << endl;
			}

			if (char_symbol >= 192 && char_symbol <= 255)
			{
				cout << "Вы ввели букву русского алфавита." << endl; // русские буквы не воспринимает
			}

			/*for (int i=0; i<=255; i++)
			{
				cout << " код " << i << "char =   "<<(char)i  << endl;
			}*/

			system ("pause");
			system ("cls");
		} 
		break;
























		case 2: 
		{
			cout << "Задание №2: " << endl;
			cout << "Написать программу подсчета стоимости разговора для разных мобильных операторов." << endl;
			cout << "Пользователь вводит длительность разговора и выбирает с какого на какой оператор он звонит." << endl;
			cout << "Вывести стоимость на экран." << endl;

			int seconds;
			double Megafon_Beeline=0.5;
			double Megafon_MTS=0.3;
			double Beeline_MTS=0.46;
			int operation=0;
			

			cout << "Выберите тип связи: " << endl;
			cout << "1 - Мегафон - Билайн " << endl;
			cout << "2 - Билайн - МТС " << endl;
			cout << "3 - МТС - Мегафон " << endl;
			cout << "4 - Внутри сети " << endl;
			cin >> operation;

			cout << "Введите длительность разговора в секундах - " << endl;
			cin >> seconds;

			
			if (operation == 1)
			{
				cout << "Стоимость звонка = " << (seconds * Megafon_Beeline) <<" рублей." << endl;
			}
			
			if (operation == 2)
			{
				cout << "Стоимость звонка = " << (seconds * Beeline_MTS) << " рублей." << endl;
			}

			if (operation == 3)
			{
				cout << "Стоимость звонка = " << (seconds * Megafon_MTS) << " рублей." << endl;
			}

			if (operation == 4)
			{
				cout << "Этот звонок будет бесплатным." << endl;
			}

			system("pause");
			system("cls");
		}
		break;


































		case 3: 
		{
			cout << "Задание №3: " << endl;
			cout << "Вася работает программистом и получает 50$ за каждые 100 строк кода." << endl;
			cout << "За каждое третье опоздание на работу Васю штрафуют на 20$. Реализовать меню: " << endl;
			cout << "1. Пользователь вводит желаемый доход Васи и количество опозданий, посчитать, сколько строк кода ему надо написать." << endl;
			cout << "2. Пользователь вводит количество строк кода, написанное Васей и желаемый объем зарплаты. Посчитать, сколько раз Вася может опоздать." << endl;
			cout << "3. Пользователь вводит количество строк кода и количество опозданий, определить, сколько денег заплатят Васе и заплатят ли вообще." << endl;
			
			int menu = 0;
			
			double zp_100 = 50; // за за 100 строк - 50 долл.
			double zp=0; //желаемая зп
			int stroki = 0;
			double zp_miss = 20; // опоздание
			int miss; //количество опозданий

			cout << "Выберите вариант рассчета: " << endl;

			cin >> menu;

			switch (menu)
			{
			case 1: 
			{
				cout << "Введите желаемый доход, $ - "; cin >> zp;
				cout << "Введите количество опозданий - "; cin >> miss;

				stroki = (zp * 100/zp_100 - miss * zp_miss) ;
				cout << "Необходимо написать - " << stroki << " строк" << endl;
			}
			break;

			case 2: 
			{
				cout << "Введите желаемый доход, $ - "; cin >> zp;
				cout << "Введите количество строк - "; cin >> stroki;

				miss = ((stroki / 100 * zp_100) -zp) / zp_miss;
				cout << "Можно опоздать - " << miss << " раз" << endl;
			}
			break;

			case 3: 
			{
				cout << "Введите количество опозданий - "; cin >> miss;
				cout << "Введите количество строк - "; cin >> stroki;
			
				zp = stroki * zp_100 / 100 - zp_miss * miss;
				cout << "Вам заплатят - " << zp << " рублей" << endl;
			}
			break;

			default: cerr << "Ошибка выбора меню."<< endl;
				break;
			}

			system("pause");
			system("cls");
		}
		break;
		



























		default:cerr << "\t\t\t\tОшибка выбора задания." << endl;
			break;
		}
		
	}
	






	return 0;
}