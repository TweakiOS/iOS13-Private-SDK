//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKAnnotation, AKController, AKPageController, CALayer, NSTextStorage, NSUndoManager, UITextView, UIView;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate>
{
    BOOL _isInEndEditing;
    BOOL _isInAdjustAnnotationFrameToFitText;
    UITextView *_textView;
    AKAnnotation<AKTextAnnotationProtocol> *_annotation;
    AKController *_controller;
    AKPageController *_pageController;
    CALayer *_textViewMaskLayer;
    UIView *_textViewContainer;
    NSTextStorage *_textStorage;
    double _renderingTextStorageScaleFactor;
    double _modelToEditorScaleFactor;
    double _handleCompensatingScaleFactor;
    NSUndoManager *_textViewUndoManager;
}

@property BOOL isInAdjustAnnotationFrameToFitText; // @synthesize isInAdjustAnnotationFrameToFitText=_isInAdjustAnnotationFrameToFitText;
@property BOOL isInEndEditing; // @synthesize isInEndEditing=_isInEndEditing;
@property(retain) NSUndoManager *textViewUndoManager; // @synthesize textViewUndoManager=_textViewUndoManager;
@property double handleCompensatingScaleFactor; // @synthesize handleCompensatingScaleFactor=_handleCompensatingScaleFactor;
@property double modelToEditorScaleFactor; // @synthesize modelToEditorScaleFactor=_modelToEditorScaleFactor;
@property double renderingTextStorageScaleFactor; // @synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor;
@property(retain) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain) CALayer *textViewMaskLayer; // @synthesize textViewMaskLayer=_textViewMaskLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property __weak AKAnnotation<AKTextAnnotationProtocol> *annotation; // @synthesize annotation=_annotation;
@property(retain) UITextView *textView; // @synthesize textView=_textView;
// - (void).cxx_destruct;
- (void)_keyboardDidHide:(id)arg1;
- (void)_unregisterForKeyboardNotifications;
- (void)_registerForKeyboardNotifications;
- (void)_updateTextView:(id)arg1 withFrame:(CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;
- (CGRect)_editorFrameForTextBoundsInModel:(CGRect)arg1;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_adjustAnnotationFrameToFitText;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(CGPoint)arg3;
- (void)_performBlockOnMainThread:(id /* CDUnknownBlockType */)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL isEditing;
- (void)updateForTextAttributeChange;
- (void)_endEditing;
- (void)_commitToModelWithoutEndingEditing;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)endEditing;
- (void)commitToModelWithoutEndingEditing;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
