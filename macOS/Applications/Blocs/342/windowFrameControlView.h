//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton;

@interface windowFrameControlView : NSView
{
    NSButton *_closeButton;
    NSButton *_minimizeButton;
    NSButton *_zoomButton;
}

@property NSButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property NSButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property NSButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;

@end

