#include <iostream>
#include <string>
using namespace std;

class calculator{
    public :
        int add(double a, double b){
            return a+b;
        }
        int sub(double a, double b){
            return a - b;
        }
        int multiply(double a, double b){
            return a * b;
        }
        int divide(double a, double b){
            return a / b;
        }
};

int main(){
    calculator myobj;
    double x , y;
    char op;
    
    cout << "Enter a first number: ";
    cin >> x;
    cout << "Enter a Second number: " << endl;
    cin >> y;
    cout << "Enter a Operator value: " << endl;
    cin >> op;

    if(op == '+'){
        double result = myobj.add(x,y);
        cout << result;
    }else if(op == '-'){
        double result = myobj.sub(x,y);
        cout << result;
    }else if(op == '*'){
        double result = myobj.multiply(x,y);
        cout << result;
    }else{
        double result = myobj.divide(x,y);
        cout << result;
    }

    return 0;
}