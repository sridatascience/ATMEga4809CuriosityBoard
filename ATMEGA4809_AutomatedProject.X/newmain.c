/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on January 23, 2023, 7:15 PM
 */


#include <avr/io.h>
#include <avr/cpufunc.h>

uint8_t m =10;
int add(uint8_t n, uint8_t o, uint8_t p ){
   _NOP();
   _NOP();
   return n+o+p;
}
int main() {
   volatile uint8_t a = 0x05;
   PORTA.DIR = a;
   m = PORTA.DIR;
   volatile uint8_t c = 0x1F;
   PORTB.DIR = c;
   volatile uint8_t b =0x08;
   PORTC.DIR = b;
   volatile uint8_t t = add(a,b,c);
   PORTD.DIR =t;
   return 0;
}
