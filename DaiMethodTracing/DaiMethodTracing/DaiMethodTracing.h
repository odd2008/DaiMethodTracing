//
//  DaiMethodTracing.h
//  DaiMethodTracing
//
//  Created by 啟倫 陳 on 2014/5/27.
//  Copyright (c) 2014年 ChilunChen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DaiMethodTracing : NSObject

+ (void)tracingClass:(Class)aClass;

// 簡述模式, default 為 YES
+ (void)simpleMode:(BOOL)simpleMode;

@end
