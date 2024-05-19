#include "barbjson.h"

static int main_ret = 0;
static int test_count = 0;
static int test_pass = 0;

static void test_parse_null()
{
    barbjson::Value v;
    v.type = barbjson::Type::kNull;
}

static void test_parse()
{
    test_parse_null();
}

int main(void)
{
    test_parse();
    return 0;
}
