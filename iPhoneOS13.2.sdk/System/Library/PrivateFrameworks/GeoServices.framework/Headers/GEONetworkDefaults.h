//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxyDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, geo_isolater;
@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate>
{
    id <_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    geo_isolater *_networkDefaultsIsolation;
}

+ (id)sharedNetworkDefaults;
+ (void)_ib_disableServerConnection;
+ (_Bool)useLocalProxy;
+ (void)setUseLocalProxy:(_Bool)arg1;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;
- (void)allKeysAndValues:(id /* block */)arg1;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (_Bool)_needsUpdate;
- (void)updateNetworkDefaults:(id /* block */)arg1;
- (void)updateIfNecessary:(id /* block */)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
