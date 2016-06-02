/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <stdio.h>
#include <string.h>

void quickSort(char *arr, int si, int ei);
bool areAnagram(char *str1, char *str2) {
    // Get lenghts of both strings
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    // If length of both strings is not same, then they 
    // cannot be anagram
    if (n1 != n2)
        return false;

    // Sort both strings
    quickSort(str1, 0, n1 - 1);
    quickSort(str2, 0, n2 - 1);

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

void exchange(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char A[], int si, int ei) {
    char x = A[ei];
    int i = (si - 1);
    int j;

    for (j = si; j <= ei - 1; j++) {
        if (A[j] <= x) {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange(&A[i + 1], &A[ei]);
    return (i + 1);
}

void quickSort(char A[], int si, int ei) {
    int pi;
    if (si < ei) {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}

int main() {
    char str1[] = "welcome to my kingdom";
    char str2[] = "two milkmen go comedy";
    if (areAnagram(str1, str2))
        printf("The two strings are anagram of each other");
    else
        printf("The two strings are not anagram of each other");

    return 0;
}