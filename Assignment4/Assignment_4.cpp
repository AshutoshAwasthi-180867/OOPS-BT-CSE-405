#include<iostream>
#include<conio.h>
using namespace std; 

class Array_display
{
        int *arr;
        int size;
    public:
        Array_display()
        {
            size = 5;
            arr = new int[size];
        }
        Array_display(int t)
        {
            size = t;
            arr = new int[size];
        }

        void get_data(int data,int i)
        {
            arr[i] = data;
        }

        void display_data()
        {
            cout<<"The data entered is"<<endl;
            for(int i=0; i<size; i++)
            {
                cout<<arr[i] ;
                cout<<"\t";
            }
        }
};



int main()
{

    int num;
    int data;
    cout<<"Enter number of elements you want in array"<<endl;
    cin>>num;
    
    Array_display obj(num);

    cout<<"Enter data"<<endl;
    for(int i=0; i<num; i++)
    {
        cin>>data;
        obj.get_data(data,i);
    }
    obj.display_data();
    return 0;
}