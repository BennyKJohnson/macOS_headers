//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

@interface ASDCheckQueueRequest : ASDBaseClient
{
}

- (void)sendRequestCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkPendingCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkAutomaticCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

