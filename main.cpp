#include <iostream>
#include <cstdlib>
#include "time.h"
#include "conio.h"

using namespace std;

int main()
{

    int user, comp;
    srand(time(NULL));
    char* x[3] = {"Rock", "Scissors", "Paper"};
    for(;;)
    {
        cout<< "1. "<< x[0]
            << "\n2. "<< x[1]
            << "\n3. "<< x[2]
            << "\nYor choise: ";
        do {cin>> user; } while (user > 3 || user < 1);
        user--;
        comp = rand() % 3;
        cout<< "You: "<< x[user]
            << "\nComp: "<< x[comp]<< endl;
        if (user == comp) cout<< "Draw" <<endl;
        else
        if ((user == 0 && comp == 1) ||
            (user == 1 && comp == 2) ||
            (user == 2 && comp == 0))
cout<< "You win"<<endl;
        else cout<< "You lose"<<endl;
        if (getch()!= 'e') continue;
        else break;
    }
    return 0;
}
