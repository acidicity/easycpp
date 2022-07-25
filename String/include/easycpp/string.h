#pragma once

#include <cstring>
#include <iostream>

namespace EasyCpp {

    class String
    {
    public:
        ~String();
        String(const char* buffer);
        String(const String& other);

        friend std::ostream& operator<<(std::ostream& out, const String& str);

    private:
        char *m_Buffer;
        size_t m_Capacity;
        size_t m_Length;
    };

    std::ostream& operator<<(std::ostream& out, const String& str);
}