#pragma once

namespace Barb {
enum class Type {
    kNull = 0,
    kFalse,
    kTrue,
    kNumber,
    kString,
    kArray,
    kObject
};

enum class ParseRet {
    kOk = 0,
    kExpctValue,
    kInvalidValue,
    kRootNotSingular
};

struct Value {
    Type type;
};

class Json {
public:
    ParseRet parse(Value *v, const char *json);
    Type get_type(const Value* v);
};
}
