//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isPaired;
    BOOL _isCloudPaired;
    BOOL _isConnected;
    BOOL _isLowEnergy;
    BOOL _isAppleDevice;
    NSString *_name;
    NSString *_address;
    unsigned long long _majorClass;
    unsigned long long _minorClass;
    long long _rssi;
    NSString *_afhMap;
    long long _connectionMode;
    unsigned long long _connectionModeInterval;
    long long _manufacturer;
    unsigned long long _lmpVersion;
    unsigned long long _lmpSubversion;
    long long _role;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isAppleDevice; // @synthesize isAppleDevice=_isAppleDevice;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) unsigned long long lmpSubversion; // @synthesize lmpSubversion=_lmpSubversion;
@property(nonatomic) unsigned long long lmpVersion; // @synthesize lmpVersion=_lmpVersion;
@property(nonatomic) long long manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) unsigned long long connectionModeInterval; // @synthesize connectionModeInterval=_connectionModeInterval;
@property(nonatomic) long long connectionMode; // @synthesize connectionMode=_connectionMode;
@property(copy, nonatomic) NSString *afhMap; // @synthesize afhMap=_afhMap;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(nonatomic) BOOL isLowEnergy; // @synthesize isLowEnergy=_isLowEnergy;
@property(nonatomic) unsigned long long minorClass; // @synthesize minorClass=_minorClass;
@property(nonatomic) unsigned long long majorClass; // @synthesize majorClass=_majorClass;
@property(nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) BOOL isCloudPaired; // @synthesize isCloudPaired=_isCloudPaired;
@property(nonatomic) BOOL isPaired; // @synthesize isPaired=_isPaired;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBluetoothDevice:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)dealloc;

@end

