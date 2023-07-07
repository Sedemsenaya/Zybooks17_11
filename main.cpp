/*//The driver file with main() to test the Song class.
#include "song.h"
#include "playlist.h"

//main
int main()
{
    SongType mySong("Put a ring on it", "Beyonce", 4, 80);
    SongType yourSong("Yellow Submarine", "Beatles", 3, 70);

    PlayList list1;
    //PlayList object calling constructor with parameters
    PlayList list2("Good Times!", mySong);
    //print the PlayList using the printPlayList function
    list1.printPlaylist();
    cout << endl;
    list2.printPlaylist();
    char srchSong[MAXCHAR];
    //call isLonger method
    if(mySong.isLonger(yourSong))
    {
        mySong.printSong();
    }
    else
    {
        yourSong.printSong();
    }
    cout << "Enter the artist to search for: ";
    cin.getline(srchSong, MAXCHAR);
    //call the artist search method
    if(mySong.isArtist(srchSong))
    {
        mySong.printSong();
    }
    else
    {
        cout << "Artist not found in mySong!" << endl;
    }
    if(!yourSong.isArtist(srchSong))
    {
        cout << "Artist not found in yourSong!" << endl;
    }
    else
    {
        yourSong.printSong();
    }
    return 0;
}*/

#include "playlist.h"


int main() {
    //create a single song called mySong
    SongType mySong("Yellow Submarine", "Beatles", 2, 120);
    //create a PlayList object - this calls the default constructor
    PlayList list1;
    //PlayList object calling constructor with parameters
    PlayList list2("Good Times!", mySong);
    //print the PlayList using the printPlayList function
    list1.printPlaylist();
    cout << endl;
    list2.printPlaylist();

    return 0;
}