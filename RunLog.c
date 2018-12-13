//
//  RunLog.c
//  RunLogppSmartParkiOS
//
//  Created by 高栋阳 on 2018/4/16.
//  Copyright © 2018年 Alibaba. All rights reserved.
//

#include "RunLog.h"

#import <Foundation/Foundation.h>
// release模式先强制把log关闭
#ifndef DEBUG
#define HIDE_ON_RELEASE 1
#endif

#if HIDE_ON_RELEASE
void NSLogv (NSString *format, va_list args) { }
int printf (const char *format, ...) { return 0; }
#endif

static void _NSLog(id NIL, ...)
{
    va_list args;
    va_start(args, NIL);
    NSLogv(@"%@", args);
    va_end(args);
}

void NSLog (NSString *format, ...)
{
#if HIDE_ON_RELEASE
    // EMPTY REWRITE
#else
    va_list args;
    va_start(args, format);
    NSString *logString = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    _NSLog(nil, logString);
#endif
}
