#include<iostream>
using namespace std;

int main()
{
        int num1;
        int num2;
        cout << "Smaller/Greater than identifier \n";
        cout <<"enter the first number: ";
        cin >> num1;
        cout << "enter the second number: ";
        cin >> num2;
        if(num1<num2)           //test-condition
        {
                cout << num1;
                cout << " is smaller than ";
                cout << num2 << " \n";
        }
        else if(num1 == num2)
        {
                cout << num1 << " is same to " << num2 << "\n" ;
        }
        else{
                cout << num1 << " is larger than " << num2 << "\n";
        }
        return 0;


}
