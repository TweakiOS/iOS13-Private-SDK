//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDateComponents, NSLocale, NSURL, NSURLRequest, WFLocation, WFRequestFormattingRules;

@protocol WFForecastRequestFormatter 
+ (NSURL *)hostURLForService;
+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDateComponents *)arg4 rules:(WFRequestFormattingRules *)arg5;
+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDateComponents *)arg4;
@end
