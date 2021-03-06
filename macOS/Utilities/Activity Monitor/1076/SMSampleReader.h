//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSDate, NSMutableString, NSOutlineView, NSPopUpButton, NSProgressIndicator, NSScrollView, NSTask, NSTextField, NSTextView, NSView, NSWindow, SMProcess, SMSampleFrame;

@interface SMSampleReader : NSObject
{
    NSOutlineView *_outlineView;
    NSPopUpButton *_displayTypePopup;
    NSButton *_hideFrameButton;
    NSButton *_showHiddenFramesCheckbox;
    NSTextField *_limitField;
    NSTextField *_statusField;
    NSTextField *_displayString;
    NSButton *_saveButton;
    NSTextView *_textView;
    NSScrollView *_scrollView;
    NSScrollView *_textScrollView;
    NSView *_sampleControlView;
    NSTextField *_waitLabel;
    NSProgressIndicator *_progress;
    NSButton *_refreshButton;
    SMSampleFrame *_rootFrame;
    SMSampleFrame *_selectedFrame;
    BOOL _includeHidden;
    int _statusNeedsUpdate;
    NSMutableString *_sampleOutput;
    NSDate *_sampleStartDate;
    double _sampleTimeInterval;
    BOOL _spindump;
    BOOL _shouldCloseOnCancel;
    NSWindow *_window;
    NSWindow *_pleaseWaitWindow;
    SMProcess *_process;
    unsigned long long _jobTicket;
    NSTask *_sampleTask;
}

+ (id)newControllerWithProcess:(id)arg1 forSpindump:(BOOL)arg2;
@property BOOL shouldCloseOnCancel; // @synthesize shouldCloseOnCancel=_shouldCloseOnCancel;
@property(retain) NSTask *sampleTask; // @synthesize sampleTask=_sampleTask;
@property unsigned long long jobTicket; // @synthesize jobTicket=_jobTicket;
@property(getter=isSpindump) BOOL spindump; // @synthesize spindump=_spindump;
@property(retain) SMProcess *process; // @synthesize process=_process;
@property(retain) NSWindow *pleaseWaitWindow; // @synthesize pleaseWaitWindow=_pleaseWaitWindow;
@property(retain) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)saveSample:(id)arg1;
- (void)save:(id)arg1;
- (void)toggleAllItemSibblings:(id)arg1;
- (void)toggleItem:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)updateStatus;
- (void)noteStatusNeedsUpdate;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)showHiddenFramesClicked:(id)arg1;
- (void)showFrameClicked:(id)arg1;
- (void)hideFrameClicked:(id)arg1;
- (void)displayTypeChanged:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)awakeFromNib;
- (void)_updateUI;
- (void)updateWithSampleData:(id)arg1 process:(BOOL)arg2;
- (void)_hideProgressSheet;
- (void)_showProgressSheet;
- (void)cancel:(id)arg1;
- (void)toggleRefresh:(id)arg1;
- (void)instantSample:(id)arg1;
- (void)sample:(id)arg1;
- (BOOL)_startSamplingForSeconds:(int)arg1;
- (id)locString:(id)arg1;
- (BOOL)needsAuthorization;
- (void)dealloc;
- (id)_initWithProcess:(id)arg1 forSpindump:(BOOL)arg2;

@end

