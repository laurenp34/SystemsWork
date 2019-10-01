int main() {
  int i = 26100000000;
  int *p = &i;
  char *c = &i;

  printf("i is an int of size %d bytes\n", sizeof(i));
  printf("i:: decimal: %u; hex: %x\n\n", i, i);

  printf("int *p: %p (%ld) points to %i\n char *c: %p (%ld) points to %i\n\n",p,p,*p,c,c,*c); // they should print the same thing

  //Print bytes of i:
  printf("byte 1 of i: %hhx\n",*c);
  c++;
  printf("byte 2 of i: %hhx\n",*c);
  c++;
  printf("byte 3 of i: %hhx\n",*c);
  c++;
  printf("byte 4 of i: %hhx\n",*c);

  //Incrememt each byte of i:
  c = &i;
  *c += 1; //incrememt current byte by 1
  c++; //move pointer along to next byte
  *c += 1; //incrememt current byte by 1
  c++; //move pointer along to next byte
  *c += 1; //incrememt current byte by 1
  c++; //move pointer along to next byte
  *c += 1; //incrememt current byte by 1
  c++; //move pointer along to next byte

  printf("\nincremented each byte of i by 1: \n");
  printf("i:: decimal: %u; hex: %x\n\n", i, i);

  //Print bytes of i:
  c = &i;
  printf("byte 1 of i: %hhx\n",*c);
  c++;
  printf("byte 2 of i: %hhx\n",*c);
  c++;
  printf("byte 3 of i: %hhx\n",*c);
  c++;
  printf("byte 4 of i: %hhx\n",*c);

  //Incrememt each byte of i:
  c = &i;
  *c += 0x10; //incrememt current byte by 1
  c++; //move pointer along to next byte
  *c += 0x10; //incrememt current byte by 1
  c++; //move pointer along to next byte
  *c += 0x10; //incrememt current byte by 1
  c++; //move pointer along to next byte
  *c += 0x10; //incrememt current byte by 1
  c++; //move pointer along to next byte

  printf("\nincremented each byte of i by 16: \n");
  printf("i:: decimal: %u; hex: %x\n\n", i, i);

  //Print bytes of i:
  c = &i;
  printf("byte 1 of i: %hhx\n",*c);
  c++;
  printf("byte 2 of i: %hhx\n",*c);
  c++;
  printf("byte 3 of i: %hhx\n",*c);
  c++;
  printf("byte 4 of i: %hhx\n",*c);


  // p++; //increase p by 4 (bc 4 bytes)
  // c++; //increase c by 1 (bc 1 byte)
  //
  // printf("*p: %p (%ld) points to %i\n*c: %p (%ld) points to %i\n\n",p,p,*p,c,c,*c);
  //
  // printf("i: %u, %x\n\n\n",i,i);
  //
  // printf("bytes of c: %hhu\n",c);
  // printf("bytes of c: %hhx\n",c);
}
