#include<iostream>
#include<cstdlib>
using namespace std;
class matrix
{
        int m,n;
        int **a;
    public:
        matrix()
        {
            m=3;
            n=3;
            a=new int *[3];
            for(int i=0;i<3;i++)
            {
                a[i]=new int[3];
            }
        }
        matrix(int r,int c)
        {
            m=r;
            n=c;
            a=new int *[n];
            for(int i=0;i<n;i++)
            {
                a[i]=new int[m];
            }
        }
        void getdata(int item,int i,int j)
        {
            a[i][j]=item;
        }
        void display(void)
        {
            for(int i=0;i<m;i++)
            {   
                for(int j=0;j<n;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
};
int main()
{
    int item,m,n;
    cout<<"enter no of rows and columns"<<endl;
    cin>>m;
    cin>>n;
    matrix ob1(m,n);
    cout<<"enter data"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>item;
            ob1.getdata(item,i,j);
        }
    }
    ob1.display();
    return 0;
}