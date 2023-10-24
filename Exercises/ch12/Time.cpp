#include "Time.h"

Time::Time(double secs) {
    hour = int(secs / 3600.0);
    secs -= hour * 3600.0;
    minute = int(secs / 60.0);
    secs -= minute * 60;
    second = secs;
}

Time::Time(int h, int m, double s) {
  hour = h; minute = m; second = s;
}

Time::Time(int hours, int minutes, int secs) {
    
}

double Time::convert_to_seconds() const {
    int minutes = this->hour * 60 + this->minute;
    double seconds = minutes * 60 + this->second;

    return seconds;
}

void Time::increment(double secs) {
    *this = this->add(*new Time(secs));
}

Time Time::add(const Time& t2) const
{
    return Time(this->convert_to_seconds() + t2.convert_to_seconds());
}
