//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface QREncoder : NSObject
{
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2;
- (id)encodeWithECLevel:(int)arg1 version:(int)arg2 string:(id)arg3;
- (id)encodeWithECLevel:(int)arg1 version:(int)arg2 string:(id)arg3 AESPassphrase:(id)arg4;
- (id)encodeCStringWithECLevel:(int)arg1 version:(int)arg2 cstring:(const char *)arg3;
- (id)AESDecryptString:(id)arg1 withPassphrase:(id)arg2;
- (id)AESEncryptString:(id)arg1 withPassphrase:(id)arg2;
- (void)dealloc;

@end

