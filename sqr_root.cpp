#include <iostream>
using namespace std;

int main ()
{
    bool status2 = false;
    float add = 1.0;
    float quest;
    cin>>quest;
    float test = 1.0;
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
            }
        }
        if(test*test == quest)
        {
            cout<<test;
            cout<<"\n";
        }
    }
}