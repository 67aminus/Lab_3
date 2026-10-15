/* Ввести число вагонов и дверей в вагоне (1..8).
Вложенными циклами вывести все пары «вагон-дверь» и общее количество дверей.*/

#include <iostream>

using namespace std;

int main() {
	int wagons;
	int doors;
	int allDoors;

	do {
		cout << "Введите количество вагонов: ";
		cin >> wagons;
	} while (wagons < 1 || wagons > 8);

	do {
		cout << "Введите количество дверей в вагоне (1..8): ";
		cin >> doors;
	} while (doors < 1 || doors > 8);

	for (int wagon = 1; wagon <= wagons; wagon++) {
		for (int door = 1; door <= doors; door++) {
			cout << "Вагон " << wagon << " - дверь " << door << "\n";
		}
	}
	allDoors = wagons * doors;
	cout << "Общее количество дверей: " << allDoors;
	return 0;
}



