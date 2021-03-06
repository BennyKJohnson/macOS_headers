//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAdActionAvailabilityObserverFactory-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserverFactory, SVVideoProviderProviding;

@interface SVVideoAdActionAvailabilityObserverFactory : NSObject <SVVideoAdActionAvailabilityObserverFactory>
{
    id <SVVideoProviderProviding> _videoProviderProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProvider; // @synthesize videoProviderProvider=_videoProviderProvider;
- (void).cxx_destruct;
- (id)createActionAvailabilityObserverForVideo:(id)arg1;
- (id)initWithVideoProviderProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

