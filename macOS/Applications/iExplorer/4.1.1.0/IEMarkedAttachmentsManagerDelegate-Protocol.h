//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol IEMarkedAttachmentsManagerDelegate <NSObject>
- (void)deleteOperationCompletedWithDeviceID:(NSString *)arg1 error:(NSError *)arg2;
- (void)showBusyText:(NSString *)arg1;
- (void)showBusyScreenWithText:(NSString *)arg1;
- (void)attachmentCountChanged:(unsigned long long)arg1;
@end

