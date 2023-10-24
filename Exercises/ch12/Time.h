struct Time {
    int hour, minute;
    double second;

    // Constructors
    Time(double secs);
    Time(int hours, int minutes, double secs);
    Time(int h, int m, int s);

    // Modifiers
    void increment(double secs);

    void print();
    bool after(const Time& time2) const;
    Time add(const Time& t2) const;
    double convert_to_seconds() const;
};