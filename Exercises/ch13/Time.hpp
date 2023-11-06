#pragma once

#include <string>

struct Time {
    int hour, minute;
    double second;

    std::string to_string();
};