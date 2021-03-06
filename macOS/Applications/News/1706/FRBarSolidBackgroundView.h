//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FRBarSolidBackgroundView : UIView
{
    BOOL _topHairlineEnabled;
    BOOL _bottomHairlineEnabled;
    UIView *_topHairline;
    UIView *_bottomHairline;
}

@property(retain, nonatomic) UIView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) UIView *topHairline; // @synthesize topHairline=_topHairline;
@property(nonatomic) BOOL bottomHairlineEnabled; // @synthesize bottomHairlineEnabled=_bottomHairlineEnabled;
@property(nonatomic) BOOL topHairlineEnabled; // @synthesize topHairlineEnabled=_topHairlineEnabled;
- (void).cxx_destruct;
- (void)setupBottomHairline;
- (void)setupTopHairline;
- (void)layoutSubviews;

@end

