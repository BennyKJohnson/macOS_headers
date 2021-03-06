//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface XCTTimeoutControls : NSObject <NSSecureCoding>
{
    double _mainThreadResponsivenessTimeout;
    double _queryExecutionTimeout;
}

+ (BOOL)supportsSecureCoding;
+ (id)standardTimeoutControls;
+ (double)defaultQueryExecutionTimeout;
+ (void)setDefaultQueryExecutionTimeout:(double)arg1;
+ (double)defaultMainThreadResponsivenessTimeout;
+ (void)setDefaultMainThreadResponsivenessTimeout:(double)arg1;
@property double queryExecutionTimeout; // @synthesize queryExecutionTimeout=_queryExecutionTimeout;
@property double mainThreadResponsivenessTimeout; // @synthesize mainThreadResponsivenessTimeout=_mainThreadResponsivenessTimeout;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

