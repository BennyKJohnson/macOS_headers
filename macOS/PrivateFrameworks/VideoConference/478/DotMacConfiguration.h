//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface DotMacConfiguration : NSObject
{
    NSConditionLock *_condLock;
    NSMutableArray *_ipAndPortDataArray;
    NSString *_userDefaultsConfigurationURLKey;
    NSString *_dotMacConfigurationURL;
}

- (void)getConfigurationProc:(id)arg1;
- (id)ipAndPortArray;
- (void)getConfiguration;
- (void)dealloc;
- (id)init;

@end

