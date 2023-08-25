# Libft Introduction

Libft (Library of Functions)

This is your first 42 Roma Luiss project and it aims to code a C library regrouping usual functions that we’ll be allowed to use in all our other 42 projects.

In this project, you will be creating a library of functions, the file structure for this project is the following:

### .c Files 
Where all of your functions will be written in. 

### .h (Header)
Your header file is useful for 2 things:
- First, instead of doing for example `#include <unistd.h>` in all of your .c files, you just write it once in your header and all of your .c files will read it from your header file. 
- Secondly, let's say one of your .c files uses another function from another .c file, well instead of writting that function above, just write `#include "libft.h"` and it will find it in your header file. 

Make sure you add `#include "libft.h"` in all of your .c files.

### Makefile 
Makefile is where you will create a file to compile your projects. Remember how in the piscine, you created an **int main** and **gcc** to compile the projects, well with a Makefile, you don't have to do that anymore, you just type `make` once you have created your Makefile. 

## Why Use Libft?
Efficiency: libft functions are optimized for performance and memory usage.
Standard Functions: Many libft functions mirror standard C library functions, making it easier to transition to C programming.
Custom Additions: libft includes additional functions and data structures that are not part of the standard library.
Consistency: All libft functions follow a consistent naming convention (ft_function_name) for easy reference.
Open Source: libft is open-source software released under the MIT License, allowing you to use, modify, and distribute it freely.

## Memory Management
Functions for allocating, deallocating, and manipulating memory.

## String Manipulation
Functions for handling strings, including searching, concatenation, and comparison.

## Character Handling
Functions for character classification and manipulation.

## Linked Lists
Functions for creating and manipulating singly linked lists.

## File I/O
Functions for reading from and writing to files.

## Additional Functions
A variety of utility functions for tasks like error management and mathematical operations.

# Great Resources for Libft

Prototype of Libft <br/>
https://www.asidesigned.com/project-libft.html

Makefile <br/>
https://makefiletutorial.com/<br/><br/>https://gl.developpez.com/tutoriel/outil/makefile/<br/><br/>http://perso.univ-lyon1.fr/jean-claude.iehl/Public/educ/Makefile.html<br/><br/>Typecasting<br/>https://www.tutorialspoint.com/cprogramming/c_type_casting.htm<br/><br/>https://zhu45.org/posts/2017/Jan/19/typecasting-in-c/<br/><br/>https://developerinsider.co/type-casting-c-programming/<br/><br/>https://www.geeksforgeeks.org/typecasting-in-c/<br/><br/>Memory<br/>https://www.geeksforgeeks.org/memory-layout-of-c-program/<br/><br/>https://craftofcoding.wordpress.com/2015/12/07/memory-in-c-the-stack-the-heap-and-static/<br/><br/>https://www.gnu.org/software/libc/manual/html_node/Memory-Allocation-and-C.html<br/><br/>https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16595-lallocation-dynamique<br/><br/>https://rperrot.developpez.com/articles/c/allocationC/<br/><br/>https://waytolearnx.com/2019/03/difference-entre-allocation-dynamique-et-allocation-statique.html<br/><br/>https://buzut.net/cours/computer-science/differents-types-de-memoires<br/><br/>https://www.it-swarm-fr.com/fr/c/difference-entre-lallocation-de-memoire-statique-et-lallocation-de-memoire-dynamique/940988866/<br/><br/>http://www.cs.ru.nl/~erikpoll/sws1/slides/hic4.pdf


Pointers <br/>
https://www.geeksforgeeks.org/void-pointer-c-cpp/?ref=lbp/<br/><br/>https://www.geeksforgeeks.org/dangling-void-null-wild-pointers/<br/><br/>https://www.javatpoint.com/c-dereference-pointer<br/><br/>Functions<br/>https://webdevdesigner.com/q/what-is-the-difference-between-memcmp-strcmp-and-strncmp-in-c-102548/<br/><br/>https://pvs-studio.com/en/blog/posts/cpp/0360/<br/><br/>https://www.geeksforgeeks.org/what-are-static-functions-in-c/<br/><br/>https://www.cs.utah.edu/~germain/PPS/Topics/C_Language/c_functions.html<br/><br/>Data types<br/>
https://web.maths.unsw.edu.au/~lafaye/CCM/c/ctype.htm<br/><br/>https://www.arm.linux.org.uk/docs/faqs/signedchar.php<br/><br/>Errors<br/>https://www.geeksforgeeks.org/segmentation-fault-sigsegv-vs-bus-error-sigbus/

https://www.geeksforgeeks.org/program-error-signals/<br/><br/>https://www.educba.com/types-of-errors-in-c/<br/><br/>http://www.yolinux.com/TUTORIALS/C++Signals.html


File descriptor <br/>
https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/<br/><br/>Linked list <br/>
https://www.geeksforgeeks.org/data-structures/linked-list/<br/><br/>Others<br/>https://www.exploit-db.com/docs/english/28477-linux-integer-overflow-and-underflow.pdf

https://www.lri.fr/~hivert/COURS/CFA-L3/02-Recursivite.pdf


# Libft Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to an specific size.
- [`ft_strlcat`](ft_strlcat.c)	- concatenate string to an specific size.
- [`ft_strchr`](ft_strchr.c)	- locate character in string.
- [`ft_strrchr`](ft_strrchr.c)	- locate character in string.
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](ft_strdup.c)	- creates a dupplicate for the string passed as parameter.

### Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list.
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list.
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
- [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list.


# Link To Libft Tester
https://github.com/FranFrau/Supreme-Tester-Libft

Good Luck!
