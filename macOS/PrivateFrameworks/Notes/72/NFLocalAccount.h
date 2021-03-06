//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NFAccount.h>

@interface NFLocalAccount : NFAccount
{
}

+ (id)localAccountWithContext:(id)arg1;
+ (id)existingLocalAccountForContext:(id)arg1;
- (BOOL)updateAvailability;
- (id)recoveredItemsFolder;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (long long)accountClassPriority;

// Remaining properties
@property(nonatomic) BOOL migrationOffered; // @dynamic migrationOffered;

@end

