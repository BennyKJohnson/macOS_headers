//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCConnection, NSXPCInterface, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    struct NSMutableSet *_xpcCnxSet;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _connectionStartedHandler;
    CDUnknownBlockType _connectionEndedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCInterface *_remoteObjectInterface;
}

@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionEndedHandler; // @synthesize connectionEndedHandler=_connectionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStartedHandler; // @synthesize connectionStartedHandler=_connectionStartedHandler;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_connectionInvalidated:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (BOOL)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

