//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>;

@interface _DASSubmissionRateLimiter : NSObject
{
    int _dastoolToken;
    NSMutableDictionary *_penaltyBox;
    NSObject<OS_dispatch_queue> *_delayedSubmissionQueue;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_activityGroupQueue;
    NSMutableDictionary *_submittedActivities;
    NSMutableDictionary *_activityGroups;
}

+ (id)groupNameForActivity:(id)arg1;
+ (id)pluginGroupNameForGroupName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int dastoolToken; // @synthesize dastoolToken=_dastoolToken;
@property(retain, nonatomic) NSMutableDictionary *activityGroups; // @synthesize activityGroups=_activityGroups;
@property(retain, nonatomic) NSMutableDictionary *submittedActivities; // @synthesize submittedActivities=_submittedActivities;
@property(retain, nonatomic) NSMutableDictionary *activityGroupQueue; // @synthesize activityGroupQueue=_activityGroupQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedSubmissionQueue; // @synthesize delayedSubmissionQueue=_delayedSubmissionQueue;
@property(retain, nonatomic) NSMutableDictionary *penaltyBox; // @synthesize penaltyBox=_penaltyBox;
- (void)activityCompleted:(id)arg1 withScheduler:(id)arg2;
- (void)activityCanceled:(id)arg1 withScheduler:(id)arg2;
- (void)submitActivity:(id)arg1 inGroup:(id)arg2 withScheduler:(id)arg3;
- (void)submitActivities:(id)arg1 withScheduler:(id)arg2;
- (void)submitActivity:(id)arg1 withScheduler:(id)arg2;
- (void)createActivityGroup:(id)arg1;
- (void)admitNextActivityAfterCompletionOf:(id)arg1 withScheduler:(id)arg2;
- (void)handleCanceledActivity:(id)arg1 withGroupName:(id)arg2;
- (BOOL)shouldDelayGroupSubmissionOfActivity:(id)arg1;
- (BOOL)shouldQueueActivity:(id)arg1;
- (unsigned long long)capacityForGroupName:(id)arg1;
- (void)updateCapacity:(unsigned long long)arg1 forGroupName:(id)arg2;
- (BOOL)shouldDelaySubmissionOfActivity:(id)arg1;
- (void)handleCanceledActivity:(id)arg1;
- (void)addToPenaltyBox:(id)arg1 atDate:(id)arg2;
- (void)removeFromPenaltyBox:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;
- (id)init;

@end

