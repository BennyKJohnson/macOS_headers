//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProVideo/NSObject-Protocol.h>

@class NSArray;
@protocol PROAPIObject;

@protocol PROVersionedAPIAccess <NSObject>
- (BOOL)validateProtocols:(NSArray *)arg1;
- (id <PROAPIObject>)apiForProtocol:(id *)arg1 versions:(NSArray *)arg2;
@end

