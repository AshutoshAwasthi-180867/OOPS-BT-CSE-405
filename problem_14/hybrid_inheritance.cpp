#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void get_no(int a)
        {
            roll_no = a;
        }
        void display_no()
        {
            cout<<"ROLL NO. = "<<roll_no<<endl;
        }
};

class Test : public Student
{
    protected:
        float part1,part2;
    public:
        void get_marks(float a, float b)
        {
            part1 = a;
            part2 = b;
        }
        void display_marks()
        {
            cout<<" MARKS OBTAINED \n";
            cout<<"Part 1 = "<<part1<<endl;
            cout<<"Part 2 = "<<part2<<endl;
        }
};

class Sports
{
    protected:
        float score;
    public:
        void get_score(int a)
        {
            score = a;
        }
        void display_score()
        {
            cout<<"Score = "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
        float total;
    public:
        void display()
        {
            total = part1 + part2;
            cout<<"\n\n";
            display_no();
            display_marks();
            display_score();
            cout<<"Total Score = "<<total<<endl;
            cout<<"\n\n";
        }
};

int main()
{
    Result stu1;
    stu1.get_no(1);
    stu1.get_marks(80,90);
    stu1.get_score(78);
    stu1.display();
    return 0;
}