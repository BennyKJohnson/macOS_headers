//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABCDInfo.h"

@interface ABCDInfo (AddressBook)
+ (id)nts_CreateInfoWithAddressBook:(id)arg1 inPersistentStoreAtURL:(id)arg2;
+ (id)metadataType;
+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary *)arg4 valueWithEntityConverter:(struct __CFDictionary *)arg5;
- (id)copyMultiValueWithRecord:(id)arg1 withProperty:(id)arg2;
- (BOOL)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3;
- (id)fetchedContainerWithAddressBook:(id)arg1 store:(id)arg2;
- (id)initWithUniqueId:(id)arg1 addressBook:(id)arg2;
@end

