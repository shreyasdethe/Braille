#include <Braille.h>

Braille braille(7, 8, 9, 10, 11, 12, 13);

void setup(){
  Serial.begin(9600);
}

void loop(){
  int ser = Serial.read();
  if(ser == '%') braille.cls();
  if(ser == 'a' || ser == 'A') braille.a();
  if(ser == 'b' || ser == 'B') braille.b();
  if(ser == 'c' || ser == 'C') braille.c();
  if(ser == 'd' || ser == 'D') braille.d();
  if(ser == 'e' || ser == 'E') braille.e();
  if(ser == 'f' || ser == 'F') braille.f();
  if(ser == 'g' || ser == 'G') braille.g();
  if(ser == 'h' || ser == 'H') braille.h();
  if(ser == 'i' || ser == 'I') braille.i();
  if(ser == 'j' || ser == 'J') braille.j();
  if(ser == 'k' || ser == 'K') braille.k();
  if(ser == 'l' || ser == 'L') braille.l();
  if(ser == 'm' || ser == 'M') braille.m();
  if(ser == 'n' || ser == 'N') braille.n();
  if(ser == 'o' || ser == 'O') braille.o();
  if(ser == 'p' || ser == 'P') braille.p();
  if(ser == 'q' || ser == 'Q') braille.q();
  if(ser == 'r' || ser == 'R') braille.r();
  if(ser == 's' || ser == 'S') braille.s();
  if(ser == 't' || ser == 'T') braille.t();
  if(ser == 'u' || ser == 'U') braille.u();
  if(ser == 'v' || ser == 'V') braille.v();
  if(ser == 'w' || ser == 'W') braille.w();
  if(ser == 'x' || ser == 'X') braille.x();
  if(ser == 'y' || ser == 'Y') braille.y();
  if(ser == 'z' || ser == 'Z') braille.z();
  if(ser == '0') braille.n0();
  if(ser == '1') braille.n1();
  if(ser == '2') braille.n2();
  if(ser == '3') braille.n3();
  if(ser == '4') braille.n4();
  if(ser == '5') braille.n5();
  if(ser == '6') braille.n6();
  if(ser == '7') braille.n7();
  if(ser == '8') braille.n8();
  if(ser == '9') braille.n9();
  
}

