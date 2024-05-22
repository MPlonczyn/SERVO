#include "keyboard.h"
#include "servo.h"

int main(){
	enum KeyboardState eButtonPressed;
	KeyboardInit();
	ServoInit(50);

	while(1){
		eButtonPressed = eKeyboardRead();
		if(eButtonPressed == BUTTON_0){
			ServoCallib();
		}
		else if(eButtonPressed == BUTTON_1){
			ServoGoTo(12);
		}
		else if(eButtonPressed == BUTTON_2){
			ServoGoTo(24);
		}
		else if(eButtonPressed == BUTTON_3){
			ServoGoTo(36);
		}
	}
}

