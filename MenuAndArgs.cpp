#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    do
    {
        cout<<"1. Wypisz ilość argumentów programu"<<endl;
        cout<<"2. Wypisz wybrany argument programu"<<endl;
        cout<<"3. Wypisz wszystkie argumenty programu"<<endl;
        cout<<"4. Zakończ program"<<endl;
        cin>>i;
        if (i!=1 && i!=2 && i!=3)
        {
            cerr<<"Bledny wybor"<<endl;
        }
        if (i==1)
        {
            cout<<"Liczba argumentów wynosi: "<<argc<<endl;
        }
        if (i==2)
        {
            int numer;
            cin>>numer;
            while (numer > argc)
            {
                cout<<"Nie ma takiego argumentu"<<endl;
                cout<<"Wybierz argument ponowie: "<<endl;
                cin>>numer;
            }
            cout<<"Argument o numerze: "<<numer<<" to "<<argv[numer]<<endl;
        }
        if (i==3)
        {
            cout<<"Argumenty programu: "<<endl;
            for (int j=0; j<argc; j++)
            {
                cout<<argv[j]<<endl;
            }
        }
    }
    while (i!=4);


    return 0;
}
