//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface AXSwitchRecipe : NSObject
{
    NSString *_name;
    NSUUID *_uuid;
    NSArray *_mappings;
    double _timeout;
    NSString *_unlocalizedName;
    NSString *_menuIconIdentifier;
}

+ (id)recipeWithDictionaryRepresentation:(id)arg1;
@property(copy, nonatomic) NSString *menuIconIdentifier; // @synthesize menuIconIdentifier=_menuIconIdentifier;
@property(retain, nonatomic) NSString *unlocalizedName; // @synthesize unlocalizedName=_unlocalizedName;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSArray *mappings; // @synthesize mappings=_mappings;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL shouldContinueScanning;
- (id)init;
- (id)dictionaryRepresentation;

@end

