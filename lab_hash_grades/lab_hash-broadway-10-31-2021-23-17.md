


## Score: 132/150 (88.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==76== Memcheck, a memory error detector
==76== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==76== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==76== Command: ./test -r xml "DH::testRemoveEASY"
==76== 
==76== 
==76== HEAP SUMMARY:
==76==     in use at exit: 0 bytes in 0 blocks
==76==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==76== 
==76== All heap blocks were freed -- no leaks are possible
==76== 
==76== For counts of detected and suppressed errors, rerun with: -v
==76== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==78== Memcheck, a memory error detector
==78== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==78== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==78== Command: ./test -r xml "DH::testRemoveHard"
==78== 
==78== 
==78== HEAP SUMMARY:
==78==     in use at exit: 0 bytes in 0 blocks
==78==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==78== 
==78== All heap blocks were freed -- no leaks are possible
==78== 
==78== For counts of detected and suppressed errors, rerun with: -v
==78== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==80== Memcheck, a memory error detector
==80== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==80== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==80== Command: ./test -r xml "DH::testResizeOnce"
==80== 
==80== 
==80== HEAP SUMMARY:
==80==     in use at exit: 0 bytes in 0 blocks
==80==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==80== 
==80== All heap blocks were freed -- no leaks are possible
==80== 
==80== For counts of detected and suppressed errors, rerun with: -v
==80== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==82== Memcheck, a memory error detector
==82== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==82== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==82== Command: ./test -r xml "DH::testResizeAll"
==82== 
==82== 
==82== HEAP SUMMARY:
==82==     in use at exit: 0 bytes in 0 blocks
==82==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==82== 
==82== All heap blocks were freed -- no leaks are possible
==82== 
==82== For counts of detected and suppressed errors, rerun with: -v
==82== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==84== Memcheck, a memory error detector
==84== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==84== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==84== Command: ./test -r xml "DH::testInsertEasy"
==84== 
==84== 
==84== HEAP SUMMARY:
==84==     in use at exit: 0 bytes in 0 blocks
==84==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==84== 
==84== All heap blocks were freed -- no leaks are possible
==84== 
==84== For counts of detected and suppressed errors, rerun with: -v
==84== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==86== Memcheck, a memory error detector
==86== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==86== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==86== Command: ./test -r xml "DH::testInsertHard"
==86== 
==86== 
==86== HEAP SUMMARY:
==86==     in use at exit: 0 bytes in 0 blocks
==86==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==86== 
==86== All heap blocks were freed -- no leaks are possible
==86== 
==86== For counts of detected and suppressed errors, rerun with: -v
==86== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==88== Memcheck, a memory error detector
==88== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==88== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==88== Command: ./test -r xml "SC::testRemoveEASY"
==88== 
==88== 
==88== HEAP SUMMARY:
==88==     in use at exit: 0 bytes in 0 blocks
==88==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==88== 
==88== All heap blocks were freed -- no leaks are possible
==88== 
==88== For counts of detected and suppressed errors, rerun with: -v
==88== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==90== Memcheck, a memory error detector
==90== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==90== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==90== Command: ./test -r xml "SC::testRemoveHard"
==90== 
==90== 
==90== HEAP SUMMARY:
==90==     in use at exit: 0 bytes in 0 blocks
==90==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==90== 
==90== All heap blocks were freed -- no leaks are possible
==90== 
==90== For counts of detected and suppressed errors, rerun with: -v
==90== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==92== Memcheck, a memory error detector
==92== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==92== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==92== Command: ./test -r xml "SC::testResizeOnce"
==92== 
==92== 
==92== HEAP SUMMARY:
==92==     in use at exit: 0 bytes in 0 blocks
==92==   total heap usage: 2,007 allocs, 2,007 frees, 249,664 bytes allocated
==92== 
==92== All heap blocks were freed -- no leaks are possible
==92== 
==92== For counts of detected and suppressed errors, rerun with: -v
==92== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==94== Memcheck, a memory error detector
==94== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==94== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==94== Command: ./test -r xml "SC::testResizeAll"
==94== 
==94== 
==94== HEAP SUMMARY:
==94==     in use at exit: 0 bytes in 0 blocks
==94==   total heap usage: 1,906 allocs, 1,906 frees, 242,848 bytes allocated
==94== 
==94== All heap blocks were freed -- no leaks are possible
==94== 
==94== For counts of detected and suppressed errors, rerun with: -v
==94== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==96== Memcheck, a memory error detector
==96== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==96== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==96== Command: ./test -r xml "SC::testInsertEasy"
==96== 
==96== 
==96== HEAP SUMMARY:
==96==     in use at exit: 0 bytes in 0 blocks
==96==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==96== 
==96== All heap blocks were freed -- no leaks are possible
==96== 
==96== For counts of detected and suppressed errors, rerun with: -v
==96== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==98== Memcheck, a memory error detector
==98== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==98== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==98== Command: ./test -r xml "SC::testInsertHard"
==98== 
==98== 
==98== HEAP SUMMARY:
==98==     in use at exit: 0 bytes in 0 blocks
==98==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==98== 
==98== All heap blocks were freed -- no leaks are possible
==98== 
==98== For counts of detected and suppressed errors, rerun with: -v
==98== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==100== Memcheck, a memory error detector
==100== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==100== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==100== Command: ./test -r xml "LP::testRemoveEASY"
==100== 
==100== 
==100== HEAP SUMMARY:
==100==     in use at exit: 0 bytes in 0 blocks
==100==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==100== 
==100== All heap blocks were freed -- no leaks are possible
==100== 
==100== For counts of detected and suppressed errors, rerun with: -v
==100== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==102== Memcheck, a memory error detector
==102== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==102== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==102== Command: ./test -r xml "LP::testRemoveHard"
==102== 
==102== 
==102== HEAP SUMMARY:
==102==     in use at exit: 0 bytes in 0 blocks
==102==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==102== 
==102== All heap blocks were freed -- no leaks are possible
==102== 
==102== For counts of detected and suppressed errors, rerun with: -v
==102== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/7] - LP::testResizeOnce

- **Points**: 0 / 7

```
==104== Memcheck, a memory error detector
==104== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==104== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==104== Command: ./test -r xml "LP::testResizeOnce"
==104== 
==104== 
==104== HEAP SUMMARY:
==104==     in use at exit: 1,152 bytes in 36 blocks
==104==   total heap usage: 2,010 allocs, 1,974 frees, 246,349 bytes allocated
==104== 
==104== 352 bytes in 11 blocks are definitely lost in loss record 1 of 2
==104==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==104==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==104==    by 0x43F25D: LPHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (lphashtable.cpp:205)
==104==    by 0x43EAAC: LPHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (lphashtable.cpp:84)
==104==    by 0x43B680: ____C_A_T_C_H____T_E_S_T____4() (tests-lp.cpp:71)
==104==    by 0x472002: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==104==    by 0x462756: Catch::TestCase::invoke() const (catch.hpp:10793)
==104==    by 0x46268C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==104==    by 0x45EBE6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==104==    by 0x45D1BE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==104==    by 0x466556: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==104==    by 0x4651F2: Catch::Session::runInternal() (catch.hpp:10149)
==104== 
==104== 800 bytes in 25 blocks are definitely lost in loss record 2 of 2
==104==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==104==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==104==    by 0x43EB06: LPHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (lphashtable.cpp:91)
==104==    by 0x43B680: ____C_A_T_C_H____T_E_S_T____4() (tests-lp.cpp:71)
==104==    by 0x472002: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==104==    by 0x462756: Catch::TestCase::invoke() const (catch.hpp:10793)
==104==    by 0x46268C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==104==    by 0x45EBE6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==104==    by 0x45D1BE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==104==    by 0x466556: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==104==    by 0x4651F2: Catch::Session::runInternal() (catch.hpp:10149)
==104==    by 0x464EBA: Catch::Session::run() (catch.hpp:10106)
==104== 
==104== LEAK SUMMARY:
==104==    definitely lost: 1,152 bytes in 36 blocks
==104==    indirectly lost: 0 bytes in 0 blocks
==104==      possibly lost: 0 bytes in 0 blocks
==104==    still reachable: 0 bytes in 0 blocks
==104==         suppressed: 0 bytes in 0 blocks
==104== 
==104== For counts of detected and suppressed errors, rerun with: -v
==104== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```



### ✗ - [0/11] - LP::testResizeAll

- **Points**: 0 / 11

```
==106== Memcheck, a memory error detector
==106== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==106== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==106== Command: ./test -r xml "LP::testResizeAll"
==106== 
==106== 
==106== HEAP SUMMARY:
==106==     in use at exit: 1,152 bytes in 36 blocks
==106==   total heap usage: 1,909 allocs, 1,873 frees, 239,837 bytes allocated
==106== 
==106== 352 bytes in 11 blocks are definitely lost in loss record 1 of 2
==106==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==106==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==106==    by 0x43F25D: LPHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (lphashtable.cpp:205)
==106==    by 0x43EAAC: LPHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (lphashtable.cpp:84)
==106==    by 0x43C5F2: ____C_A_T_C_H____T_E_S_T____6() (tests-lp.cpp:96)
==106==    by 0x472002: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==106==    by 0x462756: Catch::TestCase::invoke() const (catch.hpp:10793)
==106==    by 0x46268C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==106==    by 0x45EBE6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==106==    by 0x45D1BE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==106==    by 0x466556: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==106==    by 0x4651F2: Catch::Session::runInternal() (catch.hpp:10149)
==106== 
==106== 800 bytes in 25 blocks are definitely lost in loss record 2 of 2
==106==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==106==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==106==    by 0x43EB06: LPHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (lphashtable.cpp:91)
==106==    by 0x43C5F2: ____C_A_T_C_H____T_E_S_T____6() (tests-lp.cpp:96)
==106==    by 0x472002: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==106==    by 0x462756: Catch::TestCase::invoke() const (catch.hpp:10793)
==106==    by 0x46268C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==106==    by 0x45EBE6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==106==    by 0x45D1BE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==106==    by 0x466556: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==106==    by 0x4651F2: Catch::Session::runInternal() (catch.hpp:10149)
==106==    by 0x464EBA: Catch::Session::run() (catch.hpp:10106)
==106== 
==106== LEAK SUMMARY:
==106==    definitely lost: 1,152 bytes in 36 blocks
==106==    indirectly lost: 0 bytes in 0 blocks
==106==      possibly lost: 0 bytes in 0 blocks
==106==    still reachable: 0 bytes in 0 blocks
==106==         suppressed: 0 bytes in 0 blocks
==106== 
==106== For counts of detected and suppressed errors, rerun with: -v
==106== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==108== Memcheck, a memory error detector
==108== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==108== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==108== Command: ./test -r xml "LP::testInsertEasy"
==108== 
==108== 
==108== HEAP SUMMARY:
==108==     in use at exit: 0 bytes in 0 blocks
==108==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==108== 
==108== All heap blocks were freed -- no leaks are possible
==108== 
==108== For counts of detected and suppressed errors, rerun with: -v
==108== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==110== Memcheck, a memory error detector
==110== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==110== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==110== Command: ./test -r xml "LP::testInsertHard"
==110== 
==110== 
==110== HEAP SUMMARY:
==110==     in use at exit: 0 bytes in 0 blocks
==110==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==110== 
==110== All heap blocks were freed -- no leaks are possible
==110== 
==110== For counts of detected and suppressed errors, rerun with: -v
==110== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



---

This report was generated for **mv16** using **bcdaac4dd000a7aeaedda14abec842c8362a058f** (latest commit as of **October 31st 2021, 11:17 pm**)
