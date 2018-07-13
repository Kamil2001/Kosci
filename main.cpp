#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>


using namespace std;

int main()
{
    srand(time( NULL ) );
   int _kosci1[5];
   int _kosci2[5];
   int n=0;
   int _liczby1[6] = {0,0,0,0,0,0};
   int _liczby2[6] = {0,0,0,0,0,0};
   char wybor = 't';


   while(wybor=='t')
   {
   cout<<"(Gracz1) Nacisnij enter aby rzucic koscmi.";
   getchar();
    for(int i=0;i<5;i++)
    {
        _kosci1[i]=rand()%6+1;
        cout<<"Kosc "<<i+1<<": "<<_kosci1[i]<<endl;
    }
    cout << "----------------------------------------------------------------";

    cout<<endl<<"Ile kosci chcesz wymienic: ";
    cin>>n;
    int *_zmiana = new int [n]; // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! DYNAMICZNA ALOKACJA PAMIECI

    cout<<"Napisz, ktore kosci chcesz wymienic: ";
    for(int i=0; i<n; i++)
    {
        cin >> _zmiana[i];
    }
    cout << endl << "----------------------------------------------------------------" << endl;

    cout << "Kosci po wymianie: " << endl;
    for(int i=0; i<n; i++)
    {
        _kosci1[_zmiana[i]-1]=rand()%6+1;
    }


    for(int i=0;i<5;i++)
    {
        cout<<"Kosc "<<i+1<<": "<<_kosci1[i]<<endl;
        if      (_kosci1[i]==1) _liczby1[0]++;
        else if (_kosci1[i]==2) _liczby1[1]++;
        else if (_kosci1[i]==3) _liczby1[2]++;
        else if (_kosci1[i]==4) _liczby1[3]++;
        else if (_kosci1[i]==5) _liczby1[4]++;
        else if (_kosci1[i]==6) _liczby1[5]++;
    }
    int maxi1 = 0;
    for(int i=0; i<6; i++)
    {
        if(maxi1<_liczby1[i]) maxi1 = _liczby1[i];
    }

    delete [] _zmiana;










    cout << "--------------------------------------------------------------------------------"<<endl;
    cout << "--------------------------------------------------------------------------------"<<endl;
    cout << "--------------------------------------------------------------------------------"<<endl;
    cout << "--------------------------------------------------------------------------------"<<endl;





     cout<<"(Gracz2) Nacisnij enter aby rzucic koscmi.";
   getchar();getchar();
    for(int i=0;i<5;i++)
    {
        _kosci2[i]=rand()%6+1;
        cout<<"Kosc "<<i+1<<": "<<_kosci2[i]<<endl;
    }
    cout << "----------------------------------------------------------------";

    cout<<endl<<"Ile kosci chcesz wymienic: ";
    cin>>n;
    _zmiana = new int [n]; // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! DYNAMICZNA ALOKACJA PAMIECI

    cout<<"Napisz, ktore kosci chcesz wymienic: ";
    for(int i=0; i<n; i++)
    {
        cin >> _zmiana[i];
    }
    cout << endl << "----------------------------------------------------------------" << endl;

    cout << "Kosci po wymianie: " << endl;
    for(int i=0; i<n; i++)
    {
        _kosci2[_zmiana[i]-1]=rand()%6+1;
    }


    for(int i=0;i<5;i++)
    {
        cout<<"Kosc "<<i+1<<": "<<_kosci2[i]<<endl;
        if      (_kosci2[i]==1) _liczby2[0]++;
        else if (_kosci2[i]==2) _liczby2[1]++;
        else if (_kosci2[i]==3) _liczby2[2]++;
        else if (_kosci2[i]==4) _liczby2[3]++;
        else if (_kosci2[i]==5) _liczby2[4]++;
        else if (_kosci2[i]==6) _liczby2[5]++;
    }
    int maxi2 = 0;
    for(int i=0; i<6; i++)
    {
        if(maxi2<_liczby2[i]) maxi2 = _liczby2[i];
    }

    cout << endl << endl << "Wynik gracza 1: " << maxi1 << endl << "Wynik gracza 2: " << maxi2 << endl;
    if(maxi1>maxi2) cout << "Wygrywa gracz pierwszy!!"<<endl;
    else if (maxi1<maxi2) cout << "Wygyrwa gracz drugi!!"<<endl;
    else cout << "Remis!"<<endl;


    cout << "Kontynuowac? t/n";
    cin >> wybor;
    system("cls");
   }











    getchar(); getchar();
    return 0;
}
