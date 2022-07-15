#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);//to musi być
    int ilosc_budynkow, wielkosc;//, x;
    cin>>ilosc_budynkow;
    int plakaty=0;
    //jesli wyskosc budynków jest taka sama mozna je uznac za jeden budynek
    stack<int>wysokosci;
    // cin>>x>>n;
    cin>>wielkosc;
    wysokosci.push(wielkosc);
    plakaty++;
    for(int i=1;i<ilosc_budynkow;i++){
        //czytamy z inputa, pierwsza liczba idzie do smieci bo nas nie interesuje
        // cin>>x>>n;
        cin>>wielkosc;
        //jesli wysokości są takie same to mozemy nie dodawac do stosu tej liczby
        if(n>wysokosci.top()){

        }else{
            wysokosci.push(n);
            plakaty++; 
        } 
    }
    cout<<plakaty;
    
    return 0;
}



#include <iostream>
 
using namespace std;
 
int main()
{
    int tab[250000], n, liczba, i=0, plakaty=0, szer;   //tab ma 250000 komórek, bo tyle może być domów
    cin >> n >> szer >> tab[0];   // wczytujemy liczbę domów a następnie wymiary pierwszego z nich
    for (int a=1; a<n; a++)   //pętelka, która wczyta resztę :)
    {
        cin >> szer >> liczba;   //wczytujemy wymiary domku
        while (liczba<tab[i]){   //jeżeli dom jest mniejszy niż poprzedni, to zrzucamy domki ze stosu, aż snajdziemy mniejszy lub równy
            plakaty++;   //za każdym razem jak coś zrzucimy "naklejamy plakat"
            i--;   //zmniejszamy też wskaźnik, który pokazuje na ostatnie zajęte miejsce na stosie
            if (i==-1) tab[++i]=liczba;   //a jeśli stos się opróżni (i==-1) to trzeba liczbe zapisać do tab[0]
        }
        if (liczba>tab[i])   //jeśli domek jest większy niż ostatni na stosie, to wrzucamy go na stos
            tab[++i]=liczba;
    }
    plakaty+=i+1;   //dodajemy ilość domków na stosie do ilości plakatów
    cout << plakaty << endl;
    return 0;
}