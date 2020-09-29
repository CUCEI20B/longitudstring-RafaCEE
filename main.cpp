#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    //cin >> cadena;
    getline(cin, cadena);
    cout << cadena.size() << endl;

    system("pause");
    return 0;
    
}