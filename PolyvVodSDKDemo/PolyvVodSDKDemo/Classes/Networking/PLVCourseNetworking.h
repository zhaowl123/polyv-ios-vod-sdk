//
//  PLVCourseNetworking.h
//  PolyvVodSDKDemo
//
//  Created by BqLin on 2017/11/10.
//  Copyright © 2017年 POLYV. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PLVCourseNetworking : NSObject

/// 请求课程列表
+ (void)requestCoursesWithCompletion:(void (^)(NSArray *courses))completion;

@end
