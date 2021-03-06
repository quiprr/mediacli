//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying>
{
    struct {
        NSUInteger list;
        NSUInteger count;
        NSUInteger size;
    } _pINEntrySeparatorIndexes;
    NSUInteger _validTextRangeLength;
    NSUInteger _validTextRangeLocation;
    int _autocapitalizationType;
    int _keyboardType;
    int _returnKeyType;
    BOOL _autocorrection;
    BOOL _enablesReturnKeyAutomatically;
    BOOL _secureTextEntry;
    BOOL _spellchecking;
    struct {
        unsigned int validTextRangeLength:1;
        unsigned int validTextRangeLocation:1;
        unsigned int autocapitalizationType:1;
        unsigned int keyboardType:1;
        unsigned int returnKeyType:1;
        unsigned int autocorrection:1;
        unsigned int enablesReturnKeyAutomatically:1;
        unsigned int secureTextEntry:1;
        unsigned int spellchecking:1;
    } _has;
}

@property(nonatomic) NSUInteger validTextRangeLength; // @synthesize validTextRangeLength=_validTextRangeLength;
@property(nonatomic) NSUInteger validTextRangeLocation; // @synthesize validTextRangeLocation=_validTextRangeLocation;
@property(nonatomic) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) BOOL spellchecking; // @synthesize spellchecking=_spellchecking;
@property(nonatomic) BOOL autocorrection; // @synthesize autocorrection=_autocorrection;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPINEntrySeparatorIndexes:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)pINEntrySeparatorIndexesAtIndex:(NSUInteger)arg1;
- (void)addPINEntrySeparatorIndexes:(NSUInteger)arg1;
- (void)clearPINEntrySeparatorIndexes;
@property(readonly, nonatomic) NSUInteger pINEntrySeparatorIndexes;
@property(readonly, nonatomic) NSUInteger pINEntrySeparatorIndexesCount;
@property(nonatomic) BOOL hasValidTextRangeLength;
@property(nonatomic) BOOL hasValidTextRangeLocation;
@property(nonatomic) BOOL hasSecureTextEntry;
@property(nonatomic) BOOL hasEnablesReturnKeyAutomatically;
@property(nonatomic) BOOL hasSpellchecking;
@property(nonatomic) BOOL hasAutocorrection;
- (int)StringAsReturnKeyType:(id)arg1;
- (id)returnKeyTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasReturnKeyType;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
- (int)StringAsKeyboardType:(id)arg1;
- (id)keyboardTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasKeyboardType;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
- (int)StringAsAutocapitalizationType:(id)arg1;
- (id)autocapitalizationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAutocapitalizationType;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
- (void)dealloc;

@end

