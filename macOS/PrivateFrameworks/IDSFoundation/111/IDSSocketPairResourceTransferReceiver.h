//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSSocketPairMessage.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessage>
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    BOOL _done;
    BOOL _isResuming;
    BOOL _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
- (id)finalizedMessageDictionaryIfDone;
- (BOOL)appendMessage:(id)arg1 receiverError:(unsigned char *)arg2;
- (BOOL)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;
- (BOOL)writeResourceData:(id)arg1;
- (void)dealloc;
- (void)abortTransfer;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(BOOL)arg2 receiverError:(unsigned char *)arg3;

// Remaining properties
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) BOOL expectsPeerResponse;
@property(readonly, nonatomic) NSString *peerResponseIdentifier;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) unsigned short streamID;
@property(readonly, nonatomic) BOOL wantsAppAck;

@end

