//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCAccessChecker : NSObject
{
}

- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)arg1;
- (id)init;

@end

