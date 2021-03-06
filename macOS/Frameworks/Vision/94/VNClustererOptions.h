//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface VNClustererOptions : NSObject
{
    float _threshold;
    float _torsoThreshold;
    NSString *_type;
    NSString *_cachePath;
    NSData *_state;
    unsigned long long _requestRevision;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(nonatomic) float torsoThreshold; // @synthesize torsoThreshold=_torsoThreshold;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSData *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;

@end

