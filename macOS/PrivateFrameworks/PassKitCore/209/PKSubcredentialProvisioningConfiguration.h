//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKSubcredentialProvisioningConfiguration : NSObject
{
    long long _configurationType;
}

@property(readonly, nonatomic) long long configurationType; // @synthesize configurationType=_configurationType;
- (long long)startingState;
- (id)transitionTable;
- (id)remoteDeviceInvitation;
- (id)acceptInvitationConfiguration;
- (id)remoteDeviceConfiguration;
- (id)ownerConfiguration;
- (id)localDeviceConfiguration;
- (id)initWithConfigurationType:(long long)arg1;

@end

