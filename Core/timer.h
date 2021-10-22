#ifndef TIMER_H
#define TIMER_H

#include <string>

class Timer
{
public:
    int cur_time_in_sec;

    void start();
    std::string get_time();
};

#endif // TIMER_H
