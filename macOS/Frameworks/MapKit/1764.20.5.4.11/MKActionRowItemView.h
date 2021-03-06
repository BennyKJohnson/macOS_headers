//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MKPlaceCardActionItem, NSArray, _MKUILabel;
@protocol MKActionRowItemViewDelegate;

@interface MKActionRowItemView : NSView
{
    _MKUILabel *_label;
    _MKUILabel *_glyphLabel;
    unsigned long long _style;
    NSArray *_constraints;
    BOOL _enabled;
    BOOL _touched;
    BOOL _fullWidthMode;
    BOOL _highlighted;
    id <MKActionRowItemViewDelegate> _delegate;
    MKPlaceCardActionItem *_actionRowItem;
}

+ (double)minWidthForString:(id)arg1;
+ (id)glyphFont;
+ (id)labelFont;
+ (double)widthBrandItem;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL fullWidthMode; // @synthesize fullWidthMode=_fullWidthMode;
@property(nonatomic) BOOL touched; // @synthesize touched=_touched;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) MKPlaceCardActionItem *actionRowItem; // @synthesize actionRowItem=_actionRowItem;
@property(nonatomic) __weak id <MKActionRowItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_touchEnded;
- (void)_touchCancelled;
- (void)_touchBegan;
- (void)updateColor;
- (void)infoCardThemeChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)layout;
- (void)createConstraints;
- (void)_contentSizeDidChange;
- (id)initWithActionRowItem:(id)arg1 style:(unsigned long long)arg2;

@end

