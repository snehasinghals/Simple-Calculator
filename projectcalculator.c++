#include<iostream>
using namespace std;
int main()
{
    //define variables
    char choice;
    double number1,number2;
    //get user input
    cout<<"Enter first number:";
    cin>>number1;
    cout<<"Enter operation(+,-,*,/): ";
    cin>>choice;
    cout<<"Enter second number:";
    cin>>number2;
    //switch-case condition checking entered operation
    switch(choice)
    {
        case '+':cout<<"answer: "<<number1+number2;
                 break;
        case '-':cout<<"answer: "<<number1-number2;
                 break;
        case '*':cout<<"answer: "<<number1*number2;
                 break;
        case '/':cout<<"answer: "<<number1/number2;
                 break;
        default:cout<<"not a recognised operation!!";
    }
    cout<<endl<<"Thanku!!";
    return 0;
}