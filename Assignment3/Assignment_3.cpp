#include<iostream>
#include<conio.h>
#include<cstdio>
using namespace std; 

class  Check_even_odd{
        int number;
    public:
        Check_even_odd()                            //default constructor
        {
            number = 0;
        }   
        Check_even_odd(int p)                   //parametrized constructor
        {
            number =p;
        }

        void check_num()                           // function to check if number is even or odd
        {
            if(number%2 == 0)
            {
                cout<< number << "is even number \n"<<endl;
            }
            else
            {
                cout<<number <<" is odd number \n"<<endl;
            }
        }
};

int main()
{
    int num;
    char input;

    do{
        cout<<"\n Enter number you want to check"<<endl;
        cin>>num;
        Check_even_odd obj1(num) ;
        obj1.check_num();
        cout<<"Press 'Y' to check another number else press 'N'  "<<endl; 
        cin>>input;
    }while(input == 'y' || input == 'Y');

    cout<<"Program Terminated"<<endl;
    return 0;
}