#include <iostream>


using namespace std;

int main()
{

    int inputNumber = 0;
    cin>>inputNumber;
    for(int i=inputNumber; i<inputNumber+12; i++)
    {
        if(i%2 != 0){
            cout<<i<<endl;
        }

    }
    return 0;
}
