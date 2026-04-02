#include <iostream>
using namespace std;

int main() {
    cout << "Hello from C++!" << endl;
    cout << "This program has " << sizeof(int) << " bytes in an int." << endl;
    
    cout << "\nAppuyez sur Entree pour quitter...";
    cin.get(); // Equivalent en C++ [cite: 184]
    return 0;
}