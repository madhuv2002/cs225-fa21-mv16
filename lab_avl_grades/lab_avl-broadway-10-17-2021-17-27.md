


## Score: 40/50 (80.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==58== Memcheck, a memory error detector
==58== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==58== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==58== Command: ./test -r xml "test_find"
==58== 
==58== 
==58== HEAP SUMMARY:
==58==     in use at exit: 0 bytes in 0 blocks
==58==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==58== 
==58== All heap blocks were freed -- no leaks are possible
==58== 
==58== For counts of detected and suppressed errors, rerun with: -v
==58== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==62== Memcheck, a memory error detector
==62== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==62== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==62== Command: ./test -r xml "test_insert_big"
==62== 
==62== 
==62== HEAP SUMMARY:
==62==     in use at exit: 0 bytes in 0 blocks
==62==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==62== 
==62== All heap blocks were freed -- no leaks are possible
==62== 
==62== For counts of detected and suppressed errors, rerun with: -v
==62== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✗ - [0/10] - test_remove_big

- **Points**: 0 / 10

```
==65== Memcheck, a memory error detector
==65== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==65== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==65== Command: ./test -r xml "test_remove_big"
==65== 
==65== Invalid read of size 8
==65==    at 0x436048: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435EDA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:80)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614cd68 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436067: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435EDA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:80)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614cd60 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436048: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435F34: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:86)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614cd68 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436067: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435F34: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:86)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614cd60 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x435F8B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==  Address 0x614cd60 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x435FA2: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==  Address 0x614cd68 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid write of size 4
==65==    at 0x436021: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==  Address 0x614cd70 is 48 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436048: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435EDA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:80)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==  Address 0x614cee8 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436067: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435EDA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:80)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==  Address 0x614cee0 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436048: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435F34: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:86)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==  Address 0x614cee8 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436067: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435F34: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:86)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==  Address 0x614cee0 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x435F8B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==    by 0x45CF7A: Catch::Session::run() (catch.hpp:10106)
==65==  Address 0x614cee0 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x435FA2: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==    by 0x45CF7A: Catch::Session::run() (catch.hpp:10106)
==65==  Address 0x614cee8 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid write of size 4
==65==    at 0x436021: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x45D2B2: Catch::Session::runInternal() (catch.hpp:10149)
==65==    by 0x45CF7A: Catch::Session::run() (catch.hpp:10106)
==65==  Address 0x614cef0 is 48 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436048: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435EDA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:80)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614d2a8 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436067: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435EDA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:80)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614d2a0 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436048: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435F34: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:86)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614d2a8 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x436067: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::getBalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*) (avltree.cpp:99)
==65==    by 0x435F34: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:86)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==  Address 0x614d2a0 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x435F8B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==  Address 0x614d2a0 is 32 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid read of size 8
==65==    at 0x435FA2: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==  Address 0x614d2a8 is 40 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== Invalid write of size 4
==65==    at 0x436021: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::rebalance(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&) (avltree.cpp:93)
==65==    by 0x437BD7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:155)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x45527E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x45E616: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==  Address 0x614d2b0 is 48 bytes inside a block of size 56 free'd
==65==    at 0x4C2AF9D: free (vg_replace_malloc.c:540)
==65==    by 0x437B33: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:144)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437BCA: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:154)
==65==    by 0x437AAE: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:136)
==65==    by 0x437AE3: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&) (avltree.cpp:139)
==65==    by 0x437A3F: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::remove(int const&) (avltree.cpp:125)
==65==    by 0x429B41: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:128)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x456CA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==  Block was alloc'd at
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x435D79: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435E1B: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:117)
==65==    by 0x435DF7: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:115)
==65==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:105)
==65==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==65==    by 0x46A0C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x45A816: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x45A74C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65== 
==65== 
==65== HEAP SUMMARY:
==65==     in use at exit: 0 bytes in 0 blocks
==65==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==65== 
==65== All heap blocks were freed -- no leaks are possible
==65== 
==65== For counts of detected and suppressed errors, rerun with: -v
==65== ERROR SUMMARY: 21 errors from 21 contexts (suppressed: 0 from 0)

```



---

This report was generated for **mv16** using **9591db1f15ecadc5b95521adf97031ec151e2be7** (latest commit as of **October 17th 2021, 5:27 pm**)
