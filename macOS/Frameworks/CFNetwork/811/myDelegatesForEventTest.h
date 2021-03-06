//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSError, NSInputStream, NSOutputStream, NSString;

@interface myDelegatesForEventTest : NSObject <NSURLSessionTaskDelegate, NSStreamDelegate>
{
    NSInputStream *_inStream;
    NSOutputStream *_outStream;
    NSError *_outputStreamError;
    NSError *_inputStreamError;
    _Bool _eventRec;
}

@property(retain) NSError *inputStreamError; // @synthesize inputStreamError=_inputStreamError;
@property(retain) NSError *outputStreamError; // @synthesize outputStreamError=_outputStreamError;
- (void)closeStreams;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

