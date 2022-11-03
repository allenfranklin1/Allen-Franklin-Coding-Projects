#include <iostream>
using namespace std;
int main()
{
    cout<<"Please Select the choice from the menu below"<< endl; 
    cout<<"A: Coffee $1.00; B: Tea $0.75; C: Hot Chocolate $1.25; D: Cappuccino $2.50"<< endl;
    char choice;
    do{
        cin>>choice;
    switch (choice) { 
    case 'A':
    cout << "Coffee $1.00"<<endl;
       break;
    case 'B':
    cout << "Tea $0.75"<<endl;
       break;
   case 'C':
    cout << "Hot Chocolate $1.25"<<endl;
       break;
   case 'D':
    cout << "Cappuccino $2.50"<<endl;
       break;
   
  }
    }while(choice!='E');  
    return 0;
}
