//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AMSCommerceMigrator : NSObject
{
}

+ (void)_removeAccountRelatedDefaultsUsingAccounts:(id)arg1;
+ (id)_primaryDSIDFromLegacyPreferencesDomain:(id)arg1 clientType:(id)arg2 serverType:(id)arg3;
+ (void)_migrateBiometricsStateIntoAccounts:(id)arg1;
+ (void)_migratePrivacyAcknowledgementIntoAccounts:(id)arg1;
+ (void)_migrateiTunesInformation;
+ (void)_migrateCookiesIntoAccounts:(id)arg1;
+ (id)_migrateLegacyCommerceAccounts;
+ (id)_migrateCommerceAccounts;
+ (void)_migrateConfiguratorInformationIntoAccounts:(id)arg1;
+ (void)_migrateBooksInformationIntoAccounts:(id)arg1;
+ (void)_migrateAppStoreInformationIntoAccounts:(id)arg1;
+ (id)_cookiesFromURL:(id)arg1;
+ (id)_createAccountFromKnownAccountsDictionary:(id)arg1 accountTypeIdentifier:(id)arg2;
+ (void)migrateCommerceAccountsWithOptions:(id)arg1;

@end

