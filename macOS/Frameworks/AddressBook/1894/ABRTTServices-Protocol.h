//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class CNContact, NSString;

@protocol ABRTTServices <NSObject>
- (void)callRTTContact:(CNContact *)arg1 withPhoneNumber:(NSString *)arg2;
- (BOOL)isRTTContact:(CNContact *)arg1;
- (BOOL)isTTYEnabled;
@end

