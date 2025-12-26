#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class product {
    private:
        int id;
        char nom[15];
        char category[15];
        float price;
        int quantity;
    public:
        product(int _id, char _nom[15], char _category[15], float price, int quantity);
        product();
        product(const product& other);
        //getters
        int get_id();
        char get_nom();
        char get_category();
        float get_price();
        int get_quantity();

        //affiche
        void affiche();

};

#endif