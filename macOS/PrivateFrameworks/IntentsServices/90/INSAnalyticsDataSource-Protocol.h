//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INSAnalytics, NSDictionary, NSError, SABaseCommand;

@protocol INSAnalyticsDataSource <NSObject>
- (NSDictionary *)analytics:(INSAnalytics *)arg1 contextDictionaryForError:(NSError *)arg2;
- (NSDictionary *)analytics:(INSAnalytics *)arg1 contextDictionaryForCommand:(SABaseCommand *)arg2;
@end

