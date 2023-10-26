#include "Time.h"

std::string Time::to_string() {
    return std::to_string(this->hour) + ":" + 
           std::to_string(this->minute) + ":" +
           std::to_string(this->second);
}