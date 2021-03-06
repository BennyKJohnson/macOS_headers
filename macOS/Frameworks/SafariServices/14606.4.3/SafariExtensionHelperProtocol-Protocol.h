//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol SafariExtensionHelperProtocol
- (void)dispatchMessageWithName:(NSString *)arg1 toExtensionWithIdentifier:(NSString *)arg2 sandboxExtensionToken:(NSString *)arg3 userInfo:(NSDictionary *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)showPreferencesForExtensionWithIdentifier:(NSString *)arg1 sandboxExtensionToken:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)getStateOfSafariExtensionWithIdentifier:(NSString *)arg1 sandboxExtensionToken:(NSString *)arg2 reply:(void (^)(SFSafariExtensionState *, NSError *))arg3;
- (void)getStateOfContentBlockerWithIdentifier:(NSString *)arg1 sandboxExtensionToken:(NSString *)arg2 reply:(void (^)(SFContentBlockerState *, NSError *))arg3;
- (void)removeContentBlockerWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)loadContentBlockerWithIdentifier:(NSString *)arg1 sandboxExtensionToken:(NSString *)arg2 invokedBySafariFamily:(BOOL)arg3 reply:(void (^)(NSError *))arg4;
@end

