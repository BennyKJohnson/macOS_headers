//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding>
{
    NSString *_streamID;
    NSString *_ctag;
}

+ (BOOL)supportsSecureCoding;
+ (id)subscribedStreamWithStreamID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithStreamID:(id)arg1;

@end

