//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIImageView, UIViewController;

@protocol SKUISlideshowViewControllerDelegate 

@optional
- (void)slideshowViewControllerDidFinish:(UIViewController *)arg1;
- (void)slideshowViewController:(UIViewController *)arg1 scrollToImageAtIndex:(long long)arg2;
- (UIImageView *)slideshowViewController:(UIViewController *)arg1 poppedImageViewAtIndex:(long long)arg2;
@end
