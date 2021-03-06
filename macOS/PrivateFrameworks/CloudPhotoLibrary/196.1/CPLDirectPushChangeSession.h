//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLDirectChangeSession.h>

#import <CloudPhotoLibrary/CPLPushChangeSessionImplementation-Protocol.h>

@class CPLEngineChangePipe, NSString;

@interface CPLDirectPushChangeSession : CPLDirectChangeSession <CPLPushChangeSessionImplementation>
{
    BOOL _didPushSomeChange;
    NSString *_lastSeenLibraryVersion;
    CPLEngineChangePipe *_pushQueue;
    CPLEngineChangePipe *_deletePushQueue;
}

- (void).cxx_destruct;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_appendBatchToPushQueues:(id)arg1 error:(id *)arg2;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)clientWorkDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

