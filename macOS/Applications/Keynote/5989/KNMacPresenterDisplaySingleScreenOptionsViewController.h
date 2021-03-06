//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTextFieldDelegate-Protocol.h"

@class KNMacPresenterDisplayConfigurationController, KNPresenterDisplayTimerConfiguration, NSString, TSUDurationFormatter;

@interface KNMacPresenterDisplaySingleScreenOptionsViewController : NSViewController <NSTextFieldDelegate>
{
    BOOL _allowsTimeRemainingTimerMode;
    KNMacPresenterDisplayConfigurationController *_configurationController;
    KNPresenterDisplayTimerConfiguration *_presenterDisplayTimerConfiguration;
    TSUDurationFormatter *_timeRemainingDurationFormatter;
}

+ (id)keyPathsForValuesAffectingCanChangeInitialTimeRemaining;
+ (id)nibName;
@property(nonatomic) BOOL allowsTimeRemainingTimerMode; // @synthesize allowsTimeRemainingTimerMode=_allowsTimeRemainingTimerMode;
@property(nonatomic) TSUDurationFormatter *timeRemainingDurationFormatter; // @synthesize timeRemainingDurationFormatter=_timeRemainingDurationFormatter;
@property(copy, nonatomic) KNPresenterDisplayTimerConfiguration *presenterDisplayTimerConfiguration; // @synthesize presenterDisplayTimerConfiguration=_presenterDisplayTimerConfiguration;
@property(retain, nonatomic) KNMacPresenterDisplayConfigurationController *configurationController; // @synthesize configurationController=_configurationController;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (BOOL)validateValue:(inout id *)arg1 forKeyPath:(id)arg2 error:(out id *)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
@property(readonly, nonatomic) BOOL canChangeInitialTimeRemaining;
- (BOOL)p_validatePresenterDisplayTimerConfigurationValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)p_setPresenterDisplayTimerConfigurationValue:(id)arg1 forKeyPath:(id)arg2;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

