#include <iostream>

using namespace std;
// Declaration of global value
int nbus= 0, ncar= 0, nbike= 0, amount= 0, count= 0;


int  Menu(){
    int choice;
    cout << "-------------------------------------"<<endl;
    cout << "Press 1 for Bus          :"<<endl;
    cout << "Press 2 for Car          :"<<endl;
    cout << "Press 3 for Bike         :"<<endl;
    cout << "Press 4 for Details      :"<<endl;
    cout << "Press 5 for Delete       :"<<endl;
    cout << "Press 6 for Exit         :"<<endl;
    cout << "-------------------------------------"<<endl;
    cout << "Enter the choice  ";
    cin >> choice;
    return choice;
}
void Bus(){
    nbus++;
    amount = amount + 100;
    count++;
}
void Car(){
    ncar++;
    amount = amount + 75;
    count++;
}
void Bike(){
    nbike++;
    amount = amount + 50;
    count++;
}
void Show(){
    cout << "-------------------------------------"<<endl;
    cout << "Buses "<< nbus << endl;
    cout << "Car "<< ncar << endl;
    cout << "Bike "<< nbike << endl;
    cout << "Total vehicles "<< count << endl;
    cout << "-------------------------------------"<<endl;
    cout << "Amount $ "<< amount << endl;
    cout << "-------------------------------------"<<endl;
    
}
void Delete(){
    nbus = 0;
    ncar = 0;
    nbike = 0;
    amount = 0;
    count = 0;
}

 
int main(){
    int b;
    do{
    switch (Menu())
    {
    case 1:
        Bus();
        break;
    case 2:
        Car();
        break;
    case 3:
        Bike();
        break;
    case 4:
        Show();
        break;
    case 5:
        Delete();
        break;
    }
    cout << "Please Enter 0 to add more vehicles and see details  " << endl;
    
    cin >> b;
    }while (b == 0);
    
         
    return 0;
}

