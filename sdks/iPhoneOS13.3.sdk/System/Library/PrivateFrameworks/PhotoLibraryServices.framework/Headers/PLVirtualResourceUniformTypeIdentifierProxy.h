//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PLUniformTypeIdentifierIdentity;

@interface PLVirtualResourceUniformTypeIdentifierProxy : NSObject
{
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentiferID;
}

@property(retain, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentiferID; // @synthesize uniformTypeIdentiferID=_uniformTypeIdentiferID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL conformsToImage;
- (id)initWithUniformTypeIdentiferID:(id)arg1;

@end

