#include<iostream>
using namespace std;

void inputMatrix(int** arr, int m, int n)
{
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void displayMatrix(int** arr, int m, int n)
{
    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfElements(int** arr, int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

void displayRowWiseSum(int** arr, int m, int n)
{
    cout << "Row wise sum: " << endl;
    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void displayColumnWiseSum(int** arr, int m, int n)
{
    cout << "Column-wise sum: " << endl;
    for (int j = 0; j < n; j++)
    {
        int colSum = 0;
        for (int i = 0; i < m; i++)
        {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void createTranspose(int** arr, int m, int n)
{
    cout << "Transpose of the matrix: " << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter the size of 2D array (m and n): ";
    cin >> m >> n;

    int** arr = new int* [m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    int choice;
    do
    {
        cout << "\nEnter your choice : " << endl;
        cout << "1. Enter the matrix : " << endl;
        cout << "2. Display your matrix : " << endl;
        cout << "3. Sum of all elements : " << endl;
        cout << "4. Row wise sum : " << endl;
        cout << "5. Column-wise sum" << endl;
        cout << "6. Transpose of matrix : " << endl;
        cout << "7. Exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            inputMatrix(arr, m, n);
        }
        else if (choice == 2)
        {
            displayMatrix(arr, m, n);
        }
        else if (choice == 3)
        {
            cout << "Sum of all elements: " << sumOfElements(arr, m, n) << endl;
        }
        else if (choice == 4)
        {
            displayRowWiseSum(arr, m, n);
        }
        else if (choice == 5)
        {
            displayColumnWiseSum(arr, m, n);
        }
        else if (choice == 6)
        {
            createTranspose(arr, m, n);
        }

    } while (choice != 7);

   
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
