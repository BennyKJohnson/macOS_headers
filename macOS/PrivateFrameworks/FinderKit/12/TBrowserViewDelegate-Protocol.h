//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDraggingDestinationDelegate.h"
#import "TSpringLoadingDestinationDelegate.h"

@class NSView;

@protocol TBrowserViewDelegate <TDraggingDestinationDelegate, TSpringLoadingDestinationDelegate>
- (void)getDropTargetNode:(struct TFENode *)arg1 fromDraggingInfo:(id <NSDraggingInfo>)arg2 inDropTargetView:(NSView *)arg3;
@end

