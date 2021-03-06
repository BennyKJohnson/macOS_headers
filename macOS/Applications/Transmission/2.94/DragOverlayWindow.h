//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSViewAnimation;

@interface DragOverlayWindow : NSWindow
{
    struct tr_session *fLib;
    NSViewAnimation *fFadeInAnimation;
    NSViewAnimation *fFadeOutAnimation;
}

- (void)fadeOut;
- (void)fadeIn;
- (void)setURL:(id)arg1;
- (void)setFile:(id)arg1;
- (void)setTorrents:(id)arg1;
- (void)dealloc;
- (id)initWithLib:(struct tr_session *)arg1 forWindow:(id)arg2;
- (void)resizeWindow;

@end

