#include <gtest/gtest.h>
#include "barbjson.hpp"

using namespace Barb;

TEST(ParseTest, CaseNull) {
    Value v;
    Json json;
    v.type = Type::kTrue;
    EXPECT_EQ(ParseRet::kOk, json.parse(&v, "null"));
    EXPECT_EQ(Type::kNull, json.get_type(&v));
}
