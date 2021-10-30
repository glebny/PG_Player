#ifndef TIMER_H
#define TIMER_H

#include <string>

/*!
 * \brief The Timer class
 *
 * \details Planned to be abstraction over QTimer
 */
class Timer
{
public:
    int cur_time_in_sec;

    void start();
    std::string get_time();
};

#endif // TIMER_H
