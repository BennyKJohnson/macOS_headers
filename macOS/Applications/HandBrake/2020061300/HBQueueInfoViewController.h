//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class HBQueueItem, NSScrollView, NSTextField, NSView;

@interface HBQueueInfoViewController : NSViewController
{
    BOOL _canReset;
    HBQueueItem *_item;
    NSView *_statisticsHeader;
    NSTextField *_statisticsLabel;
    NSTextField *_summaryLabel;
    NSScrollView *_scrollView;
    id <HBQueueDetailsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL canReset; // @synthesize canReset=_canReset;
@property(nonatomic) __weak id <HBQueueDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSTextField *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) __weak NSTextField *statisticsLabel; // @synthesize statisticsLabel=_statisticsLabel;
@property(nonatomic) __weak NSView *statisticsHeader; // @synthesize statisticsHeader=_statisticsHeader;
@property(retain, nonatomic) HBQueueItem *item; // @synthesize item=_item;
- (void)resetItem:(id)arg1;
- (void)editItem:(id)arg1;
- (void)updateLabels;
- (void)updateReset;
- (void)setUpObservers;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

