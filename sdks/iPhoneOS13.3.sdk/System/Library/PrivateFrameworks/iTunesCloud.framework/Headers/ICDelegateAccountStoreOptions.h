//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_databasePath;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSString *_serviceName;
    BOOL _singleWriter;
}

+ (BOOL)supportsSecureCoding;
+ (id)singleWriterOptionsWithDatabasePath:(id)arg1;
+ (id)defaultOptionsWithServiceName:(id)arg1;
+ (id)defaultOptionsWithServiceEndpoint:(id)arg1;
@property(copy, nonatomic) NSString *XPCServiceName; // @synthesize XPCServiceName=_serviceName;
@property(retain, nonatomic) NSXPCListenerEndpoint *XPCEndpoint; // @synthesize XPCEndpoint=_listenerEndpoint;
@property(nonatomic, getter=isSingleWriter) BOOL singleWriter; // @synthesize singleWriter=_singleWriter;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
