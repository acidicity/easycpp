#include <easycpp/string.h>

namespace EasyCpp {

    String::String(const char *buffer)
        :m_Length(strlen(buffer)), m_Capacity(strlen(buffer) + 1)
    {
        m_Buffer = new char[m_Capacity];
        
        memcpy(m_Buffer, buffer, strlen(buffer));
        m_Buffer[m_Length] = '\0';
    }

    String::String(const String& other)
        :m_Length(other.m_Length), m_Capacity(other.m_Capacity)
    {
        m_Buffer = new char[m_Capacity];

        memcpy(m_Buffer, other.m_Buffer, m_Capacity);
    }

    String::~String()
    {
        delete[] m_Buffer;
    }

    std::ostream& operator<<(std::ostream& out, const String& str)
    {
        out << str.m_Buffer;
        return out;
    }
}