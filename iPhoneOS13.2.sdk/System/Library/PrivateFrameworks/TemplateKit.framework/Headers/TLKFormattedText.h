//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKFormattedTextItem.h>

@class NSString;

@interface TLKFormattedText : TLKFormattedTextItem
{
    _Bool _isBold;
    _Bool _isEmphasized;
    long long _color;
    long long _verticalTextAlignment;
    NSString *_string;
    unsigned long long _maxLines;
}

+ (id)formattedTextWithString:(id)arg1;
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
@property(nonatomic) long long color; // @synthesize color=_color;
@property(nonatomic) _Bool isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
- (_Bool)hasContent;
- (id)description;

@end
