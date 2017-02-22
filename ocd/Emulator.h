/**
 * Emulator 
 * \brief by changing the state of the emulator, 
 *		  instructions can be simulated on the current
 *		  line and the next line after.
 *
 * \author Five (i.f-ve@ya.ru) 
 * \version 2/22/2017
 */
#pragma once

struct EmulatorState
{
	//TODO:
};


class CEmulator
{
private:
	EmulatorState State;
public:
	CEmulator();
	
	~CEmulator();

	EmulatorState GetState();
	
	void SetState(EmulatorState State);
	
};

