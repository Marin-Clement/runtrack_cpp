//
// Created by Clément on 02/04/2024.
//

#ifndef RUNTRACK_CPP_SHOPKEEPER_H
#define RUNTRACK_CPP_SHOPKEEPER_H


class ShopKeeper {
public:
    static void getShopKeeperInput();
    static double calculatePrice(double price_per_kg, double kg, double vat_rate);
};


#endif //RUNTRACK_CPP_SHOPKEEPER_H
