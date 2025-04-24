#include <stdio.h>

// Function to check if the array is a palindrome.
int checkPalindrome(int arr[], int count) {



}

int main() {
    
    int arr1[50] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
        10, 9, 8, 7, 6, 5, 4, 3, 2, 1
    };
    int count1 = 40;

    
    int arr2[50] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 19, 18, 17, 16, 15, 14, 13, 12, 11,
        10, 9, 8, 7, 6, 5, 4, 3, 2, 1
    };
    int count2 = 40;

    // Check arr1
    if (checkPalindrome(arr1, count1)) {
        printf("arr1 is a palindrome.\n");
    } else {
        printf("arr1 is not a palindrome.\n");
    }

    // Check arr2
    if (checkPalindrome(arr2, count2)) {
        printf("arr2 is a palindrome.\n");
    } else {
        printf("arr2 is not a palindrome.\n");
    }

    return 0;
}
