// Insertion Sort Algorithm
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void insertion_sort(int *array, int size)
{
	int temp;
	for (int i = 1; i < size; ++i) {
		int temp = array[i];
		int j = i - 1;
		while ((j >= 0) && (array[j] > temp)) {
			array[j + 1] = array[j];
			j -= 1;
		}
		array[j + 1] = temp;
	}
}

int main(int argc, char *argv[])
{
	constexpr int size = 7;
	int array[size];
	srand(time(nullptr));
	cout << "Created array:\n";
	for (int i = 0; i < size; ++i)
		cout << (array[i] = rand()) << '\t';
	insertion_sort(array, size);
	cout << "\n\nSorted array:\n";
	for (int i = 0; i < size; ++i)
		cout << array[i] << '\t';
	cout << endl << endl;
	return 0;
}