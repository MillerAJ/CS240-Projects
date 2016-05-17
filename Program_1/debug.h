#ifndef MYDEBUG_H
#define MYDEBUG_H

#include <iostream>

#define DEBUG 0
#if DEBUG
#define TRACE() std::cerr << __FILE__ << " : " << __LINE__ << std::endl;
#else
#define TRACE()
#endif

#endif

