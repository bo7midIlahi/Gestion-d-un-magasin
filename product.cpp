#include "product.h"
#include <cstring>

//constructor
product::product(int _id, char _nom[15], char _category[15], float _price, int _quantity){
    this->id = _id;
    strcpy(this->nom,_nom);
    strcpy(this->category,_category);
    this->price = _price;
    this->quantity = _quantity;
}

//getters
int product::get_id(){
    return id;
}

char product::get_nom(){
    return *nom;
}

char product::get_category(){
    return *category;
}

float product::get_price(){
    return price;
}

int product::get_quantity(){
    return quantity;
}

//affiche
void product::affiche(){
    cout << "ID: " << id << endl;
    cout << "NOM: " << nom << endl;
    cout << "CATEGORY: " << category << endl;
    cout << "PRICE: " << price << endl;
    cout << "QUANTITY: " << quantity << endl;
}