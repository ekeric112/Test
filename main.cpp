#include <iostream>
using namespace std;

void firstMethod();

int main() {
    cout << "Hello WOrld" << endl;
    cout << "Sike! Now I changed the file on CLion!\n";
    firstMethod();
    return 0;
}

void firstMethod(){
    cout << "Now I just have a function!\n";
}
