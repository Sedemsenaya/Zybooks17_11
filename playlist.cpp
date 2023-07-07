//
// Created by Colli on 7/6/2023.
//

#include "playlist.h"
//The implementation file for playlist.h
#include "playlist.h"

//constructors
//default constructor
PlayList::PlayList()
{
    strcpy(albumName, "unknown");
}

//constructor with parameters
PlayList::PlayList(char *newName, SongType newSong)
{
    strcpy(albumName, newName);
    aSong = newSong;
}
//destructor
PlayList::~PlayList()
{
    //do nothing.
}
//print playlist
void PlayList::printPlaylist() {
    cout << "Album Name: " << albumName << endl;
    aSong.printSong();
}