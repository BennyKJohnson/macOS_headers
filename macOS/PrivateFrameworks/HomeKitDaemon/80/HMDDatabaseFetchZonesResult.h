//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMBCloudZone, HMBLocalZone;

@interface HMDDatabaseFetchZonesResult : NSObject
{
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
}

- (void).cxx_destruct;
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2;

@end

