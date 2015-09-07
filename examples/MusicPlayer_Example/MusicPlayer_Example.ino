#include <MusicPlayer.h>
#include <Pitches.h>

// DEFINE YOUR PIN
#define BUZZER_PIN A4


#define WIN_TRACK    0
#define WIN_LENGTH   19
#define LOSE_MUSIC   1
#define LOSE_LENGTH  9
  
MusicPlayer music(BUZZER_PIN);
#define STAR_WARS_NUM 19
unsigned int starWars[STAR_WARS_NUM][3] ={
{NOTE_C4, 100, 50},
{NOTE_C4, 100, 50},
{NOTE_C4, 100, 50},
{NOTE_C4, 400, 50},

{NOTE_G4, 400, 50},
{NOTE_F4, 100, 50},
{NOTE_E4, 100, 50},
{NOTE_D4, 100, 50},

{NOTE_C5, 400, 50},
{NOTE_G4, 400, 50},
{NOTE_F4, 100, 50},
{NOTE_E4, 100, 50},
{NOTE_D4, 100, 50},

{NOTE_C5, 400, 50},
{NOTE_G4, 400, 50},
{NOTE_F4, 100, 50},
{NOTE_E4, 100, 50},
{NOTE_F4, 100, 50},
{NOTE_D4, 400, 50}
};

unsigned int note[1][3] = {
  {NOTE_D4, 200, 50}
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      // open the serial port at 9600 bps for Debug Output: 
  music.init(true);
 
  music.playTrack(starWars, STAR_WARS_NUM);
  //music.playTrack(note, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  music.updateTrack();
  //delay(10);
}

