//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNRecordingEvent, KNRecordingOffscreenEventPlayer;

@interface KNRecordingOffscreenEventPlayerEnumerationState : NSObject
{
    KNRecordingOffscreenEventPlayer *_offscreenEventPlayer;
    unsigned long long _currentEventIndex;
    BOOL _currentEventUnplayed;
}

@property(readonly, nonatomic, getter=isCurrentEventUnplayed) BOOL currentEventUnplayed; // @synthesize currentEventUnplayed=_currentEventUnplayed;
@property(readonly, nonatomic) KNRecordingOffscreenEventPlayer *offscreenEventPlayer; // @synthesize offscreenEventPlayer=_offscreenEventPlayer;
- (void).cxx_destruct;
- (void)incrementCurrentEvent;
@property(readonly, nonatomic) double nextEventStartTime;
- (void)markCurrentEventAsPlayed;
@property(readonly, nonatomic) KNRecordingEvent *currentEvent;
- (id)initWithOffscreenEventPlayer:(id)arg1;

@end

