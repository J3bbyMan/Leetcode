#include <stdio.h>
#include <string.h>

char* makeSmallestPalindrome(char* s) {
    int left_pointer = 0;
    int right_pointer = strlen(s) - 1; //strlen has time complexity of O(n)
    while (left_pointer <= right_pointer) {
        
        //lexicographical order determined by the ascii values of each character
        if (s[left_pointer] < s[right_pointer]) {
            s[left_pointer] = s[right_pointer];
        } else if (s[left_pointer] > s[right_pointer]) {
            s[right_pointer] = s[left_pointer];
        }

        left_pointer += 1;
        right_pointer += 1;
    }

    return s;
}
