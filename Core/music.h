#ifndef MUSIC_H
#define MUSIC_H

#include <string>

/*!
 * \brief The Music struct
 *
 * \details class that has all necessary information about music
 */
struct Music
{
private: // temporary. Should be redone using getters/setters and constructor
    std::string filepath;
    std::string name;
    int duration;
    int bitrate;
};

#endif // MUSIC_H
