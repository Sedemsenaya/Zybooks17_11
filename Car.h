//
// Created by Colli on 7/6/2023.
//

#ifndef ZYBOOK18_4_CAR_H
#define ZYBOOK18_4_CAR_H

#ifndef CARH
#define CARH

class Car {
private:
    int modelYear;
    // TODO: Declare purchasePrice member (int)
    int purchasePrice;
    double currentValue;

public:
    void SetModelYear(int userYear);

    int GetModelYear() const;

    // TODO: Declare SetPurchasePrice() function
    void SetPurchasePrice(int newPurchasePrice);


    // TODO: Declare GetPurchasePrice() function
    int GetPurchasePrice() const;

    void CalcCurrentValue(int currentYear);

    // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and
    // currentValue
    void PrintInfo() const;

};

#endif


#endif //ZYBOOK18_4_CAR_H