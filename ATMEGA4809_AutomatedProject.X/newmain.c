/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on January 23, 2023, 7:15 PM
 */


#include <avr/io.h>

int m =10;
int add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
int main() {
   volatile int a = 0x05;
   PORTA.DIR = a;
   volatile int c = 0x1F;
   PORTB.DIR = c;
   volatile int b =0x08;
   PORTC.DIR = b;
   volatile int t = add(a,b,c);
   PORTD.DIR =t;
   return 0;
}
