// COMSC-210 | Lab 3A | Fahad Fawad Ahmad
// IDE used: Visual Studio
#include <iostream>

using namespace std;

struct Restaurant{
    int hourOpen;
    int hourClose;
    string type;
    string address;
    int rating;
};

Restaurant initializer();
void printData(Restaurant);

int main() {
    Restaurant restaurantInputted = initializer();  
    printData(restaurantInputted);
}

// initializer() asks the user for input and intitializes a struct with the data
// arguments: no arguments
// returns: returns a struct
Restaurant initializer(){
    Restaurant restaurantInput;
    cout << "Restaurant Info:" << endl;
    cout << "Enter hour restaurant opens(24hr)" << endl;
    cin >> restaurantInput.hourOpen;
    cout << "Enter hour restaurant closes(24hr)" << endl;
    cin >> restaurantInput.hourClose;

    while (restaurantInput.hourOpen >= 24 or restaurantInput.hourOpen < 0 or restaurantInput.hourClose >= 24 or restaurantInput.hourClose < 0){
        cout << "Hours entered wrong, must be within 0-23" << endl;
        cin >> restaurantInput.rating;
    } 

    cout << "Enter type of restaurant cuisine" << endl;
    cin >> restaurantInput.type;

    cout << "Enter restaurant address" << endl;
    cin >> restaurantInput.address;

    cout << "Enter restaurant rating(1-5)" << endl;
    cin >> restaurantInput.rating;
    while (restaurantInput.rating > 5 or restaurantInput.rating < 1){
        cout << "Value must be within 1-5" << endl;
        cin >> restaurantInput.rating;
    }

    return restaurantInput;
}

// printData() prints the data given
// arguments: struct Restaurant
// returns: does not return
void printData(Restaurant restaurantData){
    cout << "Restaurant opens at " << restaurantData.hourOpen << " and closes at " << restaurantData.hourClose << endl;
    cout << "Restaurant is a(n) " << restaurantData.type << " type of restaurant" << endl;
    cout << "Restaurant address is " << restaurantData.address << endl;
    cout << "Restaurant rating is " << restaurantData.rating << " stars" << endl;
}