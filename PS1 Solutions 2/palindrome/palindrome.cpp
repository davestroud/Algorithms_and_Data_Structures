/**
 * palindrome.cpp - This program implements a recursive predicate function
 *                  called validPalindrome();
 *
 * Course: CS3330 Data Structures and Algorithms
 * Author: Dr. Jack Davault
 */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool validPalindrome(string s);

int main(int argc, char **argv)
{
   cout << "civic=" << validPalindrome("civic") << endl;
   cout << "stacks=" << validPalindrome("stacks") << endl;
   cout << "hannah=" << validPalindrome("hannah") << endl;
   cout << "noel sees leon=" << validPalindrome("noel sees leon") << endl;
   cout << "tree=" << validPalindrome("tree") << endl;
   cout << "kayak=" << validPalindrome("kayak") << endl;
   cout << "graph=" << validPalindrome("graph") << endl;
   cout << "alula=" << validPalindrome("alula") << endl;

   cout << endl << "Press any key to continue." << endl;
   getchar();

   return 0;
}

bool validPalindrome(string s)
{
    bool returnValue = false;
    int len = s.length();

    if (len <= 1)
      returnValue = true;
    else if (s[0] == s[len-1])
      returnValue = validPalindrome(s.substr(1,len-2));
    else
      returnValue = false;
    
    return returnValue;
}

