//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MontrealNNModelNetwork, NSDictionary, NSString;

@interface MontrealModelJSONParser : NSObject
{
    NSString *_jsonDir;
    MontrealNNModelNetwork *_network;
    NSDictionary *_infoDictionary;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly) MontrealNNModelNetwork *network; // @synthesize network=_network;
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
- (id)createJSONFromFile:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

