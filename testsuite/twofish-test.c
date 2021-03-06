#include "testutils.h"
#include "twofish.h"

void
test_main(void)
{
  /* 128 bit key */
  test_cipher(&nettle_twofish128,
	      SHEX("0000000000000000 0000000000000000"),
	      SHEX("0000000000000000 0000000000000000"),
	      SHEX("9F589F5CF6122C32 B6BFEC2F2AE8C35A"));

  /* 192 bit key */
  test_cipher(&nettle_twofish192,
	      SHEX("0123456789ABCDEF FEDCBA9876543210"
		   "0011223344556677"),
	      SHEX("0000000000000000 0000000000000000"),
	      SHEX("CFD1D2E5A9BE9CDF 501F13B892BD2248"));

  /* 256 bit key */
  test_cipher(&nettle_twofish256,
	      SHEX("0123456789ABCDEF FEDCBA9876543210"
		   "0011223344556677 8899AABBCCDDEEFF"),
	      SHEX("0000000000000000 0000000000000000"),
	      SHEX("37527BE0052334B8 9F0CFCCAE87CFA20"));
}
