#ifndef WMUTILS_H_
#define WMUTILS_H_

namespace goatvr {

// xpos/ypos is the offset of the display we want to move the window to,
// before going fullscreen (useful for extended desktop setups).
void hmd_fullscreen(int xpos, int ypos);

}	// namespace goatvr

#endif	// WMUTILS_H_
