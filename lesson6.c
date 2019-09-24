int main() {
  char c = 1;
  int i = 50;
  long l = 1356;

  //The addresses are subsequent in hex
  printf("%p %ld %p\n", &c, &i, &l);

  //create pointer objectds:
   char *ch; //ch = char pointer
   int *ip;
   long *lp;

   ch = &c;
   ip = &i;
   lp = &l;

   //modify orig vars with pointer objectds
   c = *ch + 1;
   i = *ip - 39;
   l = *lp * .5;

   printf("%c\n",c);
   printf("%c %i %ld\n", c, i, l);

   //create char type pointer
   char *toast;
   toast = &i;

   printf("%ld: %i\n", toast, *toast);

   //modify value using pointer
   i = *toast - 9;

   printf("%i\n", i);
}
