/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      CMock_Init(); \
      setUp(); \
      TestFunc(); \
      CMock_Verify(); \
  } \
  CMock_Destroy(); \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "zmtp_tests.h"
#include "pico_zmtp.h"
#include <stdint.h>
#include "Mockpico_socket.h"
#include "Mockpico_vector.h"
#include "Mockpico_zalloc.h"

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_zmtp_tests_NeedToImplement(void);
extern void test_zmtp_socket_send(void);
extern void test_zmtp_socket_connect(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  Mockpico_socket_Init();
  Mockpico_vector_Init();
  Mockpico_zalloc_Init();
}
static void CMock_Verify(void)
{
  Mockpico_socket_Verify();
  Mockpico_vector_Verify();
  Mockpico_zalloc_Verify();
}
static void CMock_Destroy(void)
{
  Mockpico_socket_Destroy();
  Mockpico_vector_Destroy();
  Mockpico_zalloc_Destroy();
}

//=======Test Reset Option=====
void resetTest()
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "Testzmtp_tests.c";
  UnityBegin();
  RUN_TEST(test_zmtp_tests_NeedToImplement, 19);
  RUN_TEST(test_zmtp_socket_send, 24);
  RUN_TEST(test_zmtp_socket_connect, 539);

  return (UnityEnd());
}
