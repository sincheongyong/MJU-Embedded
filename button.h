#ifndef _BUTTON_H_
#define _BUTTON_H_

#define BUTTON_DRIVER_NAME "/dev/input/event5"
#define MESSAGE_ID 1122

#define UP 1 //variable
#define DOWN 2 //variable
#define LEFT 3
#define RIGHT 4
#define RESTART 5
#define QUIT 6

typedef struct{
	long int messageNum;
	int keyInput;
} BUTTON_MSG_T;

int buttonLibInit(void);
int buttonLibExit(void);
#endif //_BUTTON_H_
