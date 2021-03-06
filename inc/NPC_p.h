
#ifndef __NPC_p_h
#define __NPC_p_h

enum NPC_INDEX{OLD_MAN, FIRE1, FIRE2, ZELDA, NUM_NPC};

// START OF NPC SPRITES
const unsigned short OldMan[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x455F, 0x455F, 0x455F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x0000, 0x0000, 0x023F,
 0x0000, 0xFFFF, 0x455F, 0x455F, 0x023F, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0x023F,
 0x455F, 0x455F, 0x455F, 0x455F, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x455F,
 0x455F, 0xFFFF, 0x0000, 0x0000, 0x455F, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x455F,
 0x455F, 0x455F, 0x455F, 0x455F, 0x455F, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F,
 0x455F, 0x455F, 0x455F, 0x455F, 0x455F, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F,
 0x455F, 0xFFFF, 0x0000, 0x0000, 0x455F, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x455F,
 0x455F, 0x455F, 0x455F, 0x455F, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x455F,
 0x0000, 0xFFFF, 0x455F, 0x455F, 0x023F, 0xFFFF, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0x023F,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0xFFFF, 0xFFFF, 0x023F, 0x023F, 0x023F, 0x023F, 0x0000, 0x0000, 0x023F,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x023F, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x455F, 0x455F, 0x455F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,


};
const unsigned short Fire[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x0000,
 0x01DF, 0x01DF, 0x0000, 0x451F, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0x451F, 0x01DF, 0x01DF,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x451F, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0x451F, 0x451F, 0x01DF,
 0x01DF, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x01DF, 0x451F, 0xFFFF, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x451F, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x01DF, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0x451F, 0x451F, 0xFFFF, 0x451F, 0x451F, 0x01DF, 0x01DF,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x01DF, 0x451F, 0x451F, 0x451F, 0x01DF, 0x0000,
 0x0000, 0x451F, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0x01DF, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x451F, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x0000, 0x0000,


};

const unsigned short FireAni[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x451F, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x451F, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0x01DF, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x01DF, 0x451F, 0x451F, 0x451F, 0x01DF, 0x0000,
 0x0000, 0x01DF, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0x451F, 0x451F, 0xFFFF, 0x451F, 0x451F, 0x01DF, 0x01DF,
 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x451F, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x01DF, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x01DF, 0x451F, 0xFFFF, 0xFFFF, 0xFFFF, 0x451F, 0x01DF,
 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x451F, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0xFFFF, 0x451F, 0x451F, 0x01DF,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x451F, 0x451F, 0x01DF, 0x01DF,
 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x451F, 0x451F, 0x01DF, 0x01DF, 0x0000,
 0x01DF, 0x01DF, 0x0000, 0x451F, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x01DF, 0x01DF, 0x01DF, 0x01DF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,


};
const unsigned short PrincessZelda[] = {
 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0x021F,
 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0x131C, 0x131C, 0x131C, 0x453F, 0x131C, 0x131C, 0x131C, 0x021F,
 0xAEBF, 0xAEBF, 0xAEBF, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x453F, 0x131C, 0x021F, 0x021F, 0x021F,
 0xAEBF, 0x453F, 0x453F, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x453F, 0x453F, 0x453F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0x131C, 0x131C, 0x131C, 0x131C, 0x453F, 0x453F, 0x131C, 0x021F, 0x021F, 0x453F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0x131C, 0x131C, 0x131C, 0x0000, 0x0000, 0x453F, 0x453F, 0x021F, 0x021F, 0x021F, 0x131C, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0x131C, 0x453F, 0x131C, 0x453F, 0x453F, 0x453F, 0x131C, 0x453F, 0x021F, 0x021F, 0x453F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0x131C, 0x453F, 0x131C, 0x453F, 0x453F, 0x453F, 0x131C, 0x453F, 0x021F, 0x021F, 0x453F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0x131C, 0x131C, 0x131C, 0x0000, 0x0000, 0x453F, 0x453F, 0x021F, 0x021F, 0x021F, 0x131C, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0x131C, 0x131C, 0x131C, 0x131C, 0x453F, 0x453F, 0x131C, 0x021F, 0x021F, 0x453F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0xAEBF, 0x453F, 0x453F, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x453F, 0x453F, 0x453F, 0x021F, 0x021F, 0x021F, 0x021F, 0x021F,
 0xAEBF, 0xAEBF, 0xAEBF, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x131C, 0x453F, 0x131C, 0x021F, 0x021F, 0x021F,
 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0x131C, 0x131C, 0x131C, 0x453F, 0x131C, 0x131C, 0x131C, 0x021F,
 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0xAEBF, 0x021F,


};

// End of NPC sprites

typedef struct NPC_t{
	uint8_t width;
	uint8_t height;
	const unsigned short * ItemPic;
}NPC;
const NPC NPCs [NUM_NPC] = {
{16, 16, Fire}, 
{16, 16, FireAni}, 
{16, 16, OldMan}, 
{16, 14, PrincessZelda}
};

#endif
