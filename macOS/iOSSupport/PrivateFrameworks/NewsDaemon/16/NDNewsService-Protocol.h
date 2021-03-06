//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsDaemon/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol NTHeadlineAnalyticsElementProviding, NTTodayResultOperationInfoProviding;

@protocol NDNewsService <NSObject>
- (void)markAnalyticsElement:(id <NTHeadlineAnalyticsElementProviding>)arg1 asReadAtDate:(NSDate *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)markAnalyticsElements:(NSArray *)arg1 asSeenAtDate:(NSDate *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)fetchLatestResultsWithParameters:(id <NTTodayResultOperationInfoProviding>)arg1 completion:(void (^)(NTTodayResults *, NSDictionary *, NSObject<NTTodayResultOperationFetchInfoProviding> *, NSError *, BOOL))arg2;
@end

