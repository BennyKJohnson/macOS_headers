//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBLocalDate <NSObject>
@property(nonatomic) BOOL hasYear;
@property(nonatomic) long long year;
@property(nonatomic) BOOL hasMonth;
@property(nonatomic) long long month;
@property(nonatomic) BOOL hasDayOfWeek;
@property(nonatomic) int dayOfWeek;
@property(nonatomic) BOOL hasDayOfMonth;
@property(nonatomic) long long dayOfMonth;
- (int)StringAsDayOfWeek:(NSString *)arg1;
- (NSString *)dayOfWeekAsString:(int)arg1;
@end

