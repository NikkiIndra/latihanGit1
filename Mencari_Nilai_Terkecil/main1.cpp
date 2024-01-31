#include <iostream>
using namespace std;

int main(){
    int angka[100], input, first_num;

    cout <<"Banyaknya angka : ";
    cin >> input;

    for (int i = 1; i <= input; i++){
        cout << "Angka ke-" << i << " = ";
        cin >> angka[i];
    }


    first_num = angka[0];
    for (int i = 0; i <= input; i++){
        if(angka[i] < first_num ){ 
            first_num = angka[i];  
        }
    }
    cout << endl;
    cout << "Angka terkecil = " << first_num << endl;
    
    return 0;
}