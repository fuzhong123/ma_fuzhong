#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a,b;
        loop:
            srand(time(NULL));

            int face = rand()%1001;

        cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."<<endl;
        cin>>a;
        if(a==face)
        {
            cout<<"Excellent!You guessed the number!\nWould you like to play again (输入1继续游戏)?"<<endl;
            cin>>b;
            if(b==1)
                goto loop;
            else
                return 0;
        }
        else
        while (a!=face)
        {
            if(a>face)
            {

                cout<<"Too high.Try again."<<endl;
                cin>>a;
            }
            else
            {
            cout<<"Too low.Try again."<<endl;
            cin>>a;
            }

        }
        cout<<"Excellent!You guessed the number!\nWould you like to play again (输入1继续游戏)?"<<endl;
            cin>>b;
            if(b==1)
                goto loop;
            else
                return 0;



    return 0;
}
