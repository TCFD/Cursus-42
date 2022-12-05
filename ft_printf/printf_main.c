#include <stdio.h>

int     main(void){

  printf("str = %s\n", "Teststr");
  printf("char = %c\n", 'A');
  printf("int(d) = %d\n", 0);
  printf("int(d) = %d\n", 134);
  printf("int(d) = %d\n", -134);
  printf("int(d) = %d\n", 2147483646);
  printf("int(d) = %d\n", -2147483647);
  printf("int(i) = %i\n", 0);
  printf("int(i) = %i\n", 134);
  printf("int(i) = %i\n", -134);
  printf("int(i) = %i\n", 2147483646);
  printf("int(i) = %i\n", -2147483647);
  printf("unsigned int = %u\n", 0);
  printf("unsigned int = %u\n", 134);
  printf("unsigned int = %u\n", -134);
  printf("unsigned int = %u\n", -1);
  printf("unsigned int = %u\n", -0);
  printf("hexa min = %x\n", 0);
  printf("hexa min = %x\n", 1);
  printf("hexa min = %x\n", -1);
  printf("hexa min = %x\n", -0);
  printf("hexa min = %x\n", 123456);
  printf("hexa MAJ = %X\n", 0);
  printf("hexa MAJ = %X\n", 1);
  printf("hexa MAJ = %X\n", -1);
  printf("hexa MAJ = %X\n", -0);
  printf("hexa MAJ = %X\n", 123456);
  printf("Pourcent = %%\n");
  return (0);
}
