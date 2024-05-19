#ifndef BARBJSON_H__
#define BARBJSON_H__

namespace barbjson {

enum class Type
{
    kNull,
    kFalse,
    kTrue,
    kNumber,
    kString,
    kArray,
    kObject,
};

struct Value
{
    Type type;
};

struct Context
{
    const char* json;
};

class Parser
{
public:
    enum class Ret
    {
        kOk,
        kExpectValue,
        kInvalidValue,
        kRootNotSingular,
    };

    Ret parse(const char* json);

    Type GetType() const;

private:
    Context *c;
};

}
#endif
