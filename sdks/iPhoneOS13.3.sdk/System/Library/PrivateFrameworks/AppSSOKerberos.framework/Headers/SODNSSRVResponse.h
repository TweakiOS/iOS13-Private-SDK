//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SODNSSRVResponse : NSObject
{
    unsigned short _port;
    NSString *_host;
}

@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end

