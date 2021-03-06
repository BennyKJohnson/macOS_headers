//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeSync/EXSItemProperties.h>

@class NSString;

@interface EXSFolderProperties : EXSItemProperties
{
    BOOL _displayNameSpecified;
    BOOL _distinguishedFolderTypeSpecified;
    NSString *_displayName;
    long long _distinguishedFolderType;
}

+ (id)itemPropertiesFromData:(id)arg1;
@property(readonly, nonatomic) BOOL distinguishedFolderTypeSpecified; // @synthesize distinguishedFolderTypeSpecified=_distinguishedFolderTypeSpecified;
@property(nonatomic) long long distinguishedFolderType; // @synthesize distinguishedFolderType=_distinguishedFolderType;
@property(readonly, nonatomic) BOOL displayNameSpecified; // @synthesize displayNameSpecified=_displayNameSpecified;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (void)populateFromPropertiesDictionary:(id)arg1;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (id)init;

@end

