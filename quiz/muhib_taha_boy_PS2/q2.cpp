#include <iostream>
using namespace std;

const int MAX_DIGITS = 20;

void getNumber(int num[], int &size)
{
    cout << "Enter digits (one by one, type -1 to finish):" << endl;
    size = 0;
    char input;

    while (true)
    {
        if (size >= MAX_DIGITS)
        {
            cout << "Maximum digit limit (" << MAX_DIGITS << ") reached! No more input allowed." << endl;
            break;
        }

        cin >> input;

        // -1 for finish
        if (input == '-' && cin.peek() == '1') // Checking for "-1"
        {
            cin.ignore(); // Ignore the remaining characters in the buffer
            break;
        }

        // control for invalid digit
        if (input < '0' || input > '9')
        {
            cout << "Invalid digit! Please enter a single digit (0-9)." << endl;
            continue;
        }

        // Add the digit to the array
        num[size++] = input - '0';  // Convert char to int
    }

    // At least 1 digit required
    if (size == 0)
    {
        cout << "At least 1 digit required!" << endl;
        getNumber(num, size);
    }
}

void addNumbers(int num1[], int size1, int num2[], int size2, int result[], int &resultSize)
{
    int carry = 0;
    resultSize = max(size1, size2);

    for (int i = 0; i < resultSize; ++i)
    {
        int sum = carry;
        if (i < size1)
            sum += num1[size1 - 1 - i];
        if (i < size2)
            sum += num2[size2 - 1 - i];

        result[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry)
    {
        result[resultSize++] = carry;
    }
}

void printNumber(int arr[], int size)
{
    cout << "Result: ";
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    int flag = 1;
    while (flag)
    {
        int num1[MAX_DIGITS] = {0}, num2[MAX_DIGITS] = {0}, result[MAX_DIGITS + 1] = {0};
        int size1, size2, resultSize;

        cout << "Enter first number digit by digit:" << endl;
        getNumber(num1, size1);

        cout << "Enter second number digit by digit:" << endl;
        getNumber(num2, size2);

        addNumbers(num1, size1, num2, size2, result, resultSize);

        // Overflow check for the result size
        if (resultSize > MAX_DIGITS)
        {
            cout << "Integer overflow! The sum has more than " << MAX_DIGITS << " digits." << endl;
        }
        else
        {
            printNumber(result, resultSize);
            flag = 0;
        }
    }

    return 0;
}
