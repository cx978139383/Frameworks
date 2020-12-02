//
//  NSDate+Date.h
//  BuDeJie
//
//  Created by xmg on 16/5/4.
//  Copyright © 2013年 yz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Date)

/**
 当前时间格式化

 @param formate 时间格式,例:YYYY-MM-dd-HH:mm:ss
 @return 格式化后的时间
 */
+ (NSString *)getCurrentDataWithDateFormate:(NSString *)formate;

/**
 判断下是否是今年

 @return 是返回yes
 */
- (BOOL)isThisYear;

/**
 判断下是否是今天
 
 @return 是返回yes
 */
- (BOOL)isThisToday;

/**
 判断下是否是昨天
 
 @return 是返回yes
 */
- (BOOL)isThisYesterday;

/**
 获取日期与当前日期差值
 */
- (NSDateComponents *)detalDateWithNow;

/**
 获取当天0点时间

 @return 0点时间
 */
+ (NSDate *)returnToDay0Clock;

/**
 获取当天24点时间
 
 @return 24点时间
 */
+ (NSDate *)returnToDay24Clock;

/**
 获取当前时间戳,(10位)
 
 @return 当前时间戳
 */
+ (NSString *)getCurrentDateTimeInterval10;

/**
 获取当前时间戳,(13位)
 
 @return 当前时间戳
 */
+ (NSString *)getCurrentDateTimeInterval13;

/**
 是否是12小时制
 
 @return YES:12小时制 / NO:24小时制
 */
+ (BOOL)is12HourSystem;

/**
 朋友圈/聊天 时间显示样式

 @param secondCount 时间戳
 @return 显示样式
 */
+ (NSString *)dateDisplayResult:(NSTimeInterval)secondCount;

/**
 字符串转为时间

 @param dateString 时间字符串,例2018-08-21
 @param dateFormat 时间格式,例:YYYY-MM-dd-HH:mm:ss
 @return 转换后的时间
 */
+ (instancetype)dateFrmoString:(NSString *)dateString dateFormat:(NSString *)dateFormat;

/**
 时间戳转为时间

 @param timeInterval 时间戳
 @return 转换后的时间
 */
+ (instancetype)dateFromTimeInterval:(NSString *)timeInterval;

/**
 时间转为字符串

 @param dateFormat 时间格式,例:YYYY-MM-dd-HH:mm:ss
 @return 转换后的字符串
 */
- (NSString *)dateToStingWithDateFormat:(NSString *)dateFormat;

/**
 时间转为时间戳

 @return 转换后的时间戳
 */
- (NSString *)dateToTimeInterval;

/**
 字符串为时间戳

 @param dateString 时间字符串,例2018-08-21
 @param dateFormat 时间格式,例:YYYY-MM-dd-HH:mm:ss
 @return 转换后的时间戳
 */
+ (NSString *)timeIntervalFromString:(NSString *)dateString dateFormat:(NSString *)dateFormat;

/**
 时间戳转为字符串

 @param timeInterval 时间戳
 @param dateFormat 时间格式,例:YYYY-MM-dd-HH:mm:ss
 @return 转换后的字符串
 */
+ (NSString *)stringFromTimeInterval:(NSString *)timeInterval dateFormat:(NSString *)dateFormat;

/**
 判断一个日期是星期几
 
 @return 字符串,@"星期日",@"星期一",@"星期二",@"星期三",@"星期四",@"星期五",@"星期六"
 */
- (NSString *)weekdayString;
@end
