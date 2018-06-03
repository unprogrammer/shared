#include <stdio.h>
#include <stdbool.h>

/* Should have some part that decides if we have gotten to a palindrome */

bool isPalindrome(int n) {
  int i = 0;
  int j = 0;
  int list[40];  // this is hopefully an upper bounds for what is needed 
  int remainder;
  int digit;
  int hold = n;
  while (!hold == 0) {
    remainder = hold % 10;
    hold = hold / 10; 
    i++; // this should be the length of the list
  }
  
}

bool isPalindromeList(int *n, int leng) {
  bool isPal = true;
  int j = leng - 1;
  for (int i = 0; i < leng; i++) {
     if (! n[i] == n[j]) {
      isPal = false;
    }
  }
  return isPal;
}


int x = 47;
int inverse = 0;

int result;
int length = 0;
bool isComplete = false;
int i = 0;
int j = 0;
int numList[40];

int power(int x, int p) { // Not looking necessary right now
  int i;
  int holder = 1;
  for (i = 0; i < p; i++) {
    holder *= x;
  }
  return holder;
}


int main() {
  int temp = x;
  while (! temp == 0) {
    numList[i] = temp % 10;
    temp /= 10;
    i++; // i is now the length of the list
  }
  
  int newTemp = i;
  for (j = 0; j < newTemp; j++) {
    i--;
    inverse += numList[i] * power(10, j);
  }

  int total = inverse + x;

  printf("The total is: %d\n", total);
  
  if (isPalindromeList(numList, j + 1)) {
    printf("We have a palindrome!")
  }

  return 0;
}



