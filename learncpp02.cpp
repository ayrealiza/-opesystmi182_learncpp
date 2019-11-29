#include<iostream>
using namespace std;

int main()
{
        int num1;
        int num2;
        cout <<"enter a number for num1:";
        cin >> num1;
        cout << "enter a number for num2:";
        cin >> num2;
        if(num1<num2)           //test-condition
        {
                cout << num1;
                cout << " is smaller than ";
                cout << num2;
        }
        else{
                cout << "num2\n" << num2;
                cout <<"is smaller than num1\n";
                cout <<"num1\n" << num1;
        }
        return 0;

}

