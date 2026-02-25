//lab 0 : file contains a small math program
//Author: Issa
#include <iostream>

using namespace std;


//Prototypes
double sumTwoNum(double num1, double num2);



//shows the menu
int main()
{
    int choice;
    
    do{
        cout<<"0) Exit"<<endl;
        cout<<"1) Sum Two Numbers"<<endl;
        cout<<"2) Calculate Area of Circle"<<endl;
        cout<<"3) Calculate Circumfrance of Circle"<<endl;
        cout<<"4) Calculate Price With VAT"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        
        
        switch (choice)
        {
            case 0://no code needed
                break;
            case 1:
            {
                cout<<"Sum is "<<sumTwoNum(4,2)<<endl; //todo
            }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
            {
                cout<<"Wrong Choice"<<endl;
                break;
            }
        }
    }
    
        while (choice!=0);
        
        
    cout<<"Please come back soon"<<endl;
    
    return 0;
    
    }
    
double sumTwoNum(double num1, double num2)
{
    return num1+num2;
}


