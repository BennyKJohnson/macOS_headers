//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DropToTrack_Result-Protocol.h"

@class NSString;
@protocol DropTypeForDropToTrack_Result;

@interface DropToTrack_Result : NSObject <DropToTrack_Result>
{
    id <DropTypeForDropToTrack_Result> _dropTypeForDropToTrackResult;
    long long _dropToTrackResult;
}

@property long long dropToTrackResult; // @synthesize dropToTrackResult=_dropToTrackResult;
@property(retain) id <DropTypeForDropToTrack_Result> dropTypeForDropToTrackResult; // @synthesize dropTypeForDropToTrackResult=_dropTypeForDropToTrackResult;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

