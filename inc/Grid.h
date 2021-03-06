#ifndef __Grid_h
#define __Grid_h

void setGrid (uint8_t Map[10][8]);
void showGrid (void);
void setGridPosition(uint8_t label, uint8_t xPosition, uint8_t yPosition);
void clearGridPosition (uint8_t label, uint8_t xPosition, uint8_t yPosition);
uint8_t getSpriteLocationX(uint8_t label);
uint8_t getSpriteLocationY(uint8_t label);
uint8_t isLocationClear(uint8_t xPosition, uint8_t yPosition);
uint8_t checkMove (uint8_t moveDirection, uint8_t Index);
uint8_t spriteMove (uint8_t label, uint8_t direction);
uint8_t getNextMap (void);
uint8_t itemPickedUp (void);
uint8_t canPlaceItem(uint8_t direction);
void placeItem(uint8_t label, uint8_t direction);
void clearItemGrid(void);

#endif
