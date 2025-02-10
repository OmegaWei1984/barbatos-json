#include "barbjson.hpp"

using namespace Barb;

ParseRet Json::parse(Value *v, const char *json) {
    return ParseRet::kOk;
}

Type Json::get_type(const Value *v) {
    return Type::kNull;
}
