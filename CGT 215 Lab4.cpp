// CGT 215 Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printMenu() 
{
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}

void factorial()
{
    cout << "Factorial: ";
    cout << "\nEnter a number: ";

    int f = 0;
    int tempF;
    int result = 1;
    cin >> tempF;

    while (tempF <= 0)
    {
        cout << "Nice try, please enter a positive number: ";
        cin >> tempF;
    } 

    f = tempF;

    for (int i = 1; i <= f; i++)
    {
        result = result * i;
    }

    cout << f << "! = ";
    for (int i = 1; i <= f; i++)
    {
        cout << i;
        if (i == f)
        {
            cout << " = ";
        }
        else
        {
            cout << " * ";
        }
    }
    cout << result;

}

void arithmetic()
{
    int start;
    int add;
    int element;

    cout << "Arithmetic Series: ";

    cout << "\nEnter a number to start at: ";
    cin >> start;

    cout << "Enter a number to add each time: ";
    cin >> add;

    cout << "Enter the number of elements in the series: ";
    int tempE;
    cin >> tempE;
    while (tempE <= 0)
    {
        cout << "Nice try, please enter a positive number: ";
        cin >> tempE;
    }
    element = tempE;

    int result = start;
    int final = 0;

    for (int i = 1; i <= element; i++)
    {
        cout << result;
        if (i == element)
        {
            cout << " = ";
        }
        else
        {
            cout << " + ";
        }

        final = final + result;
        result = result + add;
    }

    cout << final;
}

void geometric()
{
    int start;
    int multiply;
    int element;

    cout << "Geometric Series: ";
    cout << "\nEnter a number to start at: ";
    cin >> start;

    cout << "Enter a number to multiply by each time: ";
    cin >> multiply;

    cout << "Enter the number of elements in the series: ";
    int tempE;
    cin >> tempE;
    while (tempE <= 0)
    {
        cout << "Nice try, please enter a positive number: ";
        cin >> tempE;
    }
    element = tempE;

    int result = start;
    int final = 0;

    for (int i = 1; i <= element; i++)
    {
        cout << result;
        if (i == element)
        {
            cout << " = ";
        }
        else
        {
            cout << " * ";
        }

        final = final + result;
        result = result * multiply;
    }

    cout << final;
}
int main()
{
    int choice;
    char again;

    do
    {
        printMenu();
        cin >> choice;

        if (choice > 3 || choice < 1) 
        {
            return 0;
        }

        else if (choice == 1) 
        {
            factorial();
        }
        else if (choice == 2) 
        {
            arithmetic();
        }
        else if (choice == 3) 
        {
            geometric();
        }

        cout << "\nGo Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
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
