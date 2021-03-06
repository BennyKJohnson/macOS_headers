//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface SKInGameAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _internalGameInProgress;
    NSString *_sessionID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_stopObservingLifecycleNotifications;
- (void)_startObservingLifecycleNotifications;
- (void)_recievedAppWillTerminateNotification;
- (void)_receivedAppWillResignActiveNotification;
- (void)_stopSessionTimerAndNotifications;
- (void)_startSessionWithID:(id)arg1;
- (void)_gamePlayDidEndWithReason:(long long)arg1;
- (void)_gamePlayDidBegin;
@property(nonatomic, getter=isGameSessionInProgress) BOOL gameSessionInProgress;
- (id)init;

@end

