#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);//to musi być
    int ilosc_budynkow; 
    int min_size;//najmniejszy rozmiar budynku
    int max_size;//najwiekszy rozmiar budynku
    cin>>ilosc_budynkow;
    int plakaty=0;
    int tab[25000];
    //jesli wyskosc budynków jest taka sama mozna je uznac za jeden budynek
    // cin>>x>>n;
    cin>>tab[0];
    min_size=tab[0];
    max_size=tab[0];
    plakaty++;
    for(int i=1;i<ilosc_budynkow;i++){
        cin>>tab[i];
        if (min_size>tab[i]){
            min_size=tab[i];
        }
        if (max_size<tab[i]){
            max_size=tab[i];
        }

    }
    for(j=0;j<ilosc_budynkow;j++){
        
        for(int i = 0;i<max_size;i++){
        
        }
    } 
    
    cout<<min_size<<endl;
    cout<<plakaty<<endl;
    
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