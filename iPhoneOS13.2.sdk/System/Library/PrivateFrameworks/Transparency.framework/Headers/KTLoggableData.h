//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding>
{
    _Bool _successfulSync;
    _Bool _marked;
    NSData *_deviceID;
    NSData *_clientData;
    NSData *_deviceVRFOutput;
    NSData *_clientDataVRFOutput;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSData *clientDataVRFOutput; // @synthesize clientDataVRFOutput=_clientDataVRFOutput;
@property(retain) NSData *deviceVRFOutput; // @synthesize deviceVRFOutput=_deviceVRFOutput;
@property _Bool marked; // @synthesize marked=_marked;
@property _Bool successfulSync; // @synthesize successfulSync=_successfulSync;
@property(retain) NSData *clientData; // @synthesize clientData=_clientData;
@property(copy) NSData *deviceID; // @synthesize deviceID=_deviceID;
- (id)description;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientData:(id)arg1;

@end
