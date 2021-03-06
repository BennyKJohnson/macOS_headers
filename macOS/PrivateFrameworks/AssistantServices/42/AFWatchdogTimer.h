//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AFWatchdogTimer : NSObject <NSCopying>
{
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _timeoutHandler;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
}

- (void).cxx_destruct;
- (void)reset;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)cancel;
- (BOOL)isStopped;
- (void)stop;
- (void)start;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

