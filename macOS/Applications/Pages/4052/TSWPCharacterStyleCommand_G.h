//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSWPCommandUpdateRange_G.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray;

@interface TSWPCharacterStyleCommand_G : GSWPCommandUpdateRange_G <GSSPAutoEncodable>
{
    NSArray *_rangeList;
    NSArray *_characterStyleOrNilList;
}

@property(retain, nonatomic) NSArray *characterStyleOrNilList; // @synthesize characterStyleOrNilList=_characterStyleOrNilList;
@property(retain, nonatomic) NSArray *rangeList; // @synthesize rangeList=_rangeList;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)updateFromTransformedAddresses:(id)arg1;
- (id)addresses;
- (id)operationPropertyName;
- (void)commit;
- (BOOL)process;
- (BOOL)supportsCollaboration;
- (void)dealloc;
- (void)populateGSSPCmdTextSetCharacterStyle:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)loadFromArchive:(const struct CharacterStyleCommand_GArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CharacterStyleCommand_GArchive *)arg1 archiver:(id)arg2;

@end

