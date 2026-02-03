#include <iostream>

using std::cout;
using std::endl;

int calculateSum(const int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double getAverage(int sum, int size)
{
	return sum/size;
}

void addBonus(int arr[], int size, int bonus = 5)
{
	cout << "Scores with bonus: " << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] += bonus;

		cout << arr[i] << "  ";
	}
	cout << endl;
}

int findHighest(const int* arr, int size, int* best)
{
	*best = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > *best)
		{
			*best = arr[i];
		}
	}

	return *best;
}

int countPassed(const int arr[], int size)
{
	int passed = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 70)
		{
			passed += 1;
		}
	}

	return passed;
}

int main()
{
	int arr[5] = { 65, 82, 90, 45, 78 };

	cout << "Scores are: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	int sum = calculateSum(arr, 5);
	cout << "Sum: " << sum << endl;

	double average = getAverage(sum, 5);
	cout << "Average: " << average << endl;

	addBonus(arr, 5);

	int best = 0;
	int highest = findHighest(arr, 5, &best);
	cout << "Highest: " << highest << endl;
	
	int passed = countPassed(arr, 5);
	cout << "Number Passed: " << passed << endl;

	return 0;
}//video