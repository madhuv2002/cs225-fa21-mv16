


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==64== Memcheck, a memory error detector
==64== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==64== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==64== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==64== 
==64== 
==64== HEAP SUMMARY:
==64==     in use at exit: 0 bytes in 0 blocks
==64==   total heap usage: 2,492 allocs, 2,492 frees, 278,680 bytes allocated
==64== 
==64== All heap blocks were freed -- no leaks are possible
==64== 
==64== For counts of detected and suppressed errors, rerun with: -v
==64== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==66== Memcheck, a memory error detector
==66== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==66== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==66== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==66== 
==66== 
==66== HEAP SUMMARY:
==66==     in use at exit: 0 bytes in 0 blocks
==66==   total heap usage: 2,492 allocs, 2,492 frees, 276,488 bytes allocated
==66== 
==66== All heap blocks were freed -- no leaks are possible
==66== 
==66== For counts of detected and suppressed errors, rerun with: -v
==66== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==68== Memcheck, a memory error detector
==68== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==68== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==68== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==68== 
==68== 
==68== HEAP SUMMARY:
==68==     in use at exit: 0 bytes in 0 blocks
==68==   total heap usage: 2,496 allocs, 2,496 frees, 277,208 bytes allocated
==68== 
==68== All heap blocks were freed -- no leaks are possible
==68== 
==68== For counts of detected and suppressed errors, rerun with: -v
==68== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **mv16** using **cddc6392a7971e848274527c3b4737af91c40d73** (latest commit as of **September 12th 2021, 4:26 pm**)
