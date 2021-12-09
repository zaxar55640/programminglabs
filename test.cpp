#include <gtest/gtest.h>
#include <math.h>
#include "pch.h"
using namespace std;

struct lab2test {
    int a = 45;
    lab2test() {

    }
    explicit lab2test(const int a)
        : a{ a }
    {
    }
};

int finder() {
    lab2test lab;
    double pi = 3.1415926535;
    double a = lab.a;
    double z1;
    z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a) / cos(a) - cos(3 * a) + cos(5 * a));
    return z1;
}

TEST(lab2test, finder) {
    lab2test lab;
    EXPECT_EQ(0, finder());
    EXPECT_TRUE(true);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}