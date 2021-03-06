//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStepperCell.h>

@class NSDate, TSKMacStepper;

@interface TSKMacStepperCell : NSStepperCell
{
    BOOL mPressed;
    BOOL mTrackingUp;
    struct CGRect mTrackingRect;
    NSDate *mDownAt;
}

@property(retain, nonatomic) NSDate *downAt; // @synthesize downAt=mDownAt;
@property(nonatomic) struct CGRect trackingRect; // @synthesize trackingRect=mTrackingRect;
@property(nonatomic) BOOL trackingUp; // @synthesize trackingUp=mTrackingUp;
@property(nonatomic) BOOL pressed; // @synthesize pressed=mPressed;
- (void).cxx_destruct;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)stopStepping;
- (void)startSteppingTrackingUp:(BOOL)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)downButtonImage;
- (id)upButtonImage;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setDoubleValue:(double)arg1;
@property(readonly, nonatomic) double incrementWithoutAutorepeatMultiplier;
- (void)setIncrement:(double)arg1;
- (double)increment;
- (unsigned long long)p_autorepeatMultiplierForIncrement;
@property(readonly, nonatomic) TSKMacStepper *stepper;

@end

