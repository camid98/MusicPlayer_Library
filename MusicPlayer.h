/*
  MusicPlayer.h - Library for playing music on the arduino Buzzer.
  Created by Cami Dodson, Sept 7, 2015.
  Released into the public domain.
*/

#ifndef MusicPlayer_h
#define MusicPlayer_h

#include "Arduino.h"
#include "Pitches.h"

#define PITCH 0
#define ON_FOR 1
#define OFF_FOR 2

#define NO_TRACK_PLAYING 3

class MusicPlayer
{
  public:
    MusicPlayer(int pin);
    void init(bool bMusicPlayerActive);
    void playTrack(unsigned int track[][3], unsigned int numNotes);
    void updateTrack();
    bool isDonePlaying();
    
  private:
    int _pin;    
    bool _disableSound=false; // For debugging, quick way to disable all sounds
    
    unsigned int (*_track)[3]; // where 3 refers to 0 PITCH, 1 ON_FOR, 2 OFF_FOR
    unsigned int _numNotes=0;
    
    int currTrack; // WIN_TRACK
    int currNote;
    int currState; // ON_FOR, OFF_FOR, NO_TRACK_PLAYING
    int currDuration; //ms
    unsigned long prevTime;
    
};

#endif

