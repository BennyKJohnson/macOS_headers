//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKGrowthFunction-Protocol.h>

@protocol CRKGrowthFunction;

@interface CRKBoundedGrowthFunction : NSObject <CRKGrowthFunction>
{
    id <CRKGrowthFunction> _growthFunction;
    double _lowerBound;
    double _upperBound;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double upperBound; // @synthesize upperBound=_upperBound;
@property(readonly, nonatomic) double lowerBound; // @synthesize lowerBound=_lowerBound;
@property(readonly, nonatomic) id <CRKGrowthFunction> growthFunction; // @synthesize growthFunction=_growthFunction;
- (double)evaluateWithValue:(double)arg1;
- (id)initWithGrowthFunction:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3;

@end

