//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIInputModeController : NSObject
{
    NSArray *_supportedInputModeIdentifiers;
    NSArray *_supportedInputModeLanguageAndRegions;
    NSString *currentLocale;
    NSArray *preferredLanguages;
    NSArray *enabledInputModes;
    NSArray *defaultInputModes;
    NSArray *inputModesForTesting;
}

+ (id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(id /* block */)arg3;
+ (id)sharedInputModeController;
@property(copy, nonatomic) NSArray *inputModesForTesting; // @synthesize inputModesForTesting;
@property(copy, nonatomic) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(copy, nonatomic) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(copy, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages;
@property(copy, nonatomic) NSString *currentLocale; // @synthesize currentLocale;
- (id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)suggestedDictationLanguageForDeviceLanguage;
- (_Bool)identifierIsValidSystemInputMode:(id)arg1;
@property(readonly) NSArray *enabledInputModeIdentifiers;
@property(readonly) NSArray *supportedInputModeLanguageAndRegions;
@property(readonly) NSArray *supportedInputModeIdentifiers;
- (id)defaultEnabledInputModesForCurrentLocale;
- (void)setInputModeIdentifiersForTesting:(id)arg1;

@end
