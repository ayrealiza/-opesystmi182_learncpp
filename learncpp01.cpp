#include <iostream>
using namespace std;
int main()
{
        int arr[]={12,23,78,98,67,56,45,19,65,9},key,i,flag=0;
        cout << "\nENTER A NUMBER: ";
        cin >> key;
        for(i=0;i<10;i++)
        {
                if(key==arr[i])
                        flag=1;
        }
        if(flag==1)
                cout << "\nTHE NUMBER " << key << " EXISTS IN THE ARRAY\n",key;
        else
cout << "\nTHE NUMBER " << key << " DOES NOT EXIST IN THE ARRAY\n",key;
        
}

