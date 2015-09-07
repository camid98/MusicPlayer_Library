/*
  MusicPlayer.h - Library for playing music on the arduino Buzzer.
  Created by Cami Dodson, Sept 7, 2015.
  Released into the public domain.
*/

#ifndef MusicPlayer_h
#define MusicPlayer_h

#include "Arduino.h"
#include "pitches.h"

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
    
  private:
    int _pin;    
    bool _disableSound=false; // For debugging, quick way to disable all sounds
    
    unsigned int (*_track)[3];
    unsigned int _numNotes=0;
    
    int currTrack; // WIN_TRACK
    int currNote;
    int currState; // ON_FOR, OFF_FOR
    int currDuration; //ms
    unsigned long prevTime;
    
};

#endif

