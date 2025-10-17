#include <iostream>

using namespace std;

int main(){
int x;
cout << "Masukkan bilangan: "; cin >> x;
if(x % 2 == 0){
    cout << "Bilangan ini berupa bilangan Genap" << endl;
} else{
    cout << "Bilangan ini berupa bilangan Ganjil" << endl;
}
    return 0;
}