//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CMUDTemplate : NSObject
{
    NSString *_name;
    NSArray *_paths;
}

@property(copy, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (id)initWithName:(id)arg1;

@end

