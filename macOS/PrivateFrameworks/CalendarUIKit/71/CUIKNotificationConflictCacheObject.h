//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKConflictDetails;

@interface CUIKNotificationConflictCacheObject : NSObject
{
    unsigned long long _state;
    EKConflictDetails *_conflictInfo;
}

+ (id)keyForNotification:(id)arg1;
@property(retain) EKConflictDetails *conflictInfo; // @synthesize conflictInfo=_conflictInfo;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

