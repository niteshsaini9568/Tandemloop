#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int x;
    cout << "Enter length of the array: ";
    cin >> x;

    vector<int> y(x);

    cout << "Enter " << x << " elements:" << endl;
    for(int i = 0; i < x; i++) {
        cin >> y[i];
    }

    int count = 0;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < x; j++){
            if(y[j] % arr[i] == 0){
                count++;
            }
        }
        cout << i + 1  << ":" << count << endl;
        count = 0;
    }
    

    return 0;
}
