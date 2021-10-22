#ifndef CORE_H
#define CORE_H

#include "filesystem_handler.h"
#include "track_controller.h"
#include "playlists_manager.h"

class Core
{
public:
    FSHandler filesystem_handler;
    TrackController track_controller;
    PlaylistsManager playlists_manager;
};

#endif // CORE_H
