#include <iostream> // imports the "iostream"
using namespace std; //tells the compiler you are using the std namespace so you dont have to write specifc std commands

int main() //start of the program(once things have been imported etc. - is called by the operating system when the prgram is run
{
    char op; //declares variable
    float num1, num2; //declares num1 and num2 as floating point(numbers)
    cout << "Welcome to my calculator Mr Sharland!\n"; //prints text and then creates new line
    cout << "Enter operator either + - * /\n"; // prints text and creates new line
    cin >> op; // asks for input and asigns it to op

    cout << "Enter the first number: "; // prints text
    cin >> num1; // asks for input and asigns it to num1
    cout << "Enter the second number: "; // prints text
    cin>> num2; // asks for input and asigns it to num2

    switch(op)//tests if "op" is a certain thing listed below
    {
        case '+'://if it is "+"
            cout <<"the answer is "; // prints text
            cout<<num1+num2; // prints the calculation of two variables
            break; //breaks out of the if statement

        case '-'://if it is "-"
            cout <<"the answer is "; // prints text
            cout<<num1-num2; // prints the calculation of two variables
            break; //breaks out of the if statement

        case '*'://if it is "*"
            cout <<"the answer is "; // prints text
            cout<<num1*num2; // prints the calculation of two variables
            break; //breaks out of the if statement

        case '/'://if it is "/"
            cout <<"the answer is "; // prints text
            cout<<num1/num2; // prints the calculation of two variables
            break; //breaks out of the if statement

        default://otherwise this
            cout << "Error!!!!!! unknown operator"; // prints text
            break; //breaks out of the if statement
    } 

    return 0; //shows the exit status of 0(success)
}
