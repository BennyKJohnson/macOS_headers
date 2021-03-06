//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextViewDelegate.h"
#import "ToolbeltTool.h"

@class NSFileManager, NSString, NSTextView;

@interface ToolNotes : NSView <ToolbeltTool, NSTextViewDelegate>
{
    NSTextView *textView_;
    NSFileManager *filemanager_;
    BOOL ignoreNotification_;
}

- (void)windowAppearanceDidChange:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)updateAppearance;
- (double)minimumHeight;
- (void)shutdown;
- (void)setText:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)filename;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

