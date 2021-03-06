//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IEBackupFSI, MPSQLite3Database, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IESMSIOS6Parser : NSObject
{
    MPSQLite3Database *dbLoader;
    NSString *smsDBPath;
    IEBackupFSI *_backupRootFSI;
    NSMutableDictionary *_handleDict;
    NSMutableDictionary *md_originalToMergedGroupID;
}

- (void).cxx_destruct;
- (id)readChatsWithGroups:(id)arg1;
- (id)readAccounts;
- (id)removePrefixFromAccount:(id)arg1;
- (BOOL)isValidChatAccount:(id)arg1;
- (id)start;
- (void)sortMessagesInGroups:(id)arg1;
- (void)removeEmptyGroups:(id)arg1;
- (void)addGroupMembersToGroups:(id)arg1 usingHandles:(id)arg2;
- (id)getGroupsFromMessages:(id)arg1;
- (id)parseMessagesWithHandles:(id)arg1;
- (id)parseHandles;
- (void)AddAttachments:(id)arg1;
- (id)fsiWithAttachmentPath:(id)arg1;
- (id)AddHandlesToGroups:(id)arg1;
- (_Bool)groupsHaveSameParticipantsGroup1:(id)arg1 group2:(id)arg2;
- (id)ParseChats;
- (id)initWithDBPath:(id)arg1 backupRoot:(id)arg2;

@end

