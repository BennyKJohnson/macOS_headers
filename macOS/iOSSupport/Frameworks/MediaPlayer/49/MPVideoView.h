//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, MPAVController, NSDictionary, NSString, _MPAVPlayerView;

@interface MPVideoView : UIView
{
    MPAVController *_player;
    double _startTime;
    double _stopTime;
    NSDictionary *_AVURLAssetOptions;
    _MPAVPlayerView *_playerView;
    UIView *_contentView;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    long long _scaleMode;
}

- (void).cxx_destruct;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(retain, nonatomic) NSString *movieSubtitle; // @synthesize movieSubtitle=_movieSubtitle;
@property(retain, nonatomic) NSDictionary *AVURLAssetOptions; // @synthesize AVURLAssetOptions=_AVURLAssetOptions;
- (void)didMoveToWindow;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly, nonatomic) struct CGRect movieContentFrame;
@property(readonly, nonatomic) struct CGRect movieFrame;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) long long effectiveScaleMode;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)setScaleMode:(long long)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(long long)arg1 duration:(float)arg2;
@property(readonly, nonatomic) BOOL canChangeScaleMode;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

