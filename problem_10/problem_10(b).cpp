#include<iostream>
#include<cstring>
using namespace std;
class Name
{
        char first_name[20];
        char middle_name[20];
        char last_name[20];
    public:
        Name(Name &t)
        {
            strcpy(first_name,t.first_name);
            strcpy(middle_name,t.middle_name);
            strcpy(last_name,t.last_name);   
            cout<<"\n\n###########      copy constructor called      ##############\n\n"<<endl;;
        }
        Name(char first[20],char middle[20],char last[20])
        {
            strcpy(first_name,first);
            strcpy(middle_name,middle);
            strcpy(last_name,last);   
            cout<<"\n\n###########      parametrized constructor called      ##############\n\n"<<endl;
        }
        void show(void)
        {
            cout<<"first name -"<<first_name<<endl;
           cout<<"middle name -"<<middle_name<<endl;
            cout<<"last name -"<<last_name<<endl;
        }
};
int main()
{
    char first[20], middle[20], last[20];
    cout<<"enter first name"<<endl;
    cin>>first;
    cout<<"enter middle name"<<endl;
    cin>>middle;
    cout<<"enter last name"<<endl;
    cin>>last;
    Name t1(first,middle,last);
    t1.show();
    Name t2=t1;
    t2.show();
    return 0;

}