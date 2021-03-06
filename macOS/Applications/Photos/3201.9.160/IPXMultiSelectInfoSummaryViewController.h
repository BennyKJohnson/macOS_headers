//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class IPXVersionsSummarizer, NSMutableDictionary, NSOperationQueue, NSString, NSTextField, NSView, PFWorkContext;

@interface IPXMultiSelectInfoSummaryViewController : IPXViewController <IPXMetadataEditorViewController>
{
    IPXVersionsSummarizer *_summarizer;
    NSOperationQueue *_deferredDataQueue;
    NSMutableDictionary *_delayedDisplayTimers;
    PFWorkContext *_loadDateContext;
    NSTextField *_itemCountText;
    NSTextField *_dateRangeText;
    NSTextField *_itemSizeText;
}

@property(nonatomic) __weak NSTextField *itemSizeText; // @synthesize itemSizeText=_itemSizeText;
@property(nonatomic) __weak NSTextField *dateRangeText; // @synthesize dateRangeText=_dateRangeText;
@property(nonatomic) __weak NSTextField *itemCountText; // @synthesize itemCountText=_itemCountText;
- (void).cxx_destruct;
- (void)_delayedLoadingTimeout:(id)arg1;
- (void)_displayValueImmediately:(id)arg1 forControl:(id)arg2;
- (void)_displayLoadingPlaceholder:(id)arg1 forControl:(id)arg2;
- (void)_killAllDelayedDisplayTimers;
- (void)_killDelayedDisplayTimerForControl:(id)arg1;
- (void)_addDelayedDisplayTimer:(id)arg1 forControl:(id)arg2;
- (BOOL)_isRunningDelayedDisplayTimerForControl:(id)arg1;
- (id)_delayedDisplayTimerForControl:(id)arg1;
- (void)selectedVersions:(id)arg1;
- (void)propertiesHaveChanged:(id)arg1 forSelectedVersions:(id)arg2;
- (void)_displayDateRangeLoadingPlaceholder;
- (void)_enqueueDateRangeFetchOperation:(id)arg1 isImport:(BOOL)arg2;
- (void)_displaySizeLoadingPlaceholder;
- (void)_enqueueSizeFetchOperation:(id)arg1 isImport:(BOOL)arg2;
- (void)_enqueueCountFetchOperation:(id)arg1;
- (id)summarizer;
- (id)deferredDataQueue;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end

