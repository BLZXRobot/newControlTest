// debug.c : implementation file
#include "Main.h"
#include <API.h>
#ifndef DEBUG_C_
#define DEBUG_C_

void main_entrypoint ( void )
{
      Wait ( 500 ) ;
      PrintToScreen ( "\nVEX Debugger Utility\nby James Swineson\n\nStarting...\n" ) ;
      while ( 1 )
      {
            //ResetGD ( ) ;
            StartTimer ( 6 ) ; // start counting msec
            PresetTimer ( 6 , 0 ) ;
            PrintTextToGD ( 0 , 0 , 0 , "VEX Debugger Utility\n" ) ;
            //PrintFrameToGD ( 1 , 1 , 6 , 20 , 0 ) ; // print frame
            PrintFrameToGD ( 8 , 1 , 11 , 31 , 0 ) ; // print frame
            //PrintFrameToGD ( 14 , 1 , 17 , 51 , 0 ) ; // print frame
            //PrintFrameToGD ( 19 , 1 , 21 , 52 , 0 ) ; // print frame
            joystick_control ( ) ;
            PrintTextToGD ( 26 , 0 , 16711808 , "Loop Time = %4d msec\n" , GetTimer(6) ) ;
      }
}


#endif // DEBUG_C_

