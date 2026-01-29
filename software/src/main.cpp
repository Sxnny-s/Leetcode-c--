// here is the main.cpp (entry point)
#include <iostream>

using namespace std;

int main(){

    // make square
    int height;
    cout << "How high would you like your triangle? ";
    cin >> height; 
    int stars {1};
    for(int i {}; i < height; i++){
        for(int j {}; j < stars;j++){
            cout << "*" ;
        }
        stars++;
        cout << '\n';
    }
   

    
    return 0;
}