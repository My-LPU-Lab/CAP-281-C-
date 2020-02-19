#include <iostream>

using namespace std;

class Circle
{
        int r;
    public:
        void getradius(int x)
        {
            r = x;
        }
        friend float calcA(Circle);
};

float calcA(Circle obj)
{
    Circle *p = &obj;
    int Circle::*pr = &Circle::r;

    float area;
    area = 3.14*(*p).*pr*(*p).*pr;
    return area;
}

int main()
{
   Circle obj;
    int r;
    cout<<"Please enter radius: ";
    cin>>r;
    void (Circle::*p1) (int) = &Circle::getradius;

   (obj.*p1)(r);

    cout<<calcA(obj);

    //cout << "Hello world!" << endl;
    return 0;
}
