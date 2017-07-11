/*
	Braille.h - Library for Braille characters
	Created by Shreyas Dethe for ITSP 2017
	Version 1.0.0
*/

#ifndef Braille_h
#define Braille_h

#include "Arduino.h"

class Braille{
	public:
		Braille(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7);
		void a();
		void b();
		void c();
		void d();
		void e();
		void f();
		void g();
		void h();
		void i();
		void j();
		void k();
		void l();
		void m();
		void n();
		void o();
		void p();
		void q();
		void r();
		void s();
		void t();
		void u();
		void v();
		void w();
		void x();
		void y();
		void z();
		void nn();
		void n1();
		void n2();
		void n3();
		void n4();
		void n5();
		void n6();
		void n7();
		void n8();
		void n9();
		void n0();
		void cls();
		
	private:
		int _pin1;
		int _pin2;
		int _pin3;
		int _pin4;
		int _pin5;
		int _pin6;
		int _pin7;
};

#endif
