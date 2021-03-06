//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFSettings.h"

@class NSSet, NSString;

@interface WFInternalAppSettings : NSObject <WFSettings>
{
}

@property(readonly, nonatomic) unsigned long long locationNumDecimalsOfPrecision;
@property(readonly, nonatomic) unsigned long long networkSwitchExpirationTimeInSeconds;
@property(readonly, nonatomic) unsigned long long networkFailedAttemptsLimit;
@property(readonly, nonatomic) NSString *apiVersionFallback;
@property(readonly, nonatomic) NSSet *aqiEnabledCountryCodes;
@property(readonly, nonatomic) NSString *apiVersion;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

