//
// Created by Colli on 7/6/2023.
//

#ifndef ZYBOOKS_17_11_1_ARTWORK_H
#define ZYBOOKS_17_11_1_ARTWORK_H

#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

class Artwork{
public:
    Artwork();

    Artwork(char *newTitle, int newYearCreated, Artist newArtist);
    void GetTitle(char *returnTitle);

    int GetYearCreated();

    void PrintInfo();

private:
    // TODO: Declare private data members - title, yearCreated
    char title[20];
    int yearCreated;

    // TODO: Declare private data member artist of type Artist
    Artist anArtist;

};

#endif


#endif //ZYBOOKS_17_11_1_ARTWORK_H
