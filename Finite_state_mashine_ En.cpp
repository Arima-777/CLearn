#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (void)
{
    int m;
    srand(time(NULL)); // рандом
  int s=1;// первое состояние
  int sum; // сумма для снятия
  int cashe; // доступно для снятия на счету
  cashe=20000 + rand() % 100000; //от 20к до 100к


  while (true) //
  {
    switch(s)
    {
      case 1: // первое состояние
      {
        cout<<"Hello. Please, enrer "1" to know account balance";
        cin>>m;
        if(m!=1)
        {
          cout<<"The number you entered is not valid, please correct it and try again.";
          s=1;
          cout <<endl;
          break;
        }
        s=2;
        break;
      }
      case 2: //
      {
        cout <<"your balance is:"<<' '<<cashe<<' ';
        s=3;
        break;
      }
      case 3: //
      {
        cout <<"Input the amount you'd like to withdraw."<<' ';
        cin>>sum;
        if (sum>cashe)
        {
          cout<<" You can not cash out more than you have in the account.";
          cout<<endl;
          s=3;
          break;
        }
      cout<<endl;
      cout<<"Cashed out:"<<sum;
      cout<<endl;
      cashe=cashe-sum; // вычисляем остаток
      cout<<"Awailable for withdrawal:";
      cout<<cashe;
      s=1;
      break;
      }
    }
  }
    return 0;
}