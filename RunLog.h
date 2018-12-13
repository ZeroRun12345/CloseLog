//
//  RunLogLog.h
//  RunLogppSmartParkiOS
//
//  Created by 高栋阳 on 2018/4/16.
//  Copyright © 2018年 Alibaba. All rights reserved.
//

//#import <Foundation/Foundation.h>

#ifndef RunLogLog_h
#define RunLogLog_h

#include <stdio.h>

void NSLogv (NSString *format, va_list args);

static void _NSLog(id NIL, ...);

void NSLog (NSString *format, ...);

#endif /* RunLogLog_h */
