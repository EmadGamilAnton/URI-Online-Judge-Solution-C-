#include <iostream>


using namespace std;

int main()
{

    int inputNumberX = 0;
    int inputNumberY = 0;
    int sum=0;

    cin>>inputNumberX>>inputNumberY;


    if(inputNumberX == inputNumberY)
        cout<<sum<<endl;
    else if(inputNumberX < inputNumberY)
    {
        for(inputNumberX=inputNumberX+1;inputNumberX<inputNumberY;inputNumberX++)
        {
            if(inputNumberX%2==1||inputNumberX%2==-1)
                sum+=inputNumberX;
        }
        cout<<sum<<endl;
    }
    else if(inputNumberX>inputNumberY)
    {
        for(inputNumberY=inputNumberY+1;inputNumberY<inputNumberX;inputNumberY++)
        {
            if(inputNumberY%2==1||inputNumberY%2==-1)
                sum+=inputNumberY;
        }
        cout<<sum<<endl;
    }
    return 0;
}
