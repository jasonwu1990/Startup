/**
 *
 * Startup https://github.com/taylorwrynn/Startup
 *
 * Copyright (C) 2016 Taylor Tang
 * 
 * Released under the Apache license v2 http://www.apache.org/licenses/
 *
 */

#ifndef DLog
#define DLog

#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] %@" fmt), __PRETTY_FUNCTION__, __LINE__, [NSThread currentThread], ##__VA_ARGS__)
#else
#define DLog(fmt, ...)
#endif

#endif /* DLog */