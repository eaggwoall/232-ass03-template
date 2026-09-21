#ifndef UNITY_H
#define UNITY_H
#include "unity.h"
#endif

// ============================================================
// Forward declarations — implemented in code.c
// ============================================================

typedef struct Node {
    int value;
    struct Node *nextPtr;
} Node;

void  swap(int *aPtr, int *bPtr);
char* find_last_char(char *sPtr);
void  link_three(Node *aPtr, Node *bPtr, Node *cPtr);
void  remove_middle(Node *aPtr, Node *bPtr, Node *cPtr);
void  remove_last(Node *bPtr);
void  remove_first(Node *aPtr);
void  swap_ptrs(int **aPtrPtr, int **bPtrPtr);
void  nullify(int **ppPtr);
void  assign_bytes(long long *nPtr);
int   sum_chain(Node *headPtr);


// ============================================================
//  UNIT TESTS
//
//  Rules:
//  - Set up all variables on the STACK — no malloc.
//  - Call the function under test.
//  - Use TEST_ASSERT_* to verify the result.
//  - Each function must be self-contained.
//  - Do NOT modify function names or signatures.
// ============================================================


// ============================================================
// test_swap_basic
//
// Call swap with two different integer values.
// Verify that both variables hold the exchanged values
// after the call.
// ============================================================

void test_swap_basic(void)
{
    int a = 5, b = 3;
    int resA = b, resB = a;
    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(resA, a);
    TEST_ASSERT_EQUAL_INT(resB, b);
}


// ============================================================
// test_swap_equal
//
// Call swap with two variables that hold the same value.
// Verify that both variables still hold that value after
// the call — nothing should change.
// ============================================================

void test_swap_equal(void)
{
    // TODO
}


// ============================================================
// test_find_last_basic
//
// Call find_last_char on a string with multiple characters.
// Verify that the returned pointer points to the correct
// last character and has the correct address.
// ============================================================

void test_find_last_basic(void)
{
    // TODO
}


// ============================================================
// test_find_last_single
//
// Call find_last_char on a string with exactly one character.
// Verify that the returned pointer points to that character
// and equals the address of the first element.
// ============================================================

void test_find_last_single(void)
{
    // TODO
}


// ============================================================
// test_find_last_empty
//
// Call find_last_char on an empty string.
// Verify that the function returns NULL.
// ============================================================

void test_find_last_empty(void)
{
    // TODO
}


// ============================================================
// test_link_three_chain
//
// Declare three Node variables on the stack.
// Call link_three to connect them.
// Verify that:
//   - aPtr->nextPtr points to bPtr
//   - bPtr->nextPtr points to cPtr
//   - cPtr->nextPtr is NULL
// ============================================================

void test_link_three_chain(void)
{
    // TODO
}


// ============================================================
// test_remove_middle_reconnects
//
// Build the chain a -> b -> c -> NULL using link_three.
// Call remove_middle.
// Verify that:
//   - aPtr->nextPtr now points directly to cPtr
//   - bPtr->nextPtr is NULL (disconnected)
// ============================================================

void test_remove_middle_reconnects(void)
{
    // TODO
}


// ============================================================
// test_remove_last_truncates
//
// Build the chain a -> b -> c -> NULL using link_three.
// Call remove_last with bPtr.
// Verify that:
//   - bPtr->nextPtr is NULL
//   - aPtr->nextPtr still points to bPtr (unchanged)
// ============================================================

void test_remove_last_truncates(void)
{
    // TODO
}


// ============================================================
// test_remove_first_isolates
//
// Build the chain a -> b -> c -> NULL using link_three.
// Call remove_first with aPtr.
// Verify that:
//   - aPtr->nextPtr is NULL (isolated)
//   - bPtr->nextPtr still points to cPtr (unchanged)
// ============================================================

void test_remove_first_isolates(void)
{
    // TODO
}


// ============================================================
// test_swap_ptrs_redirects
//
// Declare two integer variables and two pointers to them.
// Call swap_ptrs.
// Verify that each pointer now points to the other variable.
// ============================================================

void test_swap_ptrs_redirects(void)
{
    // TODO
}


// ============================================================
// test_swap_ptrs_values_unchanged
//
// Declare two integer variables and two pointers to them.
// Call swap_ptrs.
// Verify that the INTEGER VALUES at the original addresses
// are completely unchanged after the call.
// ============================================================

void test_swap_ptrs_values_unchanged(void)
{
    // TODO
}


// ============================================================
// test_nullify_sets_null
//
// Declare an integer and a pointer to it.
// Verify the pointer is NOT NULL before the call.
// Call nullify.
// Verify the pointer IS NULL after the call.
// ============================================================

void test_nullify_sets_null(void)
{
    // TODO
}


// ============================================================
// test_nullify_value_unchanged
//
// Declare an integer and a pointer to it.
// Call nullify.
// Verify that the INTEGER VALUE at the original address
// is unchanged after the call.
// ============================================================

void test_nullify_value_unchanged(void)
{
    // TODO
}


// ============================================================
// test_assign_bytes_first_and_last
//
// Declare a long long variable initialized to zero.
// Call assign_bytes.
// Cast the address to unsigned char* and verify that
// byte 0 equals 1 and byte 7 equals 8.
// ============================================================

void test_assign_bytes_first_and_last(void)
{
    // TODO
}


// ============================================================
// test_assign_bytes_all
//
// Declare a long long variable initialized to zero.
// Call assign_bytes.
// Cast the address to unsigned char* and verify that
// every byte i contains the value i + 1.
// ============================================================

void test_assign_bytes_all(void)
{
    // TODO
}


// ============================================================
// test_sum_chain_basic
//
// Declare three Node variables on the stack.
// Link them into a chain using link_three.
// Assign known values to each node.
// Call sum_chain and verify the returned sum is correct.
// ============================================================

void test_sum_chain_basic(void)
{
    // TODO
}


// ============================================================
// test_sum_chain_single
//
// Declare a single Node with a known value.
// Set nextPtr to NULL.
// Call sum_chain and verify it returns that single value.
// ============================================================

void test_sum_chain_single(void)
{
    // TODO
}


// ============================================================
// test_sum_chain_null
//
// Call sum_chain with NULL.
// Verify the function returns 0 without crashing.
// ============================================================

void test_sum_chain_null(void)
{
    // TODO
}
