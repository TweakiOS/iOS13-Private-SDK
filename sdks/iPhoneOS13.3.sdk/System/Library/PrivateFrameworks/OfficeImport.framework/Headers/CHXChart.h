//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXChart : NSObject
{
}

+ (id)readFromXmlDocument:(struct _xmlDoc )arg1 chartStyleId:(int)arg2 state:(id)arg3;
+ (id)readFromXmlDocument:(struct _xmlDoc )arg1 state:(id)arg2;
+ (int)chdDisplayBlanksAsEnumFromXmlElement:(struct _xmlNode )arg1;
+ (void)readDefaultTextPropertiesFromXmlNode:(struct _xmlNode )arg1 chart:(id)arg2 state:(id)arg3;
+ (void)readChartFromXmlNode:(struct _xmlNode )arg1 chart:(id)arg2 state:(id)arg3;

@end

