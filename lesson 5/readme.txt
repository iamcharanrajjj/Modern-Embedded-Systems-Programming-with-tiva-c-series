in order to improve the readability of the code we are redefining using the macro header
we can define our macro to be anything which need not to be a complete element of a C language

ex: #define foo *((unsigned int   //there's no complete element such as closing braces or the element that needs to be typecasted
very important: for safer side enclose the macro before the de-reference


1. in accordance with CPU point of view, STR register is responsible for blinking of the LED.
2. in order to use pre-defined macros for the register offset address we're using in the program "TM4C123H6PM.h"
   header file
   usage: #include "TM4C123H6PM.h"
 when u include this header file make sure to remove all the macro's defined by the user.

volatile keyword: it informs the compiler that the object pointed to... by the pointer might change spontaeniously 
we're telling the compiler that the object might change even there's no statements in the program supporting it to change it  
  
  ex: 2 bits in the gpio-F registers are connected to the user switches these bits can be changed when the user presses or releases the switches 
    which is obviously not caused by the programming instructions.... which infects the most other i/o registers are volatile.

effect of the volatile keyword on "COMPILER OPTIMIZATION":

Use the volatile keyword when declaring variables that the compiler must not optimize. 
If you do not use the volatile keyword where it is needed then the compiler might optimize accesses to the variable and generate unintended code or remove intended functionality.


