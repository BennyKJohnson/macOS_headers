//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSTableCellView, NSTimer, NSTrackingArea;
@protocol AUInfoViewDelegate;

@interface AUInfoTableView : NSTableView
{
    BOOL canShowInformationViewImmediately;
    NSTimer *_infoViewTimer;
    NSTableCellView<AUInfoViewDelegate> *_cellView;
    NSTrackingArea *_trackingArea;
    BOOL popoverClosing;
}

@property(nonatomic) BOOL popoverClosing; // @synthesize popoverClosing;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL canShowInformationViewImmediately; // @synthesize canShowInformationViewImmediately;
- (void)showInfoView:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)appWillBecomeInactive:(id)arg1;
- (void)invalidateInfoViewTimer;
- (void)addInfoViewTimerForTableCellView:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

