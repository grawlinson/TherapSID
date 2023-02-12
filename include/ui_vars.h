#pragma once
#include <Arduino.h>

struct UiState {
	bool filterModeHeld;
	byte lastPot;
	byte selectedLfo;
	byte midiSetup = 0;
};

extern bool scrolled;             // UI
extern bool shape1Pressed;        // UI
extern int shape1PressedTimer;    // UI
extern int resetDownTimer;        // UI
extern int presetScrollSpeed;     // UI
extern int saveBounce;            // UI
extern bool presetUp, presetDown; // UI
extern int presetLast;            // UI??
extern bool fatChanged;           // UI
extern bool resetDown;            // UI
extern int frozen;                // UI
extern bool lfoButtPressed;       // UI
extern int lfoButtTimer;          // UI
extern bool saveMode;             // UI

extern int arpModeCounter;
extern int loadTimer;

extern UiState ui_state;
