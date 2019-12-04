//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CATAddress, NSData;

@interface CATEndPoint : NSObject
{
    unsigned int _port;
    NSData *_data;
    CATAddress *_address;
}

@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
@property(readonly, nonatomic) CATAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToEndPoint:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAddress:(id)arg1 port:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (id)init;

@end
