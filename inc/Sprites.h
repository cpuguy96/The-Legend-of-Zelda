
#ifndef __Sprites_h
#define __Sprites_h

void spriteInit(uint8_t Index,  uint8_t xPosition, uint8_t yPosition, uint8_t direction, uint8_t label);
void drawSprite (uint8_t Index, uint8_t label, int16_t drawX, int16_t drawY, uint8_t direction, uint8_t spriteAnimationCounter);
void setSpriteLocation (uint8_t Index, uint8_t * prevXPosition, uint8_t * prevYPosition, int16_t * drawX, int16_t * drawY, uint8_t direction, uint8_t label, uint8_t * spriteAnimationCounter, uint8_t * isMoving, uint8_t spritesMoving);
void cleanSprite (uint8_t Index, int16_t drawX, int16_t drawY);
void cleanBox (uint8_t Index, int16_t drawX, int16_t drawY);
void moveSprite(void);
void setTimer(uint8_t spritesMoving);
void setDirection(uint8_t Index, uint8_t newDirection);
uint8_t checkEnemyAttacked (uint8_t direction, int16_t drawX, int16_t drawY, int16_t EdrawX, int16_t EdrawY, uint8_t EIndex);
uint8_t checkAttacked (uint8_t direction, int16_t drawX, int16_t drawY, int16_t EdrawX, int16_t EdrawY, uint8_t EIndex);
uint8_t checkBombAttacked (uint8_t xPosition, uint8_t yPosition, int16_t EdrawX, int16_t EdrawY, uint8_t EIndex);
void setSpriteAnimation(uint8_t Index, uint8_t direction, uint8_t spriteAnimationCounter);
void spriteAttack(uint8_t Index, uint8_t label, int16_t drawX, int16_t drawY, uint8_t direction, uint8_t attackAnimationCounter, uint8_t spritesMoving);
uint8_t getSpriteLabel (uint8_t Index);
uint8_t spriteXPosition (uint8_t Index);
uint8_t spriteYPosition (uint8_t Index);
int16_t gridPositionX (uint8_t Index);
int16_t gridPositionY (uint8_t Index);

#endif
