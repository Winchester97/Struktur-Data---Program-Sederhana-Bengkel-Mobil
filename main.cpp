#include <iostream>
#include "head.h"

using namespace std;

int main() {
    int pil;
    infotype data;
    address P;
    List L;
    createList(L);
    cout<<"---------------Single Linked List------------------"<<endl;
    while (pil != 0) {
    cout<<""<<endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert Last"<<endl;
    cout<<"3. Delete First"<<endl;
    cout<<"4. Delete Last"<<endl;
    cout<<"5. Show All"<<endl;
    cout<<"6. Selisih firstElm & lastElm"<<endl;
    cout<<"7. Memindah lastELm ke firstElm"<<endl;
    cout<<"8. Menukar nilai lastElm dengan firstElm"<<endl;
    cout<<"9. Menambahkan semua elemen SLL2 ke SLL1"<<endl;
    cout<<"0. exit"<<endl;
    cout<<"Masukkan Pilihan anda : ";
    cin>>pil;
    cout<<endl;
        switch(pil) {
        case 1:
            cout<<"Masukkan Nilai : ";
            cin >> data;
            createNewElmt(data,P);
            insertFirst(L,P);
            break;
        case 2:
            cout<<"Masukkan Nilai: ";
            cin >> data;
            createNewElmt(data,P);
            insertLast (L,P);
            break;
        case 3:
            deleteFirst(L,P);
            Deallocation(P);
            break;
        case 4:
            deleteLast(L,P);
            Deallocation(P);
            break;
        case 5:
            cout<<"Rekap Data"<<endl;
            printInfo(L);
            break;
        case 6:
            cout<<"Selisih dari elemen pertama dan terakhir : "<<selisih(L)<<endl;
            break;
        case 7:
            cout<<"sebelum dipindah:"<<endl;
            printInfo(L);
            pindah(L);
            cout<<"Setelah dipindah:"<<endl;
            printInfo(L);
            break;
        case 8:
            cout<<"sebelum ditukar:"<<endl;
            printInfo(L);
            swapElm(L);
            cout<<"setelah ditukar:"<<endl;
            printInfo(L);
            break;
        case 9:
            List L2;
            int pil2;
            createList(L2);
            cout<<"--------------Single Linked List 2----------------"<<endl;
            do{
                cout<<"1. Insert First"<<endl;
                cout<<"2. Insert Last"<<endl;
                cout<<"3. exit menu SLL2"<<endl;
                cout<<"Masukkan pilihan anda : ";
                cin>>pil2;
                switch(pil2) {
                case 1:
                    cout<<"Masukkan Nilai: ";
                    cin >> data;
                    cout<<endl;
                    createNewElmt(data,P);
                    insertFirst(L2,P);
                    break;
                case 2:
                    cout<<"Masukkan Nilai: ";
                    cin>> data;
                    cout<<endl;
                    createNewElmt(data,P);
                    insertLast(L2,P);
                    break;
                }
            } while (pil2 != 3);
            next(last(L)) = first(L2);
            last(L) = last(L2);
            cout<<endl;
            cout<<"Setelah SLL1 & SLL2 digabung: ";
            printInfo(L);
            break;
        }
    }
return 0;
}
