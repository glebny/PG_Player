#ifndef PLAYLISTS_MANAGER_H
#define PLAYLISTS_MANAGER_H

#include <vector>
#include "playlist.h"

class PlaylistsManager
{
public:
    std::vector<Playlist*> playlists;
    Playlist** current_playlist;

    void create_playlist(const std::string& name, std::vector<Music*>& data); //???
    void delete_playlist(const std::string& name);
};

#endif // PLAYLISTS_MANAGER_H
