// Candidate for SCStr::operator==(char const *) at reference VA 0x101a2dc0.
// The reference compares two strings after replacing null pointers with "".
extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)

class SCStr {
public:
    const char *rep;
    bool operator==(const char *other) const;
};

bool SCStr::operator==(const char *other) const {
    const char *left = rep ? rep : "";
    const char *right = other ? other : "";
    return strcmp(left, right) == 0;
}
