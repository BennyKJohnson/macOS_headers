//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSVisualTabPickerShadowTileView.h>

@class CALayer, NSTextField, NSView, NSVisualTabPickerButton;
@protocol NSVisualTabPickerThumbnailDataSource, NSVisualTabPickerThumbnailDelegate;

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerThumbnailView : NSVisualTabPickerShadowTileView
{
    NSTextField *_titleTextField;
    NSView *_thumbnailView;
    NSVisualTabPickerButton *_closeButton;
    id <NSVisualTabPickerThumbnailDataSource> _dataSource;
    id <NSVisualTabPickerThumbnailDelegate> _delegate;
    BOOL _closeButtonVisible;
    BOOL _exposeBorderVisible;
    CALayer *_exposeBorderLayer;
}

@property(nonatomic, getter=isExposeBorderVisible) BOOL exposeBorderVisible; // @synthesize exposeBorderVisible=_exposeBorderVisible;
@property(nonatomic, getter=isCloseButtonVisible) BOOL closeButtonVisible; // @synthesize closeButtonVisible=_closeButtonVisible;
@property(nonatomic) __weak id <NSVisualTabPickerThumbnailDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NSVisualTabPickerThumbnailDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)_closeButtonPressed:(id)arg1;
- (void)reloadData;
- (id)_createTitleTextField;
- (void)_setUpSubviews;
- (void)_setUpShadows;
- (void)_selectThumbnail;
- (void)startTitleOpacityAnimation:(long long)arg1;
- (void)_getTitleOpacityAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)magnifyWithEvent:(id)arg1;
- (void)willStartExitAnimation;
- (void)mouseDown:(id)arg1;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

