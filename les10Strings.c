#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // EXAMPLE CODE:
  // char *s = "hello";
  // char s1[10] = "hello";
  // printf("s points to: %p\n", s);
  // printf("s1 points to: %p\n", s1);
  // printf("address of \"hello\": %p\n", &"hello");

  const char s1[] = "Good morning. I need some tissues to blow my nose.";
  const  char *s2 = "tissues";


  printf("strchr:\n");

  char dot = '.';
  char *after = strchr(s1, dot);

  printf("The part of \"%s\" after %c is \"%s\".\n\n", s1, dot, after);


  printf("strcpy:\n");

  char *orig;
  char *copy;
  strcpy(orig, "The pond");
  strcpy(copy, orig);

  printf("Original string: %s\n", orig);
  printf("Copied string: %s\n\n", copy);


  printf("strcat:\n");

  char *two = " jesus christ.";
  char one[20] = "pontius pilate";
  char *three = strcat(one, two);

  printf("combined string: %s\n\n", three);


  printf("strcmp:\n");

  char *finger = "finger";
  char *toe = "finger";
  int ret;

  ret = strcmp(finger, toe);

  if(ret < 0) {
    printf("%s is less than %s\n", finger, toe);
  } else if(ret > 0) {
    printf("%s is less than %s\n", toe, finger);
  } else {
    printf("%s is equal to %s\n", toe, finger);
  }

  finger = "FINGER";

  ret = strcmp(finger, toe);

  if(ret < 0) {
    printf("%s is less than %s\n", finger, toe);
  } else if(ret > 0) {
    printf("%s is less than %s\n", toe, finger);
  } else {
    printf("%s is equal to %s\n", toe, finger);
  }

  toe = "FINGERS";

  ret = strcmp(finger, toe);

  if(ret < 0) {
    printf("%s is less than %s\n", finger, toe);
  } else if(ret > 0) {
    printf("%s is less than %s\n", toe, finger);
  } else {
    printf("%s is equal to %s\n", toe, finger);
  }



  return(0);



  //COPIED FROM TUTORIALSPOINT
  // const char str[] = "http://www.tutorialspoint.com";
  // const char ch = '.';
  // char *ret;
  //
  // ret = strchr(str, ch);
  //
  // printf("String after |%c| is - |%s|\n", ch, ret);
  //
  // return(0);
}
