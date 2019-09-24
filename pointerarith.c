int main() {
  unsigned int i = 261;
  int *p = &i;
  char *c = &i;

  printf("*p: %p (%ld), %i\n*c: %p (%ld), %i\n\n",p,p,*p,c,c,*c); // they should print the same thing

  printf("bytes of c: %hhu\n",c);
  printf("bytes of c: %hhx\n\n",c);

  p++; //increase p by 4 (bc 4 bytes)
  c++; //increase c by 1 (bc 1 byte)

  printf("*p: %p (%ld), %i\n*c: %p (%ld), %i\n\n\n",p,p,*p,c,c,*c);

  printf("i: %u, %x\n\n\n",i,i);

  for(;i<8;++i){
    // print last bit and shift left.
    printf("%u ",num&maxPow ? 1 : 0);
    num = num<<1;
}

  printf("bytes of c: %hhu\n",c);
  printf("bytes of c: %hhx\n",c);
}
