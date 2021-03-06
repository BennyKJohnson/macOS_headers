//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "BTTKeySequenceRecognizerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"

@class Gesture, NSButton, NSMutableOrderedSet, NSSlider, NSString, NSTableView, NSTextField;

__attribute__((visibility("hidden")))
@interface BTTKeySequenceConfigurator : NSWindowController <NSWindowDelegate, BTTKeySequenceRecognizerDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _recording;
    NSTextField *_keySequenceTextField;
    NSMutableOrderedSet *_keys;
    NSTableView *_tableView;
    Gesture *_gesture;
    NSButton *_allowRetriggerCheckbox;
    NSButton *_startStopButton;
    NSSlider *_timeBeforeSlider;
    NSSlider *_timeBetweenSlider;
    NSSlider *_timeAfterSlider;
    NSButton *_deleteTypedCheckbox;
    NSTextField *_deleteTypedTextfield;
    double _beforeTime;
    double _betweenTime;
    NSButton *_undoCheckbox;
    long long _numberToDelete;
    NSTextField *_sequenceTextfield;
}

@property(nonatomic) BOOL recording; // @synthesize recording=_recording;
@property __weak NSTextField *sequenceTextfield; // @synthesize sequenceTextfield=_sequenceTextfield;
@property(nonatomic) long long numberToDelete; // @synthesize numberToDelete=_numberToDelete;
@property(nonatomic) NSButton *undoCheckbox; // @synthesize undoCheckbox=_undoCheckbox;
@property(nonatomic) double betweenTime; // @synthesize betweenTime=_betweenTime;
@property(nonatomic) double beforeTime; // @synthesize beforeTime=_beforeTime;
@property(nonatomic) NSTextField *deleteTypedTextfield; // @synthesize deleteTypedTextfield=_deleteTypedTextfield;
@property(nonatomic) NSButton *deleteTypedCheckbox; // @synthesize deleteTypedCheckbox=_deleteTypedCheckbox;
@property(nonatomic) NSSlider *timeAfterSlider; // @synthesize timeAfterSlider=_timeAfterSlider;
@property(nonatomic) NSSlider *timeBetweenSlider; // @synthesize timeBetweenSlider=_timeBetweenSlider;
@property(nonatomic) NSSlider *timeBeforeSlider; // @synthesize timeBeforeSlider=_timeBeforeSlider;
@property __weak NSButton *startStopButton; // @synthesize startStopButton=_startStopButton;
@property(nonatomic) NSButton *allowRetriggerCheckbox; // @synthesize allowRetriggerCheckbox=_allowRetriggerCheckbox;
@property(retain, nonatomic) Gesture *gesture; // @synthesize gesture=_gesture;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableOrderedSet *keys; // @synthesize keys=_keys;
@property(nonatomic) NSTextField *keySequenceTextField; // @synthesize keySequenceTextField=_keySequenceTextField;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)markOrderRelevant:(id)arg1;
- (void)markRequired:(id)arg1;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addKeyToSequence:(id)arg1 ignoreRequired:(BOOL)arg2 character:(id)arg3;
- (void)addKeyToSequence:(id)arg1;
- (void)toggleDeleteTypedCharacters:(id)arg1;
- (void)clearSequence:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithGesture:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)startStopRecording:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

