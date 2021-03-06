//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class MKImageView, NSLayoutConstraint, NSView, TrafficIncidentsDateFormatter, VKTrafficIncident, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsOverviewCell : MKTableViewCell
{
    NSView *_centeringView;
    NSLayoutConstraint *_titleLabelBaselineToTopConstraint;
    NSLayoutConstraint *_locationLabelBaselineToTitleLabelBaselineConstraint;
    NSLayoutConstraint *_startLabelBaselineToTitleLabelBaselineConstraint;
    NSLayoutConstraint *_startLabelBaselineToLocationLabelBaselineConstraint;
    NSLayoutConstraint *_bottomToStartLabelBaselineConstraint;
    NSLayoutConstraint *_endLabelBaselineToStartLabelBaselineConstraint;
    NSLayoutConstraint *_bottomToEndLabelBaselineConstraint;
    BOOL _isDimmed;
    VKTrafficIncident *_incident;
    _MKUILabel *_titleLabel;
    _MKUILabel *_locationLabel;
    _MKUILabel *_startLabel;
    _MKUILabel *_endLabel;
    MKImageView *_iconView;
    TrafficIncidentsDateFormatter *_formatter;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) TrafficIncidentsDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) MKImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) _MKUILabel *endLabel; // @synthesize endLabel=_endLabel;
@property(retain, nonatomic) _MKUILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(retain, nonatomic) _MKUILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL isDimmed; // @synthesize isDimmed=_isDimmed;
@property(retain, nonatomic) VKTrafficIncident *incident; // @synthesize incident=_incident;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)_updateLabels;
- (void)_updateStyleValuesFromTheme;
- (void)_updateFonts;
- (void)_updateConstraintValues;
- (id)_autolayoutConstraints;
- (void)_createSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

