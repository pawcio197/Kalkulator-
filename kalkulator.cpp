#include <iostream>
#include <conio.h>
#include <ctime>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"
#include "dzielenie.h"
#include <string>

using namespace std;

int main() 
{
char wybor;
int a,b;
cout<<"Co chcesz zrobic?"<<endl;
cout<<"1)Mnozenie"<<endl;
cout<<"2)Dzielenie"<<endl;
cout<<"3)Dodawanie"<<endl;
cout<<"4)Odejmowanie"<<endl;
cin >>wybor;
if(wybor = '1'){
cout<<mnozenie(&a,&b);

}
else if (wybor ='2'){
cout<<dzielenie(&a,&b);
}
else if (wybor ='3'){
cout<<dodawanie(&a,&b);
}
else if (wybor ='4'){
cout<<odejmowanie(&a,&b);
}
else{
cout << "Nie wybrales zadnej opcji"<<endl;
}
return 0;
}
