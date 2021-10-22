#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include <string>
#include "music.h"


class Playlist
{
public:
    std::vector<Music*> data;
    std::string name;

    void add_music(Music* music);
    void delete_music(const std::string& music_name); //???
    void swap(Music* first_music, Music* second_music); //???
};

#endif // PLAYLIST_H
