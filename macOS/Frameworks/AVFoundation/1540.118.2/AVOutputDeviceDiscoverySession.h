//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySessionInternal, NSArray;

@interface AVOutputDeviceDiscoverySession : NSObject
{
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

+ (id)outputDeviceDiscoverySessionFactory;
+ (void)initialize;
- (void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1;
@property(readonly, nonatomic) BOOL devicePresenceDetected;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(nonatomic) long long discoveryMode;
@property(retain, nonatomic) AVAudioSession *targetAudioSession;
- (id)impl;
- (void)dealloc;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)init;
@property(readonly) struct OpaqueFigRouteDiscoverer *routeDiscoverer;

@end

