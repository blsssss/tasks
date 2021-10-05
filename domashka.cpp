#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randArray(int arr[], int SIZE, int randBegin, int randEnd) { 
	for (int i = 0; i < SIZE; i++) {
		arr[i] = randBegin + rand() % (abs(randBegin) + abs(randEnd));
	
	}
}


void printArray(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int arrSummary(int arr[], int SIZE) {
	int summary = 0;
	for (int i = 0; i < SIZE; i++) {
		summary += arr[i];

	}
		return summary;
}

int getMaxArray(int arr[], int SIZE) {
	int maxik = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (maxik < arr[i]) {
			maxik = arr[i];
		} 
	}
	return maxik;
}


void absArray(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < 0) {
			arr[i] *= -1;
		}
	}
}

int consoleSumm(int chislo) {
	int vremyanka = 0;
	while (chislo != 0) {
		vremyanka += chislo % 10;
		chislo /= 10;

	}
	return vremyanka;
}

void luckyTicket(int lucky1, int lucky2) {
	if (!(99999 < lucky1 < lucky2 < 1000000)) {
		cout << "Your ticket number is incorrect!" << endl;
	}
	else {
		for (int ticket = lucky1; ticket <= lucky2; ticket++) {
			if (consoleSumm(ticket / 1000) == consoleSumm(ticket % 1000)) {
				cout << ticket << " ";
			}
		}
	}
}


int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	int randBegin = -201;
	int randEnd = 100;
	randArray(arr, SIZE, randBegin, randEnd); // задание 1
	printArray(arr, SIZE); // задание 1
	cout << arrSummary(arr, SIZE) << endl; // задание 2
	cout << getMaxArray(arr, SIZE) << endl; // задание 3
	absArray(arr, SIZE); // задание 4
	printArray(arr, SIZE); // задание 4
	int chislo; // задание 5
	cin >> chislo; // задание 5
	cout << consoleSumm(chislo) << endl; // задание 5 
	int lucky1, lucky2; // задание 6
	cin >> lucky1 >> lucky2; // задание 6
	luckyTicket(lucky1, lucky2);  // задание 6
}