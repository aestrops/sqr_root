#include <iostream>
using namespace std;

int main ()
{
    int status = 1;
    bool status2 = false;
    int add = 1*status;
    int quest;
    cin>>quest;
    int test = 1;
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
            if (status == true)
            {
                add = add/10;
            }
        }
        if(test*test == quest)
        {
            cout<<test;
        }
    }
}