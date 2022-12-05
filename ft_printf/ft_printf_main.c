#include "libftprintf.h"

int     main(void){

  ft_printf("str = %s\n", "Teststr");
  ft_printf("char = %c\n", 'A');
  ft_printf("int(d) = %d\n", 0);
  ft_printf("int(d) = %d\n", 134);
  ft_printf("int(d) = %d\n", -134);
  ft_printf("int(d) = %d\n", 2147483646);
  ft_printf("int(d) = %d\n", -2147483647);
  ft_printf("int(i) = %i\n", 0);
  ft_printf("int(i) = %i\n", 134);
  ft_printf("int(i) = %i\n", -134);
  ft_printf("int(i) = %i\n", 2147483646);
  ft_printf("int(i) = %i\n", -2147483647);
  ft_printf("unsigned int = %u\n", 0);
  ft_printf("unsigned int = %u\n", 134);
  ft_printf("unsigned int = %u\n", -134);
  ft_printf("unsigned int = %u\n", -1);
  ft_printf("unsigned int = %u\n", -0);
  ft_printf("hexa min = %x\n", 0);
  ft_printf("hexa min = %x\n", 1);
  ft_printf("hexa min = %x\n", -1);
  ft_printf("hexa min = %x\n", -0);
  ft_printf("hexa min = %x\n", 123456);
  ft_printf("hexa MAJ = %X\n", 0);
  ft_printf("hexa MAJ = %X\n", 1);
  ft_printf("hexa MAJ = %X\n", -1);
  ft_printf("hexa MAJ = %X\n", -0);
  ft_printf("hexa MAJ = %X\n", 123456);
  ft_printf("Pourcent = %%\n");
  return (0);
}
