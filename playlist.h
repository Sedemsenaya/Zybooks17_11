//
// Created by Colli on 7/6/2023.
//

#ifndef ZYBOOKS17_11_PLAYLIST_H
#define ZYBOOKS17_11_PLAYLIST_H

//header file for the Song class
//has constructors, accessors, mutators and some functions
#pragma once
#include "song.h"

//Song class
class PlayList
{
private:
    char albumName[MAXCHAR];
    SongType aSong;
public:
    PlayList();
    PlayList(char *newName, SongType newSong);
    ~PlayList();
    void printPlaylist();
};

#endif //ZYBOOKS17_11_PLAYLIST_H
