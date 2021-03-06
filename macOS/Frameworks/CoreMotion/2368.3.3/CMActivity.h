//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem
{
    struct CLMotionActivity fActivity;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL hasExitedVehicle;
@property(readonly, nonatomic) BOOL maybeExitingVehicle;
@property(readonly, nonatomic) BOOL isDriving;
@property(readonly, nonatomic) BOOL isRunning;
@property(readonly, nonatomic) BOOL isWalking;
@property(readonly, nonatomic) BOOL isMoving;
@property(readonly, nonatomic) int confidence;
- (struct CLMotionActivity)activity;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity)arg1;

@end

