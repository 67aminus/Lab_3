/* С помощью while вводить количество пассажиров, вошедших на остановке, до ввода -1.
Отрицательные значения кроме -1 пропускать. 
Найти общее число вошедших и количество остановок, где вошло больше 10 человек.*/

#include <iostream>

using namespace std;

int main() {
	int entered  = 0;
	int allEntered = 0;
	int biggest = 0;

	cout << "Вводите количество пассажиров, вошедших на остановке, до ввода -1.\n";
		while (entered != -1) {
			cin >> entered;
			if (entered > 0) {
				allEntered = allEntered + entered;
				if (entered > 10) biggest++;
			}
		}
		cout << "Общее число вошедших равно " << allEntered << "\nКоличество остановок, где вошло больше 10 человек, равно " << biggest;
	return 0;
}