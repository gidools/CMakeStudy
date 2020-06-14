//
// Created by 권기석 on 2020-06-14.
//
#pragma once

#include <iosfwd>
#include <string>

class Message {
public:
    Message(const std::string &m) : message_(m) {}

    friend std::ostream &operator<<(std::ostream &os, Message &obj) {
        return obj.printObject(os);
    }

private:
    std::string message_;
    std::ostream &printObject(std::ostream &os);
};
