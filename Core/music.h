#ifndef MUSIC_H
#define MUSIC_H

#include <string>

struct Music
{
public: // temporary. Should be redone using getters/setters and constructor
    std::string filepath;
    std::string name;
    int duration;
    int bitrate;
};

#endif // MUSIC_H
