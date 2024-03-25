//1.Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen?
//Insertion Sort membandingkan dengan cara true or false bisa ascending atau descending, dimulai dari banyaknya index=n lalu dicocokan dari yang paling kiri, dimulai dari nomor index 0 dicocokan dengan index 1 (n = n+1) jika index 1 lebih kecil dari index 0 (true) maka index 1 tukar dengan index 0, seterusnya index 1 dengan 2 jika index 2 lebih kecil dari index 1 (true) maka adakan pertukaran setelah itu balik lagi cocokan dengan yang sebelumnya alias index 0 jika index 1 yang sudah ditukar dengan index 2 masih lebih kecil dari index 0 maka adakan pertukaran index 1 dan index 0 dan jika tidak maka berhenti di index 1. lalu beralih ke index 2 dan index 3 lakukan cara yang sama jika true maka tukar dan bandingkan lg ke index 1 jika masih true tukar lg dan bandingkan index 0 jika true maka tukar lg ke pindah ke index 0. Insertion sort ini memiliki n-1 tahapan jika ada 5 index maka ada 4 tahapan.
//2.Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen.?
// Selection sort mencari nilai ascending atau descending seperti mengurutkan kartu namun memiliki 2 wadah kartu yang kosong(sebut x, y) guna untuk menukar urutannya, dimulai dari banyaknya index=n saya memiliki n index,langkah pertama ambil index nomor 0 yang paling kiri lalu pisahkan dan letakkan di wadah x dan bandingkan dari index nomor 1 dan 2 jika false maka tidak di tukar dan lanjut ke index 2 dan 3 jika true maka index nomor 3 pindahkan ke wadah y dan index di wadah x serta index di wadah y kita tukarkan di urutan hasil dari pembading tersebut. contoh 4,6,3 mulai dari 4=x bandingkan 6 dan 4 apakah 6<4 jika false maka biarkan dan lanjut apakah 3<4 jika true maka masukan wadah y=3 dan tukarkan hasil simpanan dari wadah x dan y ke nomor index yang berlawanan.
//3.Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.
//cara mengetahui jumlah langkah yang dilakukan seperti berapa kali pengulangan yang dilakukan hanya melihat dari banyaknya jumlah data lalu dikurangi 1 (n-1), dan untuk menampilkan jumlahnya lakukan sintak seperti cout << "jumlah langkah =" << n - 1 << endl;
#include <iostream>
using namespace std;
int n;
int Irfansyah[23];

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array =";
        cin >> n;
        if (n <= 23)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }

    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> Irfansyah[i];
    }
}

void selectionSort(int Irfansyah[], int n) {
    int  j, min_index;

    for (j = 0; j <= n - 2; j++) { //step 1
       int min_index = j; //step 2a

       for (int i = j + 1; i < n; i++) { //step 2b
           if (Irfansyah[i] < Irfansyah[min_index]) { //step 2c
               min_index = i; //step 2c.i
           }
       }
        swap(Irfansyah[j], Irfansyah[min_index]); //step 3
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << Irfansyah[j] << endl; // output setiap element array pada garis baru
    }
    cout << "jumlah pass =" << n - 1 << endl; // menampilkan total angka dari elemen yang benar
    cout << endl;
}

int main()
{
    input(); //memanggil prosedur untuk menginput data
    selectionSort(Irfansyah, n); //memanggil prosedur bubbblesort untuk proses mengurutkan data
    display(); //memanggil prosedur untuk menampilkan data yang telah urut
    system("pause");

    return 0;
}
