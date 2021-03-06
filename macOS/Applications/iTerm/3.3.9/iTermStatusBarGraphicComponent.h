//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermStatusBarBaseComponent.h"

@class NSColor, iTermStatusBarImageComponentView;

@interface iTermStatusBarGraphicComponent : iTermStatusBarBaseComponent
{
    double _preferredWidth;
    double _renderedWidth;
    iTermStatusBarImageComponentView *_view;
    BOOL _shouldHaveTextColorKnob;
    id _model;
    id _preferredModel;
}

@property(readonly, nonatomic) BOOL shouldHaveTextColorKnob; // @synthesize shouldHaveTextColorKnob=_shouldHaveTextColorKnob;
@property(retain, nonatomic) id preferredModel; // @synthesize preferredModel=_preferredModel;
@property(readonly, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)modelForWidth:(double)arg1 width:(out double *)arg2;
- (void)statusBarDefaultTextColorDidChange;
- (void)statusBarComponentWidthDidChangeTo:(double)arg1;
- (void)statusBarComponentUpdate;
- (id)statusBarComponentView;
- (double)statusBarComponentMinimumWidth;
- (void)statusBarComponentSizeView:(id)arg1 toFitWidth:(double)arg2;
- (double)statusBarComponentPreferredWidth;
- (id)widestModel:(out double *)arg1;
- (id)modelForCurrentWidth;
- (void)redraw;
- (void)updateViewIfNeeded;
- (BOOL)shouldUpdateValue:(id)arg1;
- (id)backgroundColor;
@property(readonly, nonatomic) iTermStatusBarImageComponentView *view;
- (id)newView;
- (id)statusBarComponentKnobs;
- (id)statusBarBackgroundColor;
- (id)statusBarTextColor;
@property(readonly, nonatomic) NSColor *textColor;

@end

