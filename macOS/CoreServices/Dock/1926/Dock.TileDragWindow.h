//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Dock.WALayerKitWindow.h"

@interface Dock.TileDragWindow : Dock.WALayerKitWindow
{
    // Error parsing type: , name: tile
    // Error parsing type: , name: canRemoveTile
    // Error parsing type: , name: imageLayer
    // Error parsing type: , name: labelLayer
    // Error parsing type: , name: space
    // Error parsing type: , name: finalized
}

- (CDUnknownBlockType).cxx_destruct;
- (void)removeTile;
- (void)cancelRemoveTile;
- (void)setCanRemoveTile:(BOOL)arg1;
@property(nonatomic, readonly) struct CGRect imageScreenFrame;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tile:(id)arg2;

@end

