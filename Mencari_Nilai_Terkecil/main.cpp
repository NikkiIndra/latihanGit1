#include <iostream>
using namespace std;

int main(){
    /*
    
    PENJELASAN...............

    terdapat deklarasi 3 variabel, yakni input[100], arr_count, dan min_num.

    Variabel input[100] dipakai untuk menampung semua angka inputan. 
    Karena di set dengan angka 100, maka inilah jumlah maksimum element array.

    Namun user tidak harus menginput 100 angka sekaligus.
    Jumlahnya akan diminta akan disimpan ke dalam variabel arr_count. 
    User hanya perlu menginput sejumlah nilai arr_count ini saja.

    Misalnya jika diinput angka 5, maka hanya perlu mengisi 5 angka awal.
    Proses pembacaan data ini dilakukan oleh perulangan for.

    Proses pencarian angka terkecil di lakukan Sebelum perulangan, 
    variabel min_num akan diisi dengan 'nilai element "pertama" array' input. Inilah nilai terkecil sementara.

    Masuk ke struktur for, kita akan buat perulangan untuk memeriksa 
    sisa element array apakah ada yang lebih kecil dari isi min_num atau tidak. 
    Pemeriksaan ini dilakukan dengan perintah if(input[i] < min_num).

    Jika kondisi tersebut menghasilkan nilai true, 
    ambil nilai element array tersebut dan simpan sebagai nilai baru ke dalam 'variabel min_num'. 
    Dengan cara ini, setelah perulangan selesai " min_num" akan "berisi angka terkecil" dari semua element array.
*/
    unsigned short int input_arr[100], arr_count, arr_first;

    cout << "Banyaknya angka[limit 100 inputan]: ";
    cin  >> arr_count;
    
    // Perulangan pertama untuk menampung semua inputan ke dalam array.
    for(unsigned short int i = 1; i <= arr_count; i++){
        cout << "Masukan angka ke-" << i << " = ";
        cin >> input_arr[i];
    }

    /*
    dan perulangan kedua untuk proses pencarian nilai terkecil .
    variable angka bertipe array dengan mengambil index ke-0 di masukan ke variable first_num
    jadi first_num berisi inputan pertama
    */
    arr_first = input_arr[0];
    for (unsigned short int i = 1; i <= arr_count; i++){
        if (input_arr[i] <= arr_first){    // jikalau inputan ada yang lebih kecil dari inputan pertama
            arr_first = input_arr[i];     // maka dia akan mengisi variable arr_first
        }  
    }

    cout  << "Angka terkecil adalah: " << arr_first;
    cout << endl;
    return 0;
}
    