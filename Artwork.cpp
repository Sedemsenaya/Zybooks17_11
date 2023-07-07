//
// Created by Colli on 7/6/2023.
//


#include "Artwork.h"
#include <iostream>
#include <cstring>

// TODO: Define default constructor
Artwork::Artwork()
{
    strcpy(title, "unknown");
    yearCreated = -1;
}
// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)
Artwork::Artwork(char *newTitle, int newYearCreated, Artist newArtist)
{
    strcpy(title, newTitle);
    yearCreated = newYearCreated;
    anArtist = newArtist;
}

// TODO: Define get functions: GetTitle(), GetYearCreated()
void Artwork::GetTitle(char *returnTitle)
{
    strcpy(returnTitle, title);
}

int Artwork::GetYearCreated()
{
    return yearCreated;
}
// TODO: Define PrintInfo() function
//       Call the PrintInfo() function in the Artist class to print an artist's information

void Artwork::PrintInfo()
{
    anArtist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated <<endl;
}