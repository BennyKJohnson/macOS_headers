//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface NSAutoreleaseContext : NSObject
{
    NSData *_backtraceData;
}

+ (id)currentContext;
@property(readonly, copy) NSData *backtraceData; // @synthesize backtraceData=_backtraceData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

