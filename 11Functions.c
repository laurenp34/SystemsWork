#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  //PROBLEM 1
  int avg(int *nums, int size ) {
    int i;
    int sum = 0;
    for(i=0;i<size;i++){
      sum += nums[i];
      //printf("current sum: %i\n", sum);
    }
    return(sum/size);
  }

  int ii;
  int test[5];
  for(ii=0;ii<5;ii++){
    test[ii] = 5 * (ii+1);
    printf("Index %i: %i\n", ii, test[ii]);
  }

  printf("\nAverage: %i\n", avg(test,5));

  //PROBLEM 2
  int copy(char *a1, char *a2, int size) {
    int l;
    for(l=0;l<size;l++){
      printf("%c",a1[l]);
      a2[l] = a1[l];
    }
    return(0);
  }

  char teeth[20] = "my aloe vera plant"; //can't declare with *teeth because immutable.
  char teest[20] = "my cacti is green ";
  copy(teeth, teest, 18);

  printf("\nNew a1: %s\nNew a2: %s\n",teeth,teest);

  //PROBLEM 3
  int strlen(char *str){
    int incr;
    for(incr=0;incr>=0;incr++) {
      //printf("%i",incr);
      if (str[incr] == NULL) {
        //printf(" %i\n", incr);
        return incr;
      }
    }
  }

  int len;

  printf("\nlen of %s: %i\n", teeth, strlen(teeth));
  printf("len of %s: %i\n", teest, strlen(teest));
  char null[] = "";
  printf("len of %s: %i\n", null, strlen(null));

}
