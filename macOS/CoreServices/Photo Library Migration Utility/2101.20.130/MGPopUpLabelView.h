//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@class MGPopUpLabelLayer, NSString;

@interface MGPopUpLabelView : NSView
{
    struct CGRect _oldBounds;
    MGPopUpLabelLayer *_labelLayer;
    double _labelPosition;
}

@property(copy, nonatomic) NSString *labelString; // @dynamic labelString;
@property(nonatomic) double labelPosition; // @dynamic labelPosition;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

