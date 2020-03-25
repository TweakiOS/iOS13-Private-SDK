//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_disableScreenTimeSpecifier;
}

@property(retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier; // @synthesize disableScreenTimeSpecifier=_disableScreenTimeSpecifier;
// - (void).cxx_destruct;
- (void)disableScreenTime:(id)arg1;
- (id)disableScreenTimeConfirmationPrompt;
- (void)updateDisableScreenTimeSpecifier;
- (void)confirmDisableScreenTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;

@end
