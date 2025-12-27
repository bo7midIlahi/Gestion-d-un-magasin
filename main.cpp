#include <iostream>
#include "product.h"

using namespace std;

void print_menu(){
    cout << "MENU:" << endl;
    cout << "-------------------" << endl;
    cout << "1- TRI PAR NOM" << endl;
    cout << "2- TRI PAR PRIX" << endl;
    cout << "3- ADD PRODUCT" << endl;
    cout << "4- REMOVE PRODUCT" << endl;
    cout << "5- RECHERCHE PRODUCT BY ID" << endl;
    cout << "6- AFFICHE TOUS PRODUCT" << endl;
    cout << "7- AFFICHE TOUS PRODUCT DISP" << endl;
    cout << "8- VENDRE PRODUCT" << endl;
    cout << "9- ACHAT PRODUCT" << endl;
    cout << "10- SAVE DATA" << endl;
    cout << "11- LOAD DATA" << endl;
    cout << "12- QUIT" << endl;
}

int get_action() {
    int result = 0;
    while (result<1 || result>12)
    {
        printf("ACTION : ");
        scanf("%d",&result);
    }
    
    return result;
}

int main(){
    print_menu();
    int action = get_action();
    cout <<"ACTION CHOOSEN : " <<action <<endl;
}