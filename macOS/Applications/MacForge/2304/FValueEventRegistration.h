//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FEventRegistration.h"

@class FRepo, NSString;

@interface FValueEventRegistration : NSObject <FEventRegistration>
{
    CDUnknownBlockType _callback;
    CDUnknownBlockType _cancelCallback;
    unsigned long long _handle;
    FRepo *_repo;
}

@property(retain, nonatomic) FRepo *repo; // @synthesize repo=_repo;
@property(nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (BOOL)matches:(id)arg1;
- (id)createCancelEventFromError:(id)arg1 path:(id)arg2;
- (void)fireEvent:(id)arg1 queue:(id)arg2;
- (id)createEventFrom:(id)arg1 query:(id)arg2;
- (BOOL)responseTo:(long long)arg1;
- (id)initWithRepo:(id)arg1 handle:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3 cancelCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

