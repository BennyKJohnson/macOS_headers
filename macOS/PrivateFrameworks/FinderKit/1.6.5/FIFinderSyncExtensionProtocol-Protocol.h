//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@protocol FIFinderSyncExtensionProtocol <NSObject>
- (void)valuesForAttributes:(NSArray *)arg1 forItemWithURL:(NSURL *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)supportedServiceNamesForItemWithURL:(NSURL *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSArray *, NSError *))arg2;
- (void)executeCommandWithMenuItemDictionary:(NSDictionary *)arg1 target:(NSDictionary *)arg2 items:(NSArray *)arg3;
- (void)executeCommand:(NSString *)arg1 target:(NSDictionary *)arg2 items:(NSArray *)arg3;
- (void)requestMenuItemsForTarget:(NSDictionary *)arg1 selectedItems:(NSArray *)arg2 menu:(unsigned long long)arg3 result:(void (^)(NSArray *))arg4;
- (void)requestBadgeIdentifierForURL:(NSString *)arg1;
- (void)stopWatchingDirectoryURL:(NSString *)arg1;
- (void)startWatchingDirectoryURL:(NSString *)arg1;
- (void)cleanUp;
- (void)begin;
@end

