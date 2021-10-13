#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;


void randArray(int arr[], int SIZE, int randBegin, int randEnd) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = randBegin + rand() % (abs(randBegin) + abs(randEnd));

	}
}


int countArray(int arr[],int SIZE, int vashechislo) {
	int counter = 0;
	for (int i = 0; i < SIZE; i++ ) {
		if (arr[i] == vashechislo) {
			counter++;
		}
	}
	return counter;
}

int countcountArray(int arr[], int SIZE) {
	int item = 0;
	int item_count = 0;
	for (int i = 0; i < SIZE; i++) {
		if (countArray(arr, SIZE, arr[i]) > item_count) {
			item = arr[i];
			item_count = countArray(arr, SIZE, arr[i]);
		}
	}

	return item;
}

char longestChar(char spectre[]) {
	char longest_word;
	for (int i = 0; i < strlen(spectre); i++) {
		while ()
	}

	return longest_word;
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int SIZE = 1000;
	int arr[SIZE];
	int randBegin = -201;
	int randEnd = 100;
	randArray(arr, SIZE, randBegin, randEnd);
	int vashechislo;
	cin >> vashechislo;
	cout << countArray(arr, SIZE, vashechislo) << endl;
	cout << countcountArray(arr, SIZE) << endl;
	char spectre[500];
	cin >> spectre;
}
