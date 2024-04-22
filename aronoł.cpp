//#include <iostream>
//#include<fstream> //dodana biblioteka pozwalająca pracować z plikami
//
//using namespace std;
//
//int s(int silnia) {
//    if (silnia == 0 || silnia == 1) return 1;
//    else return silnia * s(silnia - 1);
//}
//
//int main()
//{
//    //zapis do pliku
//    ofstream zapis_do_pliku("dane.txt"); //zapis_do_pliku to nazwa strumienia plikowego, będziemy się nią posługiwać przy zapisie czegoś do pliku
//    if (!zapis_do_pliku.is_open())
//    {
//        cout << "Brak dostępu do pliku";
//    }
//
//    zapis_do_pliku << "Kasia" << endl; //ta linijka oznacza : wyślij napis Kasia do pliku, określonego w strumieniu plikowym, czyli dane.txt
//    zapis_do_pliku << "Bracha" << endl;
//    zapis_do_pliku << 27 << endl; //tu zapisujemy liczbę. Nie używamy cudzysłowów.
//
//
//    int wiek, silnia;
//    string imie, nazwisko;
//    //pobrane dane od użytkownika :
//    cout << "Podaj swoje imie" << endl;
//    cin >> imie;
//    cout << "Podaj swoje nazwisko" << endl;
//    cin >> nazwisko;
//    cout << "Ile masz lat?" << endl;
//    cin >> wiek;
//    cout << "Podaj liczbe: ";
//    cin >> silnia;
//
//    ofstream zapis_do_pliku2("dane2.txt"); //tworzymy nowy strumień plikowy, ponieważ będziemy pracować z nowym plikiem
//    if (!zapis_do_pliku2.is_open())
//    {
//        cout << "Brak dostępu do pliku";
//    }
//    zapis_do_pliku2 << imie << endl; //ta linijka oznacza : wyślij dane pobrane do zmienniej imię do pliku, określonego w strumieniu plikowym, czyli dane2.txt
//    zapis_do_pliku2 << nazwisko << endl;
//    zapis_do_pliku2 << wiek << endl;
//    if (wiek < 10 && wiek > 2) {
//       zapis_do_pliku2 << "Zabij sie" << endl;
//    }
//    zapis_do_pliku2 << s(silnia) << endl;
//
//    // sprawdźcie czy w katalogu z projektem zostały umieszczone powyższe dane.
//
//    return 0;
//}

#include <iostream>
#include <string>
#include<fstream> //dodana biblioteka pozwalaj¹ca pracowaæ z plikami

using namespace std;

int main()

/* !!!!UWAGA,by kod zadziałał należy stworzyć pliki o nazwie dane1.txt, dane2.txt, dane3.txt, zawierające w osobnych linijkach Imie, nazwisko oraz wiek i umieścić je w folderze z projektem*/
{
    string odczyt, o_imie, o_nazwisko;
    int o_wiek;

    ifstream odczyt_z_pliku("dane1.txt"); //tworzymy nowy strumień plikowy  do pliku dane1.txt

    if (!odczyt_z_pliku.is_open())
    {
        cout << "Brak dostepu do pliku";  //sprawdzamy czy mamy dostęp do pliku
    }


    //odczyt całej lini
    getline(odczyt_z_pliku, odczyt);
    cout << odczyt << endl;

    // lol


    ifstream odczyt_z_pliku2("dane2.txt"); //tworzymy nowy strumień plikowy  do pliku dane2.txt

    if (!odczyt_z_pliku2.is_open())
    {
        cout << "Brak dostepu do pliku";  //sprawdzamy czy mamy dostęp do pliku
    }


    //odczyt słowo po słowie
    odczyt_z_pliku2 >> o_imie;
    odczyt_z_pliku2 >> o_nazwisko;
    odczyt_z_pliku2 >> o_wiek;
    cout << o_imie << " " << o_nazwisko << " " << o_wiek << endl;








    ifstream odczyt_z_pliku3("dane3.txt"); //tworzymy nowy strumień plikowy  do pliku dane3.txt

    if (!odczyt_z_pliku3.is_open())
    {
        cout << "Brak dostepu do pliku";  //sprawdzamy czy mamy dostęp do pliku
    }

    //odczyt znak po znaku
    char a;
    odczyt_z_pliku3.get(a);
    cout << a;



    return 0;
}
