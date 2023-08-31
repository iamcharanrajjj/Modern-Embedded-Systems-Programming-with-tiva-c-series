//variables and pointers
int counter = 0;

int main() {
  int *ptr;
  ptr = &counter;
  while (*ptr < 21) {
  ++(*ptr);
  }
  //playing with the pointers/ HACKS
  ptr = (int *)0x00202002u; //try this without type-casting u'll get an error
  *ptr = 0xDEADBEEF; //only letter combinations from 10-15 i.e A-F
  return 0;
}
