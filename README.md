# nintendulatordx
This is my modified version of the Nintendulator NES emulator, which adds source-level debugging capabilities (among other features) to the debugger assuming the ROM was assembled with (a dev version) of CC65 with debugging info enabled.

# Fork

## Movax12 Fork:

Mostly changes to the Debug dialog. 

- Bigger source view
- Consolas font
- Change "Seek to Address" for Trace to change the address for the Memory viewer
- Added 00 to 0F header for memory viewer
- Allow hotkeys to be processed with dialog windows open.  Allows F2 for Run, F3 Stop, etc
- Changed F3 to also step when emulation stopped.
- CA65 source files ending in '.h' will never get focus automatically in the source viewer, since (for me) 
  any matching lines in an .h file are macros that I don't need to see while debugging. They can still be viewed with the drop down.

