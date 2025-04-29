#include <iostream>
using namespace std;

int main(){

    int count;
    cout << "Enter a no. = " << endl;
    cin >> count;

    for (int i = 1; i <= count; i++){
        cout << 1 + (i - 1)*2 << " ";
    }
    return 0;
}