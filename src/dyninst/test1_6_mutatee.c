/*
 * See the dyninst/COPYRIGHT file for copyright information.
 * 
 * We provide the Paradyn Tools (below described as "Paradyn")
 * on an AS IS basis, and do not warrant its validity or performance.
 * We reserve the right to update, modify, or discontinue this
 * software at any time.  We shall have no obligation to supply such
 * updates or modifications or any other form of support to you.
 * 
 * By your use of Paradyn, you understand and agree that we (or any
 * other person or entity with proprietary rights in Paradyn) are
 * under no obligation to provide either maintenance services,
 * update services, notices of latent defects, or correction of
 * defects for Paradyn.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
#include "mutatee_util.h"
#include "solo_mutatee_boilerplate.h"
#include <limits.h>

/* Externally accessed function prototypes.  These must have globally unique
 * names.  I suggest following the pattern <testname>_<function>
 */

void test1_6_func2();
int test1_6_func1();

/* Global variables accessed by the mutator.  These must have globally unique
 * names.
 */

volatile int test1_6_globalVariable1 = (int)0xdeadbeef;
volatile int test1_6_globalVariable2 = (int)0xdeadbeef;
volatile int test1_6_globalVariable3 = (int)0xdeadbeef;
volatile int test1_6_globalVariable4 = (int)0xdeadbeef;
volatile int test1_6_globalVariable5 = (int)0xdeadbeef;
volatile int test1_6_globalVariable6 = (int)0xdeadbeef;
volatile int test1_6_globalVariable7 = (int)0xdeadbeef;
volatile int test1_6_globalVariable8 = (int)0xdeadbeef;

volatile int test1_6_globalVariable1a = (int)0xdeadbeef;
volatile int test1_6_globalVariable2a = (int)0xdeadbeef;
volatile int test1_6_globalVariable3a = (int)0xdeadbeef;
volatile int test1_6_globalVariable4a = (int)0xdeadbeef;
volatile int test1_6_globalVariable5a = (int)0xdeadbeef;
volatile int test1_6_globalVariable6a = (int)0xdeadbeef;
volatile int test1_6_globalVariable7a = (int)0xdeadbeef;
volatile int test1_6_globalVariable8a = (int)0xdeadbeef;

volatile int test1_6_globalVariable1b = (int)0xdeadbeef;
volatile int test1_6_globalVariable2b = (int)0xdeadbeef;
volatile int test1_6_globalVariable3b = (int)0xdeadbeef;
volatile int test1_6_globalVariable4b = (int)0xdeadbeef;
volatile long long test1_6_globalVariable5b = (long long)0xdeadbeef;
volatile int test1_6_globalVariable6b = (int)0xdeadbeef;
volatile long long test1_6_globalVariable7b = (long long)0xdeadbeef;
volatile long long test1_6_globalVariable8b = (long long)0xdeadbeef;
volatile unsigned long long test1_6_globalVariable9b = 0;
volatile unsigned long long test1_6_globalVariable10b = 0;
volatile long long test1_6_globalVariable11b = 0;
volatile long long test1_6_globalVariable12b = 0;
volatile unsigned long long test1_6_globalVariable13b = 0;


volatile int test1_6_constVar0 = 0;
volatile int test1_6_constVar1 = 1;
volatile int test1_6_constVar2 = 2;
volatile int test1_6_constVar3 = 3;
volatile int test1_6_constVar4 = 4;
volatile int test1_6_constVar5 = 5;
volatile int test1_6_constVar6 = 6;
volatile int test1_6_constVar7 = 7;
volatile int test1_6_constVar9 = 9;
volatile int test1_6_constVar10 = 10;
volatile int test1_6_constVar60 = 60;
volatile int test1_6_constVar64 = 64;
volatile int test1_6_constVar66 = 66;
volatile int test1_6_constVar67 = 67;

/* Internally used function prototypes.  These should be declared with the
 * keyword static so they don't interfere with other mutatees in the group.
 */

/* Global variables used internally by the mutatee.  These should be declared
 * with the keyword static so they don't interfere with other mutatees in the
 * group.
 */

/* Function definitions follow */

int test1_6_func1() {
  int retval;
  test1_6_func2();
  if ((test1_6_globalVariable1 == 60+2) && (test1_6_globalVariable2 == 64-1) &&
      (test1_6_globalVariable3 == 66/3) && (test1_6_globalVariable4 == 67/3) &&
      (test1_6_globalVariable5 == 6 * 5) && (test1_6_globalVariable6 == 3) &&
      (test1_6_globalVariable7 == 10/2) && (test1_6_globalVariable8 == (5^9)) &&
      (test1_6_globalVariable1a == 60+2) && (test1_6_globalVariable2a == 64-1) &&
      (test1_6_globalVariable3a == 66/3) && (test1_6_globalVariable4a == 67/3) &&
      (test1_6_globalVariable5a == 6 * 5) && (test1_6_globalVariable6a == 3)
      && (test1_6_globalVariable7a == 10/2) && (test1_6_globalVariable8a == (67^10))
      && (test1_6_globalVariable1b == -2)
      && (test1_6_globalVariable2b == 0)
      && (test1_6_globalVariable3b == 0)
      && (test1_6_globalVariable4b == 0)
      && (test1_6_globalVariable5b == 6442450941)
      && (test1_6_globalVariable6b == 3)
      && (test1_6_globalVariable7b == 4294967298)
      && (test1_6_globalVariable8b == 565847624616LL)
      && (test1_6_globalVariable9b == 184467440737095516ULL)
      && (test1_6_globalVariable10b == ULLONG_MAX)
      && (test1_6_globalVariable11b == -2LL)
      && (test1_6_globalVariable12b == -25LL)
      && (test1_6_globalVariable13b == ULLONG_MAX / 32ULL)
      ) {
    logerror("Passed test #6 (arithmetic operators)\n");
    retval = 0; /* Test passed */
  } else {
    logerror("**Failed** test #6 (arithmetic operators)\n");
    if (test1_6_globalVariable1 != 60+2)
      logerror("    addition error (const) 60+2 got %d\n", test1_6_globalVariable1);
    if (test1_6_globalVariable2 != 64-1)
      logerror("    subtraction error (const) 64-1 got %d\n", test1_6_globalVariable2);
    if (test1_6_globalVariable3 != 66/3)
      logerror("    division error (const) 66/3 got %d\n", test1_6_globalVariable3);
    if (test1_6_globalVariable4 != 67/3)
      logerror("    division error (const) 67/3 got %d\n", test1_6_globalVariable4);
    if (test1_6_globalVariable5 != 6 * 5)
      logerror("    mult error 6*5 (const) got %d\n", test1_6_globalVariable5);
    if (test1_6_globalVariable6 != 3)
      logerror("    comma error 10,3 (const) got %d\n", test1_6_globalVariable6);
    if (test1_6_globalVariable7 != 10/2)
      logerror("    division error (const) 10/2 got %d\n", test1_6_globalVariable7);
    if (test1_6_globalVariable8 != (5^9))
      logerror("    xor error (const) 12 got %d\n", test1_6_globalVariable8);
    if (test1_6_globalVariable1a != 60+2)
      logerror("    addition error 60+2 (var) got %d\n", test1_6_globalVariable1a);
    if (test1_6_globalVariable2a != 64-1)
      logerror("    subtraction error 64-1 (var) got %d\n", test1_6_globalVariable2a);
    if (test1_6_globalVariable3a != 66/3)
      logerror("    division error 66/3 (var) got %d\n", test1_6_globalVariable3a);
    if (test1_6_globalVariable4a != 67/3)
      logerror("    division error 67/3 (var) got %d\n", test1_6_globalVariable4a);
    if (test1_6_globalVariable5a != 6 * 5)
      logerror("    mult error 6*5 (var) got %d\n", test1_6_globalVariable5a);
    if (test1_6_globalVariable6a != 3)
      logerror("    comma error 10,3 (var) got %d\n", test1_6_globalVariable6a);
    if (test1_6_globalVariable7a != 10/2)
      logerror("    division error 10/2 (var) got %d\n", test1_6_globalVariable7a);
    if (test1_6_globalVariable8a != (67^10))
      logerror("    xor error 67/10 (var) got %d\n", test1_6_globalVariable8a);
    if (test1_6_globalVariable1b != -2)
      logerror("    (-1) + (-1) got %d\n", test1_6_globalVariable1b);
    if (test1_6_globalVariable2b != 0)
      logerror("    (-66666) - (-66666) got %d\n", test1_6_globalVariable2b);
    if (test1_6_globalVariable3b != 0)
      logerror("    INT_MAX - INT_MAX got %d\n", test1_6_globalVariable3b);
    if (test1_6_globalVariable4b != 0)
      logerror("    INT_MAX - LLONG_MAX - (-INT_MIN + LLONG_MIN) got %d\n", test1_6_globalVariable4b);
    if (test1_6_globalVariable5b != 6442450941)
      logerror("    3 * INT_MAX got %ld\n", test1_6_globalVariable5b);
    if (test1_6_globalVariable6b != 3)
      logerror("    10 / 3 got %d\n" ,  test1_6_globalVariable6b);
    if (test1_6_globalVariable7b != 4294967298)
      logerror("    LLONG_MAX / INT_MAX got %ld\n", test1_6_globalVariable7b);
    if (test1_6_globalVariable8b != 565847624616LL)
      logerror("    4600387192 * 123 got %ld\n", test1_6_globalVariable8b);
    if (test1_6_globalVariable9b != 184467440737095516ULL)
      logerror("    ULLONG_MAX / 100 got %llu\n", test1_6_globalVariable9b);
    if (test1_6_globalVariable10b != ULLONG_MAX)
      logerror("    3689348814741910323 * 5 got %llu\n", test1_6_globalVariable10b);
    if (test1_6_globalVariable11b != -2LL)
      logerror("    (-10) / 5 got %lld\n", test1_6_globalVariable11b);
    if (test1_6_globalVariable12b != -25LL)
      logerror("    (-100) / 4 got %lld\n", test1_6_globalVariable12b);
    if (test1_6_globalVariable13b != ULLONG_MAX / 32ULL)
      logerror("    ULLONG_MAX / 32 got %lld\n", test1_6_globalVariable13b);
    retval = -1; /* Test failed */
  }
  return retval;
}

/*
 * Start of Test #6 - arithmetic operators
 *	Verify arithmetic operators:
 *		constant integer addition
 *		constant integer subtraction
 *		constant integer divide (using large constants)
 *		constant integer divide (small consts)
 *		constant integer multiply
 *		constant comma operator
 *		variable integer addition
 *		variable integer subtraction
 *		variable integer divide (using large constants)
 *		variable integer divide (small consts)
 *		variable integer multiply
 *		variable comma operator
 *
 *	constant - use constant expressions
 *	variable - use variables in the expressions
 *
 */
int test1_6_mutatee() {
  if (test1_6_func1()) {
    return -1; /* Test failed */
  } else {
    test_passes(testname);
    return 0; /* Test passed */
  }
}

void test1_6_func2() {
  dprintf("test1_6_func2 () called\n");
}
