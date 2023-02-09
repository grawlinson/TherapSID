#include <Arduino.h>
#include "preset.h"
#include "voice_state.hpp"

extern Preset preset_data;
extern VoiceState<6> voice_state;
extern Glide glide[6];

extern bool sendLfo;
extern bool sendArp;
extern bool lfoNewRand[3];
extern int loadTimer;
extern const byte version;
extern const byte versionDecimal;
extern bool fatShow;
extern float bend, bend1, bend2, bend3; // TODO reactivate bend1-bend3
extern bool sync;
extern int arpModeCounter;
extern bool cvActive[3];
extern bool scrolled;
extern bool gate;
extern bool arping;
extern bool shape1Pressed;
extern int shape1PressedTimer;
extern int lfoStep[3], resetDownTimer;
extern int lfoSpeed[3];
extern int presetScrollSpeed;
extern int saveBounce;
extern byte lfo[3];
extern bool presetUp, presetDown;
extern byte preset;
extern int presetLast;
extern byte lastPot;
extern bool fatChanged;
extern bool resetDown;
extern byte selectedLfo;

// lfo preset data
extern byte lfoShape[3]; // PRESET


extern byte lfoClockSpeedPending[3];
extern bool filterModeHeld; // FIXME: need to update LEDs when changing this
extern int lfoTune1, lfoTune2, lfoTune3, lfoTune4, lfoTune5, lfoTune6, lfoTune7, lfoTune8,
    lfoTune9;
extern float lfoFine1, lfoFine2, lfoFine3, lfoFine4, lfoFine5, lfoFine6, lfoFine7, lfoFine8, lfoFine9;
extern byte arpMode;
extern int frozen;
extern bool jumble;
extern bool lfoButtPressed;
extern byte masterChannel;
extern byte masterChannelOut;
extern int arpCounter, arpRangeBase;
extern int lfoButtTimer;
extern int arpSpeed, arpSpeedBase;
extern int arpRange;
extern int arpRound;
extern byte arpCount;
extern byte envState;
extern int env;
extern int a4, d4, s4, r4;
extern bool saveMode;
extern int saveModeTimer;
extern byte lastNote;
extern int arpStepBase;
extern int dotTimer;
extern bool showPresetNumber; // when high we show preset number once
