# C 语言编程练习

主要是《The C Programming Language》一书的课后练习内容。这个应该是比较好的熟悉c语言的学习书籍和内容了。

* 1-1 Run the "hello world" program
* 1-2 Experiment to find out what happens when printf's argument string contains \c,where c is some character not listed above.
* 1-3 Modify the temperature coversion program to print a heading above the table.
* 1-4 Write program to print the corresponding Celsius to Fahrenheit table.
* 1-5 Modify the temperature conversion program to print the table in reverse order,that is from 300 degrees to 0.
* 1-6 Verify that the expression getchar() != EOF is 0 or 1.
* 1-7 Write a program to print the value of EOF.
* 1-8 Write a program to count blanks,tabs,and newlines.
* 1-9 Write a program to copy its input to its output,replacing each string of one ore more blanks by a sigle blank.
* 1-10 Write a program to copy its input to its output,replacing each tab by \t,each backspace by \b,and each baskslash by \\. This makes tabs and backspaces visible in a unambiguous way.
* 1- 11 How would you test the word count program? What kind of input are most likely to uncover bugs if there are any?
* 1-12 Write a program that prints its input one word per line.
* 1-13 Write a program to print a histogram of the length of words in its input.It is easy to draw the histogram with the bars horizontal;a vertical orientation is more challenging.
* 1-14 Write a program to print a histogram of the frequencies of different characters in int input.
* 1-15 Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
* 1-16 Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text.
* 1-17 Write a program to print all input lines that are longer than 80 characters.
* 1-18 Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines.
* 1-19 Write a function reverse(s) that reverses the character string s . Use it to write a program that reverses its input a line at a time.
* 2-1 Write a program to determine the ranges of char,short,int,and long variables,both singed and unsinged,by printing appropriate values from standard headers and by direct computation.
* 2-2 Write a loop equivalent to the for llop above without using && or ||
* 2-3 Write the function htoi(s),which converts a string hexadecimal digits(including an optional 0x or 0X) into its equivalent integer value.
* 2-4 Writ an alternate version of squeeze(s1,21) that deletes each character in the string s1 that matches any character in the string s2.
* 2-5 Write the function any(s1,s2) , which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2 . (The standard library function strpbrk does the same job but returns a pointer to the location.)
* 2-10 Rewrite the function lower,which converts upper case letters to lower case,with a conditional expression instead of if-else.
* 3-1 Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.
* 3-3 Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2 . Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z . Arrange that a leading or trailing - is taken literally.
* 3-4 Wayne Lubin's query involved Paul's discussion of two's complement. The text has now been corrected (by Paul).
* 3-5 Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s . In particular, itob(n,s,16) formats n as a hexadecimal integer in s .