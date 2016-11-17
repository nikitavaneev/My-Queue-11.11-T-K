#include <gtest/gtest.h>
#include "polindrom.h"

TEST(sred, null_mass) {
	int *a = 0;
	ASSERT_ANY_THROW(sred(a, 1, 2));
}

TEST(sred, null_window) {
	int a[5] = { 1, 1, 1, 1, 1 };
	ASSERT_ANY_THROW(sred(a, 0, 5));
}

TEST(sred, Throw) {
	int a[5] = { 1, 1, 1, 1, 1 };
	ASSERT_ANY_THROW(sred(a, 4, -1));
}

int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}