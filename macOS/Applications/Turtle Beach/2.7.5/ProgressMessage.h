//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMessage.h"

@interface ProgressMessage : AppMessage
{
    unsigned long long _currentRetryNumber;
    unsigned long long _maxRetryNumber;
}

@property unsigned long long maxRetryNumber; // @synthesize maxRetryNumber=_maxRetryNumber;
@property unsigned long long currentRetryNumber; // @synthesize currentRetryNumber=_currentRetryNumber;
- (id)initWithRetry:(unsigned long long)arg1 andMax:(unsigned long long)arg2;

@end

