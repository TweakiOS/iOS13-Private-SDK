//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

@class GEOApplicationAuditToken, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationServicePeer : GEONavdPeer
{
    NSString *_peerIdentifier;
    int _processIdentifier;
    GEOApplicationAuditToken *_auditToken;
}

+ (const char *)logCategory;
+ (id)peerForConnection:(id)arg1;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSString *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
- (const char *)logCategory;
- (void)dealloc;
- (void)clearConnectionHandlers;
- (id)initWithConnection:(id)arg1 peerIdentifier:(id)arg2 processIdentifier:(int)arg3;

@end
