//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSpIdContext, CSSpeakerIdNviSignalReceiver, NSObject<OS_dispatch_queue>, NviSignalProvidersController;

@interface CSSpeakerIdNviOrchestrator : NSObject
{
    NviSignalProvidersController *_signalControllerNvi;
    CSSpeakerIdNviSignalReceiver *_resultRxNvi;
    NSObject<OS_dispatch_queue> *_nviQueue;
    CSSpIdContext *_spIdCtx;
}

@property(retain, nonatomic) CSSpIdContext *spIdCtx; // @synthesize spIdCtx=_spIdCtx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nviQueue; // @synthesize nviQueue=_nviQueue;
@property(retain, nonatomic) CSSpeakerIdNviSignalReceiver *resultRxNvi; // @synthesize resultRxNvi=_resultRxNvi;
@property(retain, nonatomic) NviSignalProvidersController *signalControllerNvi; // @synthesize signalControllerNvi=_signalControllerNvi;
- (void).cxx_destruct;
- (void)_uploadDirectionVectorToAFAnalyticsOnQueue;
- (void)_endSpIdNviSignalProcessing;
- (void)_startSpIdNviSignalProcessing;
- (void)uploadDirectionVectorToAFAnalytics;
- (void)end;
- (void)start;
- (id)initWithSpeakerIdContext:(id)arg1;

@end

