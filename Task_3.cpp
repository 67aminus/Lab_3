/*Через do-while запросить номер маршрута от 1 до 99.
После корректного ввода определить, однозначный он или двузначный.*/
#include <iostream>

using namespace std;

int main() {
	int route;
	do {
		cout << "Введите номер маршрута от 1 до 99: \n";
		cin >> route;
	} while (route < 1 || route > 99);
	if (route < 10)  cout << "Маршрут под номером " << route << " однозначный";
	else  cout << "Маршрут под номером " << route << " двузначный";
	return 0;
}
