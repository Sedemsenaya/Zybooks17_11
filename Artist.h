//
// Created by Colli on 7/6/2023.
//

#ifndef ZYBOOKS_17_11_1_ARTIST_H
#define ZYBOOKS_17_11_1_ARTIST_H


#ifndef ARTISTH
#define ARTISTH

#include <cstring>
using namespace std;

class Artist{
public:
    Artist();

    Artist(char *artistName, int birthYear, int deathYear);

    void GetName(char *returnName) const;

    int GetBirthYear() const;

    int GetDeathYear() const;

    void PrintInfo() const;

private:
    // TODO: Declare private data members - artistName, birthYear, deathYear

    char artistName[20];
    int birthYear;
    int deathYear;


};

#endif

#endif //ZYBOOKS_17_11_1_ARTIST_H
