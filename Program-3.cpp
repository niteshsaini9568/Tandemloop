#include <iostream>
using namespace std;

int main(){

    int count;
    cout << "Enter a no." << endl;
    cin >> count;
    
    if(count % 2 == 0){
        count -= 1;
    }

    int next = 1;
    cout << next << " ";

    for(int i = 1; i < count; i++){
        next += 2;
        cout << next << " ";
    }

    
    return 0;
}