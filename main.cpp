#include <iostream>
#include <vector>
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

product create_prod(){
    int id;
    printf("enter prod id : ");
    scanf("%d", &id);

    char nom[15];
    printf("enter prod nom : ");
    scanf("%s", nom);

    char category[15];
    printf("enter prod category : ");
    scanf("%s", category);

    float price;
    printf("enter prod price : ");
    scanf("%s", &price);

    int quantity;
    printf("enter prod qte : ");
    scanf("%s", &quantity);

    product prod(id,nom,category,price,quantity);
    return prod;
}

void add_product(vector<product> productList){
    product prod = create_prod();
    productList.push_back(prod);
}

int search_prod(vector<product> productList){
    int id_search;
    printf("enter ID to find: ");
    scanf("%d", &id_search);
    
    auto iterator = productList.begin();
    
    while ((iterator != productList.end()) || (id_search != iterator->get_id())) {
        iterator ++;
    }
    
    printf("PROD @: %d\n", id_search == iterator->get_id()) ? iterator->get_id() : NULL;

    return (id_search == iterator->get_id()) ? iterator->get_id() : NULL;
}

void affiche_prod(vector<product> productList, int index){
    if (index == NULL)
    {
        printf("NO ELEMENT FOUND!!\n");
        exit(1);
    }
    
    cout << "ID : " << productList.at(index).get_id();
    cout << "NOM : " << productList.at(index).get_nom();
    cout << "CATEGORY : " << productList.at(index).get_category();
    cout << "PRICE : " << productList.at(index).get_price();
    cout << "QTE : " << productList.at(index).get_quantity();
}

int main(){
    print_menu();
    
    int action = get_action();
    cout <<"ACTION CHOOSEN : " <<action <<endl;
    
    vector<product> productList;

    switch (action){
        case 3:
            add_product(productList);
        case 4:
            remove_prod(productList);
        case 5:
            affiche_prod(productList, search_prod(productList));
        case 12:
            printf("QUITTING");
            return 0;
            break;

    }
}