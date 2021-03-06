//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/CUReadWriteRequestable-Protocol.h>

@class CUReadRequest, NSNumber, NSString, RPCloudDaemon;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPCloudSession : NSObject <CUReadWriteRequestable>
{
    BOOL _activateCalled;
    CDUnknownBlockType _activateCompletion;
    BOOL _clientMode;
    BOOL _guardSessionStarted;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableArray *_readChunks;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    int _state;
    struct LogCategory *_ucat;
    struct NSMutableArray *_writeRequests;
    BOOL _responseReceived;
    RPCloudDaemon *_cloudDaemon;
    NSString *_cloudServiceID;
    NSString *_destinationID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    NSString *_label;
    CDUnknownBlockType _invalidationHandler;
    NSNumber *_peerSessionID;
    NSNumber *_selfSessionID;
}

@property(copy, nonatomic) NSNumber *selfSessionID; // @synthesize selfSessionID=_selfSessionID;
@property(nonatomic) BOOL responseReceived; // @synthesize responseReceived=_responseReceived;
@property(copy, nonatomic) NSNumber *peerSessionID; // @synthesize peerSessionID=_peerSessionID;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(copy, nonatomic) NSString *cloudServiceID; // @synthesize cloudServiceID=_cloudServiceID;
@property(retain, nonatomic) RPCloudDaemon *cloudDaemon; // @synthesize cloudDaemon=_cloudDaemon;
- (void).cxx_destruct;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (void)_processWriteRequest:(id)arg1;
- (void)_processWrites;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_abortReadsWithError:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads;
- (void)readWithRequest:(id)arg1;
- (BOOL)_runSessionStart;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)_heartbeatTimerFired;
- (void)receivedSessionData:(id)arg1;
- (void)_receivedSessionStartResponse:(id)arg1 error:(id)arg2;
- (void)receivedSessionStartResponse:(id)arg1 error:(id)arg2;
- (void)_invalidated;
- (void)_invalidateWithError:(id)arg1;
- (void)invalidate;
- (BOOL)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

