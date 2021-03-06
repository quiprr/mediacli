//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
- (NSUInteger)encryptionType;
@property(readonly, nonatomic) NSUInteger state;
@property(readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property(readonly, nonatomic, getter=isRetrying) BOOL retrying;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSData *pairingData;
- (id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(NSUInteger)arg5;
- (id)initWithPairingData:(id)arg1 status:(int)arg2;

@end

