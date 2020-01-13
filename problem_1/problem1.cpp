/*   PROBLEM 1 : Raising a number n to a power p  is the same as multiplying n by itself p times. Write a function called power () that takes  
a double value for n and an int value for p,and returns the result as double value.Use a default argument of 2 for p, so that  if this argument is 
omittted, the number will be squared. Write a main() function that gets values from the user to test this function.                                            */

#include<iostream>
using namespace std;
int power(double n,int p=2)
{
    double res=1;
    for(int i=0;i<p;i++)
        res=res*n;
    return res;
}
int print(int res)
{
    cout<<"result is "<<res<<endl;
    return 0;
}

int main()
{
    int p;
    double n,  result;
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"enter value of power"<<endl;
    cin>>p;
    result=power(n,p);
    print(result);
    return 0;
}
