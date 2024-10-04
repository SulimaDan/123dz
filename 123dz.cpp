﻿#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;
    while (exponent-- > 0) result *= base;
    return result;
}

int main() {
    double base;
    int exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}







using namespace std;

int sumRange(int a, int b) {
    int sum = 0;
    for (int i = min(a, b); i <= max(a, b); i++) sum += i;
    return sum;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << sumRange(num1, num2) << endl;
    return 0;
}






using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) if (num % i == 0) sum += i;
    return sum == num;
}

int main() {
    int start, end;
    cout << "Enter range: ";
    cin >> start >> end;
    for (int i = start; i <= end; i++) if (isPerfect(i)) cout << i << " is perfect\n";
    return 0;
}











using namespace std;

void displayCard(const string& rank, const string& suit) {
    cout << rank << " of " << suit << endl;
}

int main() {
    string rank, suit;
    cout << "Enter rank and suit: ";
    cin >> rank >> suit;
    displayCard(rank, suit);
    return 0;
}







using namespace std;

bool isLucky(int num) {
    int sum1 = num / 100000 + (num / 10000) % 10 + (num / 1000) % 10;
    int sum2 = (num / 100) % 10 + (num / 10) % 10 + num % 10;
    return sum1 == sum2;
}

int main() {
    int number;
    cout << "Enter a six-digit number: ";
    cin >> number;
    if (isLucky(number)) cout << "Lucky number!\n";
    else cout << "Not lucky.\n";
    return 0;
}














#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) cin >> arr[i];

    cout << "Enter the key to search for: ";
    cin >> key;

    int result = linearSearch(arr, size, key);
    if (result != -1)
        cout << "Key found at index: " << result << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}








#include <algorithm>  
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array (sorted or unsorted): ";
    for (int i = 0; i < size; ++i) cin >> arr[i];

    sort(arr, arr + size);

    cout << "Enter the key to search for: ";
    cin >> key;

    int result = binarySearch(arr, size, key);
    if (result != -1)
        cout << "Key found at index: " << result << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}














#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, power = 0;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, power);
        power++;
        binary /= 10;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;

    return 0;
}
