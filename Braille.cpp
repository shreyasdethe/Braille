/*
	Braille.h - Library for Braille characters
	Created by Shreyas Dethe for ITSP 2017
	Version 1.0.0
	Released into the public domain
*/

#include "Arduino.h"
#include "Braille.h"

Braille::Braille(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7){
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
	pinMode(pin3, OUTPUT);
	pinMode(pin4, OUTPUT);
	pinMode(pin5, OUTPUT);
	pinMode(pin6, OUTPUT);
	pinMode(pin7, OUTPUT);
	_pin1 = pin1;
	_pin2 = pin2;
	_pin3 = pin3;
	_pin4 = pin4;
	_pin5 = pin5;
	_pin6 = pin6;
	_pin7 = pin7;
}

void Braille::cls(){
	digitalWrite(_pin7, HIGH);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}	

void Braille::a(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}

void Braille::b(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::c(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::d(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::e(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::f(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::g(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::h(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::i(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::j(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::k(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::l(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::m(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::n(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::o(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::p(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::q(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::r(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::s(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::t(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::u(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, HIGH);
}
void Braille::v(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, HIGH);
}
void Braille::w(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
}
void Braille::x(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, HIGH);
}
void Braille::y(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
}
void Braille::z(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
}
void Braille::nn(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
}
void Braille::n1(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}

void Braille::n2(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::n3(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::n4(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::n5(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::n6(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::n7(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::n8(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
void Braille::n9(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
}
void Braille::n0(){
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);delay(1000);
	digitalWrite(_pin1, LOW);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
}
