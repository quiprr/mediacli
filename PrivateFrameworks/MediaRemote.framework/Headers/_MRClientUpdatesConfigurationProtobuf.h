//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying>
{
    BOOL _artworkUpdates;
    BOOL _keyboardUpdates;
    BOOL _nowPlayingUpdates;
    BOOL _outputDeviceUpdates;
    BOOL _volumeUpdates;
    struct {
        unsigned int artworkUpdates:1;
        unsigned int keyboardUpdates:1;
        unsigned int nowPlayingUpdates:1;
        unsigned int outputDeviceUpdates:1;
        unsigned int volumeUpdates:1;
    } _has;
}

@property(nonatomic) BOOL outputDeviceUpdates; // @synthesize outputDeviceUpdates=_outputDeviceUpdates;
@property(nonatomic) BOOL keyboardUpdates; // @synthesize keyboardUpdates=_keyboardUpdates;
@property(nonatomic) BOOL volumeUpdates; // @synthesize volumeUpdates=_volumeUpdates;
@property(nonatomic) BOOL artworkUpdates; // @synthesize artworkUpdates=_artworkUpdates;
@property(nonatomic) BOOL nowPlayingUpdates; // @synthesize nowPlayingUpdates=_nowPlayingUpdates;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasOutputDeviceUpdates;
@property(nonatomic) BOOL hasKeyboardUpdates;
@property(nonatomic) BOOL hasVolumeUpdates;
@property(nonatomic) BOOL hasArtworkUpdates;
@property(nonatomic) BOOL hasNowPlayingUpdates;

@end

