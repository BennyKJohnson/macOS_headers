//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarBehaviorSettings : PTSettings
{
    BOOL _useGenerousPadding;
    double _buttonMinimumHeight;
    double _buttonTightPadding;
    double _buttonGenerousPadding;
}

+ (id)settingsControllerModule;
@property(nonatomic) double buttonGenerousPadding; // @synthesize buttonGenerousPadding=_buttonGenerousPadding;
@property(nonatomic) double buttonTightPadding; // @synthesize buttonTightPadding=_buttonTightPadding;
@property(nonatomic) double buttonMinimumHeight; // @synthesize buttonMinimumHeight=_buttonMinimumHeight;
@property(nonatomic) BOOL useGenerousPadding; // @synthesize useGenerousPadding=_useGenerousPadding;
- (void)setDefaultValues;

@end

