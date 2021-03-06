//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSURL, TSUURLTracker;

@protocol TSUURLTrackerDelegate <NSObject>

@optional
- (void)urlTracker:(TSUURLTracker *)arg1 presentedItemDidChangeUbiquityAttributes:(NSSet *)arg2;
- (void)urlTracker:(TSUURLTracker *)arg1 presentedItemDidMoveToURL:(NSURL *)arg2;
- (void)urlTrackerPresentedItemWasDeleted:(TSUURLTracker *)arg1;
- (void)urlTrackerPresentedItemContentsDidChange:(TSUURLTracker *)arg1;
@end

