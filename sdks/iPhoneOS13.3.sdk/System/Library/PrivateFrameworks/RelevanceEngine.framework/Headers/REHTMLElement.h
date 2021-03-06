//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSDictionary;

@interface REHTMLElement : NSObject <NSCopying>
{
    NSData *_data;
}

+ (NSUInteger)_defaultStringEncoding;
+ (id)h6:(id)arg1;
+ (id)h5:(id)arg1;
+ (id)h4:(id)arg1;
+ (id)h3:(id)arg1;
+ (id)h2:(id)arg1;
+ (id)h1:(id)arg1;
+ (id)nav;
+ (id)script:(id)arg1;
+ (id)div;
+ (id)link:(id)arg1 title:(id)arg2;
+ (id)htmlElementWithTag:(id)arg1 content:(id)arg2;
+ (id)elementWithHTMLString:(id)arg1;
+ (id)elementWithHTMLData:(id)arg1;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)addChildren:(id)arg1;
- (id)addChild:(id)arg1;
- (id)append:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)elementByAddingAtttibutes:(id)arg1;
- (id)elementByAddingAtttibute:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) NSDictionary *attributes;
- (id)elementBySettingClasses:(id)arg1;
- (id)elementByAddingClasses:(id)arg1;
- (id)elementByAddingClass:(id)arg1;
@property(readonly, nonatomic) NSArray *classes;
@property(readonly, nonatomic) NSData *encodedData;
- (id)_encodedData;
- (id)_encodeString:(id)arg1;
- (id)_suffixContentString;
- (id)_contentString;
- (id)_prefixContentString;
- (id)init;

@end

