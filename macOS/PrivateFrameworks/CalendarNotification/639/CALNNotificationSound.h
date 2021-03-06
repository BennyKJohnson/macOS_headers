//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding>
{
    long long _alertType;
    NSString *_alertTopic;
}

+ (BOOL)supportsSecureCoding;
+ (id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *alertTopic; // @synthesize alertTopic=_alertTopic;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqualToSound:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2;

@end

