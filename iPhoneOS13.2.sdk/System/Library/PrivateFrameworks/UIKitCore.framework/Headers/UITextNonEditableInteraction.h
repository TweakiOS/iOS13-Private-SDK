//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

__attribute__((visibility("hidden")))
@interface UITextNonEditableInteraction : UITextInteraction
{
}

- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (void)toggleSelectionCommands;
- (void)doubleTapInUneditable:(id)arg1;
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint)arg1 textInput:(id)arg2;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)initWithMode:(long long)arg1;

@end
