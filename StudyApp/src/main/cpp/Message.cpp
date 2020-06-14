//
// Created by 권기석 on 2020-06-14.
//

#include "Message.h"

#include <iostream>
#include <string>

std::ostream &Message::printObject(std::ostream &os) {
    os << "This is my very nice message: " << std::endl;
    os << message_;

    return os;
}
