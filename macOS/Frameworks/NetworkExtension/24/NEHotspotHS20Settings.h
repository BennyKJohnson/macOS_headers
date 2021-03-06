//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _roamingEnabled;
    NSString *_domainName;
    NSArray *_roamingConsortiumOIs;
    NSArray *_naiRealmNames;
    NSArray *_MCCAndMNCs;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *MCCAndMNCs; // @synthesize MCCAndMNCs=_MCCAndMNCs;
@property(copy) NSArray *naiRealmNames; // @synthesize naiRealmNames=_naiRealmNames;
@property(copy) NSArray *roamingConsortiumOIs; // @synthesize roamingConsortiumOIs=_roamingConsortiumOIs;
@property(getter=isRoamingEnabled) BOOL roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property(readonly) NSString *domainName; // @synthesize domainName=_domainName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDomainName:(id)arg1 roamingEnabled:(BOOL)arg2;
- (id)description;

@end

