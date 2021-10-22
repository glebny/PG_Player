#ifndef FILESYSTEM_HANDLER_H
#define FILESYSTEM_HANDLER_H

#include <string>
#include "music.h"
#include "playlist.h"

class FSHandler
{
public:
    Music* get_music(const std::string& path);
    Playlist* get_playlist(const std::string& path);
};

#endif // FILESYSTEM_HANDLER_H
