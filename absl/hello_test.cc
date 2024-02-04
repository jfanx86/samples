#include <string>
#include "gtest/gtest.h"
#include "hello.h"

namespace hello {
namespace {

TEST(Greeter, Works) {
  EXPECT_EQ("Hello tester", Greet("tester"));
}

}  // namespace
}  // namespace hello