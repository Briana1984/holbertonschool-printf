# printf
Holberton School project C - printf
Briana Rivera and Julian Perez
​
# _printf() in the C Programming Language
This project is about recreating the C library function printf. The function printf sends formatted output to `stdout` (standard output stream) by formatting the argument(s) passed in and converting the arguments(s) into a character string. This version will be used as `_printf`.
​
## Environment
Our printf has been tested on Ubuntu 20.04
Tests done in Ubuntu 20.04  on [SSH](ssh 74384dff64aa@74384dff64aa.af625aa7.hbtn-cod.io)
​
## Repository Breakdown
Once cloned over, the repository will contain the following files:
​
|   **File**          |  **Decription**                       |
|---------------------|---------------------------------------|
|  main.h             | header file with prototypes           |
|  README.md          | Be read.                              |
| printfFunction.c    | principal function                    |
| main.c              | program execution.                    |
| pStringFunction.c   |                                       |
| pNumIntDecFunction.c|                                       |
| pModFunction.c      |                                       |
| pIntDecFunction.c   |                                       |
| pCharFunction.c     |                                       |
| _parseoFunction.c   |                                       |
| _putcharfFunction.c |                                       |   
​
​
​
### Format tags
Format tags implemented in _printf
​
| **specifier** | **output**                            |
|---------------|---------------------------------------|
| c             | characters                            |
| s             | string of characters                  |
| d or i        | int to signed decimal                 |
| %             | percentage                            |
​
## How to Use
There are two ways to use the _printf function in your code.
First step is to clone the repository into your directory
```
$ git clone https://github.com/Briana1984/holbertonschool-printf.git
```
Once that is done, you can create a static library or use the gcc -Wall
​
​
### Compile without a static library for _printf
Make sure the _printf directory is in the same directory as your `_printf.c` file and then run the following command:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c 
```
As a consequence, be careful not to push any c file containing a`main.h` function in the root directory of your project (you could have a. `$test` folder containing all your tests files including `main` functions) takes
Our main files will include your main header file (`main.h`): `#include main.h`
You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use: 
​
## Use in code
### How to use _printf in your code
Please see the following example when _printf is implemented in your code:
​
```
#include <main.h>
​
int main(void)
{
  int _printf(const char *format, ...);
  return (0):
 }
```
​
## Notes
This _printf function currently does not support special flags [+ , - , `, \0 , #], field, width or precision.
​
## Known Bugs
There are no known bugs at the time.
​
### Authors
​
*Briana Rivera* - [Github](https://github.com/Briana1984/) 
||*Julian Perez* - [Github](https://github.com/juespega/) 
