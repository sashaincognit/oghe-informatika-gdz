#include <iostream>
using namespace std;

int main() {
    const int sz = 5;
    int arr[sz]{12, 45, 16, 78, 75};
    
     for(int i = 0; i < sz; i++)
     {
        if(arr[i] % 2 == 0 && arr[i] % 10 == 5) 
            cout << arr[i] << endl;
         
     }
}
