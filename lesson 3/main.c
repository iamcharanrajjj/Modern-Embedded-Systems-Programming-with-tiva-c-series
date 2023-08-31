//variables and pointers
int counter = 0;

int main() {
  int *ptr;
  ptr = &counter;
  while (*ptr < 21) {
  ++(*ptr);
  }
  //playing with the pointers/ HACKS
  ptr = (int *)0x00202002u; 
/*try this without type-casting u'll get an error, make sure that the breakpoint 
is in the above line, then during debug use run to cursor position then use step into 
so that, 0x00202002 (ptr address) will be loaded manually in the register R0 */ 

  *ptr = 0xDEADBEEF; //only letter combinations from 10-15 i.e A-F
  return 0;
}
