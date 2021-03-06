//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SUPowerSourceMonitor : NSObject
{
    struct __CFRunLoopSource *_powerRunLoopSource;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    CDUnknownBlockType _notifyBlock;
    BOOL _isAC;
}

+ (BOOL)isSafeToAutoInstallGivenCurrentPowerSources;
+ (BOOL)isRunningOnACPower;
- (void)_stopObservingPowerSource;
- (void)_startObservingPowerSource;
- (void)_handleChangeInPowerSource;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

