//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOAnalyticsPipelineProxy.h"

@class NSOperationQueue, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>
{
    NSOperationQueue *_opQueue;
    unsigned long long _maxOpCount;
    unsigned long long _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
}

- (void).cxx_destruct;
- (id)getEvalStatus;
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;
- (void)initiateUploadOfType:(int)arg1;
- (void)flushEvalData;
- (void)setEvalMode:(BOOL)arg1;
- (void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)setShortSessionValues:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)shortSessionValuesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)_reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

