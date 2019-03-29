# Get_NEXT_LINE---2nd-Project-42-

## What is get_next_line?:sunglasses:
get_next_line is an individual project at 42 the main concept of GNL is to reads a file line by line.

##### Disclaimer: 
There are so many easier methods of doing this by using standard C functions. But the goal here is to be able to do it by using any functions from my libft and only the standard functions read, malloc and free.

## Why would I use/try it?
You probably will never have to use this function if you are not a 42 student. The goal is to get better at C. As I said above, you can only use those three standard library functions: :imp:

1. read
2. malloc
3. free
So it makes the project harder. But you can also use functions from your personal library.

After finishing this project, you'll definitely learn some more about static variables, pointers, arrays, linked lists (if you decide to do the bonus part), dynamic memory allocation and file manipulation.

My code is not the best, but it passed all the 42 tests successfully.

I implementated the concept of recursion and reading each line at one time from the file provided by the user input.

### Installation :smile:

1. git clone https://github.com/Manmeet2018/Get_NEXT_LINE---2nd-Project-42-.git - [x]
2. cd https://github.com/Manmeet2018/Get_NEXT_LINE---2nd-Project-42-.git
3. Perform below steps:
  >> <kbd>a</kbd>  make -C libft/ fclean && make -C libft/
  - - - -
  >> <kbd>b</kbd> clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
  - - - -
  >> <kbd>c</kbd> clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
  - - - 
  >> <kbd>d</kbd> clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
4. Make the main function, test file to open and call the function till the function return's '1', and print the string which is been passed at the time of function call from the main. 
