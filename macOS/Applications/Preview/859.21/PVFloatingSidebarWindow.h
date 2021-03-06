//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSLayoutConstraint, NSObject, NSTrackingArea, NSView;
@protocol PVFloatingSidebarDelegate;

@interface PVFloatingSidebarWindow : NSWindow
{
    NSObject<PVFloatingSidebarDelegate> *_floatingSidebarDelegate;
    NSView *_slidingView;
    NSView *_sidebarView;
    NSTrackingArea *_openTrackingArea;
    NSTrackingArea *_closeTrackingArea;
    NSTrackingArea *_resizeTrackingArea;
    BOOL _sidebarExpanded;
    BOOL _onRightSide;
    BOOL _trackingAreasEnabled;
    BOOL _sidebarNeedsUpdate;
    NSLayoutConstraint *_sidebarWidthConstraint;
    NSLayoutConstraint *_sidebarHeightConstraint;
    NSLayoutConstraint *_sidebarLeftEdgeConstraint;
}

@property(nonatomic) BOOL trackingAreasEnabled; // @synthesize trackingAreasEnabled=_trackingAreasEnabled;
@property NSObject<PVFloatingSidebarDelegate> *floatingSidebarDelegate; // @synthesize floatingSidebarDelegate=_floatingSidebarDelegate;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)removeTrackingAreas;
- (double)adjustedSidebarWidthForNewWidth:(double)arg1 cursor:(id *)arg2;
- (void)setExpanded:(BOOL)arg1;
- (void)collapseWithAnimation:(BOOL)arg1;
- (void)expandWithAnimation:(BOOL)arg1;
- (struct CGRect)resizeTrackingRect;
- (double)sidebarLeftEdgeConstantForCollapsedState:(BOOL)arg1;
- (void)removeSidebarView;
- (void)installSidebarView:(id)arg1;
@property(nonatomic) double height;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 parentRect:(struct CGRect)arg2 initialWidth:(double)arg3 onRightSide:(BOOL)arg4;

@end

