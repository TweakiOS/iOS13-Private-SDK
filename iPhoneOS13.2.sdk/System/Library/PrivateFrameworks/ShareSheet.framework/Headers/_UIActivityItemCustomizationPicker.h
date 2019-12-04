//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ShareSheet/_UIActivityItemCustomization.h>

#import <ShareSheet/_UIActivityItemCustomizationPicker-Protocol.h>

@class NSArray, NSString;

@interface _UIActivityItemCustomizationPicker : _UIActivityItemCustomization <_UIActivityItemCustomizationPicker>
{
    long long _selectedOptionIndex;
    long long _previousSelectedOptionIndex;
    NSArray *_optionTitles;
    id /* block */ __handler;
}

@property(copy, nonatomic, setter=_setHandler:) id /* block */ _handler; // @synthesize _handler=__handler;
@property(readonly, nonatomic) NSArray *_optionTitles; // @synthesize _optionTitles;
- (void)_setSelectedOptionIndex:(long long)arg1;
@property(readonly, nonatomic) long long previousSelectedOptionIndex;
@property(readonly, nonatomic) long long selectedOptionIndex;
- (id)initWithIdentifier:(id)arg1 optionTitles:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
