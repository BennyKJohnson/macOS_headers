//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCLocking.h"

@interface RCMutexLock : NSObject <RCLocking>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

- (void)unlock;
- (void)lock;
- (void)performWithLockSync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

