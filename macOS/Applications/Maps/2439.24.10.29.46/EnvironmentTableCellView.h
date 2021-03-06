//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class EnvironmentsWindowController, GEOEnvironmentInfo, NSArray, NSButton, NSImageView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface EnvironmentTableCellView : NSTableCellView
{
    NSButton *_radioButton;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_errorImageView;
    NSArray *_noReleaseInfoConstraints;
    NSArray *_releaseInfoConstraints;
    NSArray *_progressIndicatorVisibleConstraints;
    NSArray *_errorConstraints;
    EnvironmentsWindowController *_environmentsWindowController;
    GEOEnvironmentInfo *_environment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOEnvironmentInfo *environment; // @synthesize environment=_environment;
- (void)makeActive:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

