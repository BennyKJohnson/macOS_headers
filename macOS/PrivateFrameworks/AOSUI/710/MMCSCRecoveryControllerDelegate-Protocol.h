//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMCSCRecoveryController, NSError;

@protocol MMCSCRecoveryControllerDelegate <NSObject>

@optional
- (void)mmCSCRecoveryControllerDidCancel:(MMCSCRecoveryController *)arg1;
- (void)mmCSCRecoveryControllerDidEnd:(MMCSCRecoveryController *)arg1 error:(NSError *)arg2;
- (void)mmCSCRecoveryControllerDidForget:(MMCSCRecoveryController *)arg1;
@end

