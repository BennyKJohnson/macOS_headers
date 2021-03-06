//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSDocumentRevisionsPlaceholderView.h>

@class NSButton, NSProgress;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsNonLocalVersionPlaceholderView : NSDocumentRevisionsPlaceholderView
{
    NSProgress *downloadProgress;
    SEL action;
    id target;
    BOOL clickEnabled;
    BOOL hasButton;
    NSButton *button;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) NSProgress *downloadProgress;
- (void)_updateForProgress;
- (void)setClickAction:(SEL)arg1 target:(id)arg2;
- (void)setElementsHidden:(BOOL)arg1;
- (BOOL)_hasButtonOrProgress;
@property BOOL hasButton;
- (void)_layout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

