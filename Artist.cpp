//
// Created by Colli on 7/6/2023.
//


#include "Artist.h"
#include <iostream>
#include <cstring>
using namespace std;

// TODO: Define default constructor
Artist::Artist()
{
    strcpy(artistName, "unknown");
    birthYear = -1;
    deathYear = -1;
}
// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(char *artistName, int birthYear, int deathYear)
{
    strcpy(this->artistName, artistName);
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}
// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
void Artist::GetName(char *returnName) const
{
    strcpy(returnName, artistName);
}

int Artist::GetBirthYear() const
{
    return birthYear;
}

int Artist::GetDeathYear() const
{
    return deathYear;
}
// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
void Artist::PrintInfo() const
{
    if(deathYear == -1 && birthYear ==-1)
        cout << "Artist: " << artistName << " (unknown)"<<endl;
    else if(deathYear == -1)
        cout << "Artist: " << artistName << " (" << birthYear << " to present)"<<endl;
    else
        cout << "Artist: " << artistName << " (" << birthYear << " to " << deathYear << ")"<<endl;
}
