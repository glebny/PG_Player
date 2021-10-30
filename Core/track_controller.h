#ifndef TRACK_CONTROLLER_H
#define TRACK_CONTROLLER_H

#include "music.h"
#include "timer.h"

/*!
 * \brief The TrackController class
 *
 * \details Class that controls tracks' workflow
 */
class TrackController
{
public:
    Music* current_music;
    Timer timer;

    void play();
    void pause();
    void switch_music();
    void rewind();
private:
    Music* prev_music;
    Music* next_music;
};

#endif // TRACK_CONTROLLER_H
