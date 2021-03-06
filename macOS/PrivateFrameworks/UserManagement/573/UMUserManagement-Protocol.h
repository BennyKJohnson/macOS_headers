//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UMUser;

@protocol UMUserManagement <NSObject>
@property(readonly, nonatomic) unsigned long long maxNumberOfUsers;
@property(readonly, nonatomic) BOOL isLoginSession;
@property(readonly, copy, nonatomic) UMUser *loginUser;
@property(readonly, copy, nonatomic) UMUser *currentUser;
@property(readonly, nonatomic) BOOL isMultiUser;
- (void)registerUserListUpdateObserver:(id <UMUserListUpdateObserver>)arg1;
- (void)disableUser:(UMUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteUser:(UMUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)loadUser:(UMUser *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)createUser:(UMUser *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (BOOL)canAccessUserProperties;
@end

