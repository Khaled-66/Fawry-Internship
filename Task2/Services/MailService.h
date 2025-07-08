//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_MAILSERVICE_H
#define FAWRYTASK_MAILSERVICE_H

#include <string>
#include <iostream>
using namespace std;
class MailService {
public:
    static void sendTo(const string& email, const string& title, const string& fileType) {
        cout << "Quantum book store - Sending '" << title << "' (" << fileType << ") to email: " << email << endl;
    }
};


#endif //FAWRYTASK_MAILSERVICE_H
