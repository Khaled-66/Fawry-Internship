//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_SHIPPINGSERVICE_H
#define FAWRYTASK_SHIPPINGSERVICE_H

#include <string>
#include <iostream>

using namespace std;
class ShippingService {
public:
    static void shipTo(const string& address, const string& title) {
        cout << "Quantum book store - Shipping '" << title << "' to address: " << address << endl;
    }
};



#endif //FAWRYTASK_SHIPPINGSERVICE_H
