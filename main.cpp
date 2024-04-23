#include <iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main()
{


    srand(time(0));

    cout <<"!\t\t\t\t\t welcome to guess the number..game\a \t\t\t\t\t!" << endl;
    cout <<"!you have to guess a number between 1 end 100..you 11 have limited choices based on the level you choose   good luck !" <<endl;
    system("color 5f");
    int input,d,limet;
    cout<<"1-Eisy "<<endl;
    cout<<"2-Normel"<<endl;
    cout<<"3-Hered "<<endl;
    cout<<"4-Output "<<endl;
    cin>>d;
    switch (d)
    {
    case 1 :
        limet = 15 ;
        break ;
    case 2 :
        limet = 10 ;
        break ;
    case 3 :
        limet = 5 ;
        break ;
    case 4 :
        limet = 3 ;
        break ;
    default :
        cout<<"Invalid input"<<endl;
    }
    int guess = 1 +(rand() % 100);
    cout <<"\t\t\t\t\a guess the number ( 1 to 100)\t\t\t\t\t!"<<endl;
    cin>>input;
    int i = 0;
    while (i < limet)
    {
        if(input < guess)
        {
            cout <<"choose a beger number"<<endl;
        }
        else if(input > guess)
        {
            cout <<"choose a smaller number"<<endl;

        }
        else
        {
            cout <<"\t\t\t\t\tcongratulation! the number was " <<guess <<endl;
            break;
        }


        i++;
        cin>>input;


    }
    cout <<"\t\t\t\t\a thanks for playing....."<<endl;
    return 0;
}
