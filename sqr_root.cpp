#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    bool status2 = false;
    double add = 1.0;
    double quest;
    cin>>quest;
    double test = 1.0;
    double test2;
    cout<<setprecision(15);
    while (test*test != quest)
    {
        if (test*test < quest)
        {
            test = test+add;
            status2 = true;
        }
        if (test*test > quest)
        {
            test = test-add;
            if (status2 == true)
            {
                add = add/10;
                status2 = false;
            }
        }
        if (test*test == quest)
        {
            cout<<test;
            cout<<"\n";
        }
        if (test2 == test && status2 == true)
        {
            cout<<test<<"\n";
            break;
        }
        test2 = test;
    }
}