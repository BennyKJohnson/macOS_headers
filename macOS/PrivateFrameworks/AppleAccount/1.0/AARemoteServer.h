//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AARemoteServerConfigurationCache, AAURLSession;
@protocol OS_dispatch_queue;

@interface AARemoteServer : NSObject
{
    AAURLSession *_session;
    AAURLSession *_absintheSession;
    struct os_unfair_lock_s _configurationLock;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AARemoteServerConfigurationCache *_configurationCache;
}

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)_fetchConfigurationAndResponseWithCompletion:(CDUnknownBlockType)arg1;
- (id)_configurationLock_configurationCacheInvalidatingIfNecessary;
- (id)_configurationCacheInvalidatingIfNecessary;
- (void)_setConfigurationCache:(id)arg1;
- (void)_configurationAndResponseWithCompletion:(CDUnknownBlockType)arg1;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)_newURLRequestWithURLString:(id)arg1;
- (void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)_redactedBodyStringWithPropertyList:(id)arg1;
- (id)_bodyDictionaryWithProtocolVersion:(id)arg1;
- (void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerAccount:(id)arg1 withHSA:(BOOL)arg2 usingCookieHeaders:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerAccount:(id)arg1 withHSA:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

