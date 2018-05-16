#ifndef UTILS_H
#define UTILS_H

#include <QString>

namespace Utils
{
inline QString startColor(const QString& color){ return "<font color='"+color+"'>"; }
inline QString endFont(){ return "</font>"; }
template< typename T >
inline void unuse(T t){ (void)t; }
}

#endif // UTILS_H
