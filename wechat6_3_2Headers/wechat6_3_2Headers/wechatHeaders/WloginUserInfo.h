//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WloginUserInfo : NSObject <NSCoding>
{
    unsigned int dwUserUin;
    NSString *sUserMainAccount;
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
}

@property(retain) NSString *sNickName; // @synthesize sNickName;
@property unsigned char cGender; // @synthesize cGender;
@property unsigned char cAge; // @synthesize cAge;
@property unsigned short wFaceId; // @synthesize wFaceId;
@property(retain) NSString *sUserMainAccount; // @synthesize sUserMainAccount;
@property unsigned int dwUserUin; // @synthesize dwUserUin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)userinfo;
- (id)description;

@end
