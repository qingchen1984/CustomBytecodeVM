#ifndef _src_commands_flowcontrol_h_
#define _src_commands_flowcontrol_h_

#include "command.h"

state jump(state currentState, vmword arga) {
  state newState = currentState;
  newState.programCounter = arga;
  return newState;
}

state jumpequalzero(state currentState, vmbyte arga, vmword argb, vmword programCounter) {
  state newState = currentState;
  vmword result = 0;

  if(arga == 0)
    result = argb;

  newState.programCounter = result;
  return newState;
}

state jumpgreaterzero(state currentState, vmbyte arga, vmword argb, vmword programCounter) {
  state newState = currentState;
  vmword result = 0;

  if(arga > 0)
    result = argb;

  newState.programCounter = result;
  return newState;
}

state jumplesserzero(state currentState, vmbyte arga, vmword argb, vmword programCounter) {
  state newState = currentState;
  vmword result = 0;

  if(arga < 0)
    result = argb;

  newState.programCounter = result;
  return newState;
}

#endif