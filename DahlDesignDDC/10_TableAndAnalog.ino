#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = {99,99,99,99};
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = {99,99,99,99,99,99,99,99};
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  {1,2,3,4,5,6,7,8},    //ROW1
  {11,0,13,14,0,16,9,10},    //ROW2
  {27,28,24,26,0,25,23},    //ROW3
  {17,0,19,20,0,22,0,0}    //ROW4
};

//---------------------------------------
//------------DIRECT WIRING--------------
//---------------------------------------


uint8_t directPins[] = { 99 };
const uint8_t directPinsCount = sizeof(directPins) / sizeof(directPins[0]);


//---------------------------------------
//--------ANALOG DESCRIPTION-------------
//---------------------------------------

#define analogSwitchCount 1

uint8_t analogButtonNumber[analogSwitchCount] =         //ANALOG BUTTONS 1
{ 0 };

uint8_t analogButtonNumberIncMode[analogSwitchCount] =  //ANALOG BUTTONS 2
{ 0 };



#endif
