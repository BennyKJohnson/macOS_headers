//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCMToolVersion : NSObject
{
    unsigned long long major;
    unsigned long long minor;
    unsigned long long patch;
}

+ (id)version_1_7;
+ (id)version_1_4_4;
- (unsigned long long)patch;
- (unsigned long long)minor;
- (unsigned long long)major;
- (long long)compare:(id)arg1;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 patch:(unsigned long long)arg3;
- (id)init;

@end

