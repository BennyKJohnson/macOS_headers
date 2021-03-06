//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject
{
    float _weightBucketSize;
    float _intercept;
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (float)sentimentScoreForText:(id)arg1;
- (float)_idxToFloat:(unsigned long long)arg1;
- (id)init;
- (BOOL)_loadAssetData;

@end

