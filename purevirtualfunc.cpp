#include <iostream>

using namespace std;

class student
{
    protected:
        int score;
        char name;

    public:
        virtual void calc_score()=0;

         student(int s,char c)
        {
            score = s;
            name = c;

        }
        void getname()
        {
            cout<<"Enter roll number: ";
            cin>>name;
        }
};

class subject : public student
{
        char sub;
    public:

        subject(char sb, int marks,char cn):student(marks,cn)
        {
            sub = sb;
        }

        void calc_score()
        {

            cout<<name<< " scored "<<score <<"% in " << sub;
        }

};

int main()
{
    subject obj('A', 90, 'C');
    obj.calc_score();
    return 0;
}
