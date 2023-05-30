// Sum of greater number and smallest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	int min = arr[1];
	int mx = 0;
	int mn = 0;
	int sum = 0;
	for (int i = 1; i < size; i += 1) {
		if (arr[i]> max) {
			mx = arr[i];
		}
		 
		 
		


		 
} 
	for (int i = 0; i < size; i += 1) {
		if (arr[i] < min) {
			mn = arr[i];
		}
	}
	sum = mx + mn;
	cout << sum;
  
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
